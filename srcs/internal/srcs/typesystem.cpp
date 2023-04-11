// #include "ast.h"
#include "typesystem.h"

#include <memory>
#include <optional>

#include "config_misc.h"
// #include "define.h"
#include "frontend.h"
#include "ir.h"
#include "spdlog/spdlog.h"
#include "utils.h"
#include "var_definition.h"

using namespace std;
namespace polyglot {

#ifdef PHPFUZZ
const char *member_str = "->";
#else
const char *member_str = ".";
#endif

void filter_element(map<int, vector<string>> &vars,
                    set<int> &satisfiable_types) {
  map<int, vector<string>> filtered;
  for (auto t : satisfiable_types) {
    if (vars.find(t) != vars.end()) {
      filtered[t] = std::move(vars[t]);
    }
  }
  vars = std::move(filtered);
}

namespace typesystem {

#define DBG 0
#define SOLIDITYFUZZ
#define dbg_cout \
  if (DBG) cout

// map<int, vector<OPRule>> TypeSystem::op_rules_;
// map<string, map<string, map<string, OPTYPE>>> TypeSystem::op_id_map_;
// set<IRTYPE> TypeSystem::s_basic_unit_ = gen::GetBasicUnits();
// int TypeSystem::gen_counter_;
// int TypeSystem::function_gen_counter_;
// int TypeSystem::current_fix_scope_;
// bool TypeSystem::contain_used_;
// int TypeSystem::current_scope_id_;
// shared_ptr<Scope> TypeSystem::current_scope_ptr_;
// map<IRPtr, shared_ptr<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>>
//     TypeSystem::cache_inference_map_;
map<int, vector<OPRule>> TypeInferer::op_rules_;
map<string, map<string, map<string, int>>> TypeInferer::op_id_map_;

IRPtr cur_statement_root = nullptr;

unsigned long type_fix_framework_fail_counter = 0;
unsigned long top_fix_fail_counter = 0;
unsigned long top_fix_success_counter = 0;

static set<TYPEID> current_define_types;

void TypeSystem::debug() {
  spdlog::info("---------debug-----------");
  spdlog::info("all_internal_compound_types: {}",
               all_internal_compound_types.size());
  for (auto i : all_internal_compound_types) {
    auto p = get_compound_type_by_type_id(i);
    spdlog::info("class: {}", p->type_name_);
    for (auto &i : p->v_members_) {
      for (auto &name : i.second) {
        spdlog::info("\t{}", name);
      }
    }
    spdlog::info("");
  }
  spdlog::info("---------end------------");
}

void TypeSystem::init_internal_obj(string dirname) {
  auto files = get_all_files_in_dir(dirname.c_str());
  for (auto &file : files) {
    init_one_internal_obj(dirname + "/" + file);
  }
}

void TypeSystem::init_one_internal_obj(string filename) {
  spdlog::info("Initting builtin file: {}", filename);
  std::string content = ReadFileIntoString(filename);
  // set_scope_translation_flag(true);
  auto res = frontend_->TranslateToIR(content);
  // set_scope_translation_flag(false);
  if (!res) {
    spdlog::error("[init_internal_obj] parse {} failed", filename);
    return;
  }

  is_internal_obj_setup = true;
  // TODO: Fix this.
  /*
  if (create_symbol_table(res) == false)
    spdlog::error("[init_internal_obj] setup {} failed", filename);
  */
  is_internal_obj_setup = false;
}

void TypeSystem::init() {
  s_basic_unit_ = gen::Configuration::GetInstance().GetBasicUnits();
  init_basic_types();
  init_convert_chain();
  TypeInferer::init_type_dict();
  init_internal_obj(
      gen::Configuration::GetInstance().GetBuiltInObjectFilePath());
}

void TypeInferer::init_type_dict() {
  // string line;
  // ifstream input_file("./js_grammar/type_dict");

  vector<string> type_dict = gen::Configuration::GetInstance().GetOpRules();
  for (auto &line : type_dict) {
    if (line.empty()) continue;

    OPRule rule = parse_op_rule(line);
    op_rules_[rule.op_id_].push_back(rule);
  }
}

int gen_id() {
  static int id = 1;
  return id++;
}

TypeSystem::TypeSystem(std::shared_ptr<Frontend> frontend) {
  if (frontend == nullptr) {
    frontend_ = std::make_shared<AntlrFrontend>();
  } else {
    frontend_ = frontend;
  }
  init();
}
void TypeSystem::split_to_basic_unit(IRPtr root, queue<IRPtr> &q,
                                     map<IRPtr *, IRPtr> &m_save) {
  split_to_basic_unit(root, q, m_save, s_basic_unit_);
}

void TypeSystem::split_to_basic_unit(IRPtr root, queue<IRPtr> &q,
                                     map<IRPtr *, IRPtr> &m_save,
                                     set<IRTYPE> &s_basic_unit) {
  if (root->left_child &&
      s_basic_unit.find(root->left_child->type) != s_basic_unit.end()) {
    m_save[&root->left_child] = root->left_child;
    q.push(root->left_child);
    root->left_child = nullptr;
  }
  if (root->left_child)
    split_to_basic_unit(root->left_child, q, m_save, s_basic_unit);

  if (root->right_child &&
      s_basic_unit.find(root->right_child->type) != s_basic_unit.end()) {
    m_save[&root->right_child] = root->right_child;
    q.push(root->right_child);
    root->right_child = nullptr;
  }
  if (root->right_child)
    split_to_basic_unit(root->right_child, q, m_save, s_basic_unit);
}

void TypeSystem::connect_back(map<IRPtr *, IRPtr> &m_save) {
  for (auto &i : m_save) {
    *i.first = i.second;
  }
}

FIXORDER TypeInferer::get_fix_order(int op) {
  assert(op_rules_.find(op) != op_rules_.end());
  assert(op_rules_[op].empty() == false);
  return op_rules_[op].front().fix_order_;
  /*
  if(fix_order_map_.find(op) == fix_order_map_.end()){
      return DEFAULT;
  }
  return fix_order_map_[op];
  */
}

int TypeInferer::get_op_value(std::shared_ptr<IROperator> op) {
  if (op == nullptr) return 0;
  return op_id_map_[op->prefix][op->middle][op->suffix];
}

bool TypeInferer::is_op_null(std::shared_ptr<IROperator> op) {
  return (op == nullptr ||
          (op->suffix == "" && op->middle == "" && op->prefix == ""));
}

void search_by_data_type(IRPtr cur, DataType type, vector<IRPtr> &result,
                         DataType forbit_type = kDataWhatever,
                         bool go_inside = false) {
  if (cur->data_type == type) {
    result.push_back(cur);
  } else if (forbit_type != kDataWhatever && cur->data_type == forbit_type) {
    return;
  }
  if (cur->data_type != type || go_inside == true) {
    if (cur->left_child) {
      search_by_data_type(cur->left_child, type, result, forbit_type,
                          go_inside);
    }
    if (cur->right_child) {
      search_by_data_type(cur->right_child, type, result, forbit_type,
                          go_inside);
    }
  }
}

ScopeType scope_js(const string &s) {
  if (s.find("var") != string::npos) return kScopeFunction;
  if (s.find("let") != string::npos || s.find("const") != string::npos)
    return kScopeStatement;
  for (int i = 0; i < 0x1000; i++) cout << s << endl;
  assert(0);
  return kScopeStatement;
}

// map<IR*, shared_ptr<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>>
// TypeSystem::cache_inference_map_;
bool TypeInferer::Infer(IRPtr &cur, int scope_type) {
  return type_inference_new(cur, scope_type);
}

bool TypeInferer::type_inference_new(IRPtr cur, int scope_type) {
  auto cur_type = std::make_shared<CandidateTypes>();
  int res_type = NOTEXIST;
  bool flag;
  if (DBG) cout << "Infering: " << cur->to_string() << endl;
  if (DBG) cout << "Scope type: " << scope_type << endl;

  if (cur->type == frontend_->GetStringLiteralType()) {
    res_type = get_type_id_by_string("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  } else if (cur->type == frontend_->GetIntLiteralType()) {
    res_type = get_type_id_by_string("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  } else if (cur->type == frontend_->GetFloatLiteralType()) {
    res_type = get_type_id_by_string("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  }

  if (cur->type == frontend_->GetIdentifierType()) {
    // handle here
    if (cur->GetString() == "FIXME") {
      spdlog::debug("See a fixme!");
      auto v_usable_type = collect_usable_type(cur);
      spdlog::debug("collect_usable_type.size(): {}", v_usable_type.size());
      for (auto t : v_usable_type) {
        spdlog::debug("Type: {}", get_type_name_by_id(t));
        assert(t);
        cur_type->AddCandidate(t, t, 0);
      }
      cache_inference_map_[cur] = cur_type;
      return cur_type->HasCandidate();
    }

    if (scope_type == NOTEXIST) {
      // match name in cur->scope_

      res_type =
          locate_defined_variable_by_name(cur->GetString(), cur->scope_id);
      if (DBG) cout << "Name: " << cur->GetString() << endl;
      if (DBG) cout << "Type: " << res_type << endl;
      // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID,
      // TYPEID>>>>();
      if (!res_type) res_type = ANYTYPE;  // should fix
      cur_type->AddCandidate(res_type, res_type, 0);
      cache_inference_map_[cur] = cur_type;
      return true;

      // return cur->value_type_ = res_type;
    } else {
      // match name in scope_type
      // currently only class/struct is possible
      if (DBG) cout << "Scope type: " << scope_type << endl;
      if (is_compound_type(scope_type) == false) {
        if (is_function_type(scope_type)) {
          auto ret_type =
              get_function_type_by_type_id(scope_type)->return_type_;
          if (is_compound_type(ret_type)) {
            scope_type = ret_type;
          } else {
            return false;
          }
        } else
          return false;
      }
      // assert(is_compound_type(scope_type));
      auto ct = get_compound_type_by_type_id(scope_type);
      for (auto &iter : ct->v_members_) {
        for (auto &member : iter.second) {
          if (cur->GetString() == member) {
            if (DBG) cout << "Match member" << endl;
            // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID,
            // TYPEID>>>>();
            assert(iter.first);
            cur_type->AddCandidate(iter.first, iter.first, 0);
            cache_inference_map_[cur] = cur_type;
            return true;

            // return cur->value_type_ = iter.first;
          }
        }
      }
      return false;  // cannot find member
    }
  }

  if (is_op_null(cur->op)) {
    if (cur->left_child && cur->right_child) {
      flag = type_inference_new(cur->left_child, scope_type);
      if (!flag) return flag;
      flag = type_inference_new(cur->right_child, scope_type);
      if (!flag) return flag;
      for (auto &left :
           cache_inference_map_[cur->left_child]->GetCandidates()) {
        for (auto &right :
             cache_inference_map_[cur->right_child]->GetCandidates()) {
          auto res_type = least_upper_common_type(left.first, right.first);
          cur_type->AddCandidate(res_type, left.first, right.first);
        }
      }
      cache_inference_map_[cur] = cur_type;
    } else if (cur->left_child) {
      flag = type_inference_new(cur->left_child, scope_type);
      if (!flag || !cache_inference_map_[cur->left_child]->HasCandidate())
        return false;
      if (DBG) cout << "Left: " << cur->left_child->to_string() << endl;
      assert(cache_inference_map_[cur->left_child]->HasCandidate());
      cache_inference_map_[cur] = cache_inference_map_[cur->left_child];
    } else {
      if (DBG) cout << cur->to_string() << endl;
      return false;
      assert(0);
    }
    return true;
  }

  // handle by OP

  auto cur_op = get_op_value(cur->op);
  if (cur_op == NOTEXIST) {
    if (DBG) cout << cur->to_string() << endl;
    if (DBG)
      cout << cur->op->prefix << ", " << cur->op->middle << ", "
           << cur->op->suffix << endl;
    if (DBG) cout << "OP not exist!" << endl;
    return false;
    assert(0);
  }

  if (is_op1(cur_op)) {
    // assert(cur->left_); //for test
    if (cur->left_child == nullptr) {
      return false;
    }
    flag = type_inference_new(cur->left_child, scope_type);
    if (!flag) return flag;
    // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>();
    for (auto &left : cache_inference_map_[cur->left_child]->GetCandidates()) {
      auto left_type = left.first;
      if (DBG) cout << "Reaching op1" << endl;
      if (DBG)
        cout << cur->op->prefix << ", " << cur->op->middle << ", "
             << cur->op->suffix << endl;
      res_type = query_result_type(cur_op, left_type);
      if (DBG) cout << "Result_type: " << res_type << endl;
      if (res_type != NOTEXIST) {
        cur_type->AddCandidate(res_type, left_type, 0);
      }
    }
    cache_inference_map_[cur] = cur_type;
  } else if (is_op2(cur_op)) {
    if (!(cur->left_child && cur->right_child)) return false;
    // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>();
    switch (get_fix_order(cur_op)) {
      case LEFT_TO_RIGHT: {
        // this shouldn't contain "FIXME"
        if (DBG) cout << "Left to right" << endl;
        flag = type_inference_new(cur->left_child, scope_type);
        if (!flag) return flag;
        if (!cache_inference_map_[cur->left_child]->HasCandidate())
          return false;
        auto left_type =
            cache_inference_map_[cur->left_child]->GetARandomCandidateType();
        auto new_left_type = left_type;
        // if(cur->op_->middle_ == "->"){
        if (get_op_property(cur_op) == OP_PROP_Dereference) {
          auto tmp_ptr = get_type_by_type_id(left_type);
          assert(tmp_ptr->is_pointer_type());
          if (DBG) cout << "left type of -> is : " << left_type << endl;
          auto type_ptr = static_pointer_cast<PointerType>(tmp_ptr);
          if (DBG) cout << "Type ptr: " << type_ptr->type_name_ << endl;
          assert(type_ptr);
          new_left_type = type_ptr->orig_type_;
        }
        flag = type_inference_new(cur->right_child, new_left_type);
        if (!flag) return flag;
        auto right_type =
            cache_inference_map_[cur->right_child]->GetARandomCandidateType();
        res_type = right_type;
        cur_type->AddCandidate(res_type, left_type, right_type);
        break;
      }
      // Rui Test
      case RIGHT_TO_LEFT: {
        assert(0);
        break;
      }
      default: {
        // handle a + b Here
        flag = type_inference_new(cur->left_child, scope_type);
        if (!flag) return flag;
        flag = type_inference_new(cur->right_child, scope_type);
        if (!flag) return flag;
        auto left_type = cache_inference_map_[cur->left_child];
        auto right_type = cache_inference_map_[cur->right_child];
        // handle function call case-by-case

        if (left_type->GetCandidates().size() == 1 &&
            is_function_type(left_type->GetARandomCandidateType())) {
          res_type =
              get_function_type_by_type_id(left_type->GetARandomCandidateType())
                  ->return_type_;
          if (DBG) cout << "get_function_type_by_type_id: " << res_type << endl;
          cur_type->AddCandidate(res_type, 0, 0);
          break;
        }

        // res_type = query_type_dict(cur_op, left_type, right_type);
        for (auto &left_cahce :
             cache_inference_map_[cur->left_child]->GetCandidates()) {
          for (auto &right_cache :
               cache_inference_map_[cur->right_child]->GetCandidates()) {
            auto a_left_type = left_cahce.first;
            auto a_right_type = right_cache.first;
            if (DBG)
              cout << "[a+b] left_type = " << a_left_type << ":"
                   << get_type_name_by_id(a_left_type)
                   << " ,right_type = " << a_right_type << ":"
                   << get_type_name_by_id(a_right_type) << ", op = " << cur_op
                   << endl;
            if (DBG)
              cout << "Left to alltype: "
                   << is_derived_type(a_left_type, ALLTYPES)
                   << ", right to alltype: "
                   << is_derived_type(a_right_type, ALLTYPES) << endl;
            auto t = query_result_type(cur_op, a_left_type, a_right_type);
            if (t != NOTEXIST) {
              if (DBG) cout << "Adding" << endl;
              cur_type->AddCandidate(t, a_left_type, a_right_type);
            }
          }
        }
      }
    }
  } else {
    assert(0);
  }
  cache_inference_map_[cur] = cur_type;
  return cur_type->HasCandidate();
}

int TypeInferer::locate_defined_variable_by_name(const string &var_name,
                                                 int scope_id) {
  int result = NOTEXIST;
  auto current_scope = scope_tree_->GetScopeById(scope_id);
  while (current_scope) {
    // if(DBG) cout <<"Searching scope "<< current_scope->scope_id_ << endl;
    auto def = current_scope->definitions_.GetDefinition(var_name);
    if (def.has_value()) {
      return def->type;
    }
    current_scope = current_scope->parent_.lock();
  }

  return result;
}

set<int> TypeInferer::collect_usable_type(IRPtr cur) {
  set<int> result;
  auto ir_id = cur->id;
  auto current_scope = scope_tree_->GetScopeById(cur->scope_id);
  while (current_scope) {
    if (DBG)
      cout << "Collecting scope id: " << current_scope->scope_id_ << endl;
    if (current_scope->definitions_.GetTable().size()) {
      for (auto &iter : current_scope->definitions_.GetTable()) {
        auto tmp_type = iter.first;
        bool flag = false;
        /*
        cout << "Type: " << get_type_name_by_id(tmp_type) << endl;
        for(auto &kk: iter.second){
            cout << kk.first << endl;
        }
        */
        auto type_ptr = get_type_by_type_id(tmp_type);
        if (type_ptr == nullptr) continue;
        for (auto &kk : iter.second) {
          if (ir_id > kk.order_id) {
            flag = true;
            break;
          }
        }

        if (flag == false) {
          continue;
        }

        if (type_ptr->is_function_type()) {
          // whether to insert the function type it self
          auto ptr = get_function_type_by_type_id(tmp_type);
          result.insert(ptr->return_type_);
        } else if (type_ptr->is_compound_type()) {
          auto ptr = get_compound_type_by_type_id(tmp_type);
          for (auto &iter : ptr->v_members_) {
            // haven't search deeper right now
            result.insert(iter.first);
          }
          result.insert(tmp_type);
        } else {
          result.insert(tmp_type);
        }
      }
    }
    current_scope = current_scope->parent_.lock();
  }

  return result;
}

pair<OPTYPE, vector<int>> TypeInferer::collect_sat_op_by_result_type(
    int type, map<int, vector<set<int>>> &all_satisfiable_types,
    map<int, vector<string>> &function_map,
    map<int, vector<string>> &compound_var_map) {
  static map<int, vector<vector<int>>>
      cache;  // map<type, vector<pair<opid, int<operand_1, operand_2>>>
  auto res = make_pair(0, std::move(vector<int>(2, 0)));

  if (cache.empty()) {
    for (auto &rule : op_rules_) {
      for (auto &r : rule.second) {
        if (r.operand_num_ == 2) {
          cache[r.result_].push_back({r.op_id_, r.left_, r.right_});
        } else {
          cache[r.result_].push_back({r.op_id_, r.left_});
        }
      }
    }
  }
  assert(cache.empty() == false);
  if (DBG) cout << "result type: " << type << endl;
  int counter = 0;
  for (auto &iter : cache) {
    if (DBG) cout << "OP result type: " << iter.first << endl;
    if (is_derived_type(type, iter.first)) {
      for (auto &v : iter.second) {
        int left = 0, right = 0;
        if (v[1] > ALLUPPERBOUND &&
            all_satisfiable_types.find(v[1]) == all_satisfiable_types.end()) {
          continue;
        }
        switch (v[1]) {
          case ALLTYPES:
            left = type;
            break;
          case ALLFUNCTION:
            if (function_map.empty()) continue;
            left = random_pick(function_map)->first;
            break;
          case ALLCOMPOUNDTYPE:
          //    break;
          default:
            if (all_satisfiable_types.find(v[1]) == all_satisfiable_types.end())
              continue;
            left = v[1];
            break;
        }
        // left = v[1] < ALLUPPERBOUND? type: v[1];

        if (v.size() == 3) {
          if (v[2] > ALLUPPERBOUND &&
              all_satisfiable_types.find(v[2]) == all_satisfiable_types.end()) {
            continue;
          }
          right = v[2] < ALLUPPERBOUND ? type : v[2];
        }

        // if(DBG) cout << "Collect one!" << endl;
        if (res.first == 0 || !(get_rand_int(counter + 1))) {
          res.first = v[0];
          res.second = {left, right};
        }
        counter++;
      }
    }
  }
  return res;
}

vector<string> TypeInferer::get_op_by_optype(OPTYPE op_type) {
  for (auto &s1 : op_id_map_) {
    for (auto &s2 : s1.second) {
      for (auto &s3 : s2.second) {
        if (s3.second == op_type) return {s1.first, s2.first, s3.first};
      }
    }
  }

  return {};
}

/*
bool TypeSystem::filter_function_type(
    map<int, vector<string>> &function_map,
    const map<int, vector<string>> &compound_var_map,
    const map<int, vector<string>> &simple_type, int type) {
  map<int, set<int>> func_map;
  set<int> current_types;

  // setup function graph into a map
  for (auto &func : function_map) {
    auto func_ptr = get_function_type_by_type_id(func.first);
    func_map[func.first] =
        set<int>(func_ptr->v_arg_types_.begin(), func_ptr->v_arg_types_.end());
  }

  // collect simple types into current_types
  for (auto &simple : simple_type) current_types.insert(simple.first);

  // collect all types from compound type into current_types
  set<int> visit;
  for (auto &compound : compound_var_map) {
    auto compound_res = get_all_types_from_compound_type(compound.first, visit);
    for (auto &i : compound_res) current_types.insert(i);
  }

  // traverse function graph
  // remove satisfied function type and add them into current_types
  bool is_change;
  do {
    is_change = false;
    for (auto func_itr = func_map.begin(); func_itr != func_map.end();) {
      auto func = *func_itr;
      auto func_ptr = get_function_type_by_type_id(func.first);
      for (auto &t : current_types) {
        func.second.erase(t);
      }
      if (func.second.size() == 0) {
        is_change = true;
        func_map.erase(func_itr++);
        current_types.insert(func_ptr->return_type_);
      } else {
        func_itr++;
      }
    }
  } while (is_change == true);

  // unsatisfied function remain in func_map
  for (auto &f : func_map) {
    if (DBG) cout << "remove function: " << f.first << endl;
    function_map.erase(f.first);
  }
  return true;
}
*/

#define SIMPLE_VAR_IDX 0
#define STRUCTURE_IDX 1
#define FUNCTION_CALL_IDX 2
#define HANDLER_CASE_NUM 3

/*
string TypeSystem::get_class_member(TYPEID type_id) {
  string res;
  auto compound_ptr = get_compound_type_by_type_id(type_id);

  if (compound_ptr == nullptr) return "";
  while (true) {
    auto var_info = *random_pick(compound_ptr->v_members_);
    auto var_type = var_info.first;
    auto var_name = *random_pick(var_info.second);
    if (is_compound_type(var_type)) {
      res += "." + var_name;
      compound_ptr = get_compound_type_by_type_id(var_type);
    } else if (is_function_type(var_type)) {
      map<int, vector<string>> tmp_func_map;
      tmp_func_map[var_type] = {var_name};
      res += "." + TypeSystem::function_call_gen_handler(tmp_func_map, nullptr);
      break;
    } else {
      res += "." + var_name;
      break;
    }
  }

  return res;
}
*/

IRPtr TypeSystem::locate_mutated_ir(IRPtr root) {
  if (root->left_child) {
    if (root->right_child == nullptr) {
      return locate_mutated_ir(root->left_child);
    }

    if (contain_fixme(root->right_child) == false) {
      return locate_mutated_ir(root->left_child);
    }
    if (contain_fixme(root->left_child) == false) {
      return locate_mutated_ir(root->right_child);
    }

    return root;
  }

  if (contain_fixme(root)) return root;
  return nullptr;
}

bool TypeSystem::simple_fix(IRPtr ir, int type, TypeInferer &inferer) {
  // if (contain_fixme(ir) == false)
  //     return true;

  if (type == NOTEXIST) return false;

  spdlog::debug("NodeType: {}", frontend_->GetIRTypeStr(ir->type));
  spdlog::debug("Type: {}", type);

  // if (ir->type_ == kIdentifier && ir->str_val_ == "FIXME")
  if (ir->ContainString() && ir->GetString() == "FIXME") {
    spdlog::debug("Reach here");
    validation::ExpressionGenerator generator(scope_tree_);
    ir->data = generator.GenerateExpression(type, ir);
    return true;
  }

  if (!gen::Configuration::GetInstance().IsWeakType()) {
    if (!inferer.GetCandidateTypes(ir)->HasCandidate(type)) {
      auto new_type = NOTEXIST;
      int counter = 0;
      for (auto &iter : inferer.GetCandidateTypes(ir)->GetCandidates()) {
        if (is_derived_type(type, iter.first)) {
          if (new_type == NOTEXIST || get_rand_int(counter) == 0) {
            new_type = iter.first;
          }
          counter++;
        }
      }

      type = new_type;
      spdlog::debug("nothing in cache_inference_map_: {}", ir->to_string());
      spdlog::debug("NodeType: {}", frontend_->GetIRTypeStr(ir->type));
    }
    if (!inferer.GetCandidateTypes(ir)->HasCandidate(type)) return false;
    if (ir->left_child) {
      auto iter =
          *random_pick(inferer.GetCandidateTypes(ir)->GetCandidates(type));
      if (ir->right_child) {
        simple_fix(ir->left_child, iter.left, inferer);
        simple_fix(ir->right_child, iter.right, inferer);
      } else {
        simple_fix(ir->left_child, iter.left, inferer);
      }
    }
  } else {
    if (ir->left_child) simple_fix(ir->left_child, type, inferer);
    if (ir->right_child) simple_fix(ir->right_child, type, inferer);
  }
  return true;
}

bool TypeSystem::top_fix(IRPtr root) {
  stack<IRPtr> stk;

  stk.push(root);

  bool res = true;

  TypeInferer inferer(frontend_);
  while (res && !stk.empty()) {
    root = stk.top();
    stk.pop();
    if (gen::Configuration::GetInstance().IsWeakType()) {
      // if(root->type_ == kSingleExpression){
      if (root->ContainString() && root->GetString() == "FIXME") {
        int type = ALLTYPES;
        res = simple_fix(root, type, inferer);
      } else {
        if (root->right_child) stk.push(root->right_child);
        if (root->left_child) stk.push(root->left_child);
      }
    } else {
      if (root->type == gen::Configuration::GetInstance().GetFixIRType() ||
          (root->ContainString() && root->GetString() == "FIXME")) {
        if (contain_fixme(root) == false) continue;

        bool flag = inferer.Infer(root, 0);
        if (!flag) {
          res = false;
          break;
        }
        auto iter =
            random_pick(inferer.GetCandidateTypes(root)->GetCandidates());
        auto t = iter->first;
        res = simple_fix(root, t, inferer);
      } else {
        if (root->right_child) stk.push(root->right_child);
        if (root->left_child) stk.push(root->left_child);
      }
    }
  }
  return res;
}

bool TypeSystem::validate_syntax_only(IRPtr root) {
  if (frontend_->Parsable(root->to_string()) == false) return false;
  // ast->deep_delete();
  queue<IRPtr> q;
  map<IRPtr *, IRPtr> m_save;
  int node_count = 0;
  q.push(root);
  split_to_basic_unit(root, q, m_save);

  if (q.size() > 15) {
    connect_back(m_save);
    return false;
  }

  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    int tmp_count = calc_node_num(cur);
    node_count += tmp_count;
    if (tmp_count > 250 || node_count > 1500) {
      connect_back(m_save);
      return false;
    }
  }

  connect_back(m_save);

  return true;
}

void TypeSystem::MarkFixMe(IRPtr root) {
  if (root->left_child) {
    if (root->left_child->data_type == kDataFixUnit) {
      if (contain_fixme(root->left_child)) {
        auto save_ir_id = root->left_child->id;
        auto save_scope = root->left_child->scope_id;
        root->left_child = std::make_shared<IR>(
            frontend_->GetStringLiteralType(), std::string("FIXME"));
        root->left_child->scope_id = save_scope;
        root->left_child->id = save_ir_id;
      }
    } else {
      MarkFixMe(root->left_child);
    }
  }
  if (root->right_child) {
    if (root->right_child->data_type == kDataFixUnit) {
      if (contain_fixme(root->right_child)) {
        auto save_ir_id = root->right_child->id;
        auto save_scope = root->right_child->scope_id;
        root->right_child =
            std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME");
        root->right_child->scope_id = save_scope;
        root->right_child->id = save_ir_id;
      }
    } else {
      MarkFixMe(root->right_child);
    }
  }
  return;
}

/*
bool TypeSystem::validate(IRPtr &root) {
  bool res = false;
  gen_counter_ = 0;
  current_fix_scope_ = -1;
  root = frontend_->TranslateToIR(root->to_string());
  if (root == nullptr) {
    return false;
  }

  MarkFixMe(root);
  assert(frontend_->Parsable(root->to_string()) && "parse error");
  // scope_tree_ = BuildScopeTree(root);

  // res = create_symbol_table(root);
  if (res == false) {
    type_fix_framework_fail_counter++;
    root = nullptr;
    return false;
  }
  res = top_fix(root);
  if (res == false) {
    top_fix_fail_counter++;
    root = nullptr;
    return false;
  }
  top_fix_success_counter++;

  clear_definition_all();

  return res;
}
*/

string TypeSystem::generate_definition(string &var_name, int type) {
  auto type_ptr = get_type_by_type_id(type);
  assert(type_ptr != nullptr);
  auto type_str = type_ptr->type_name_;
  string res = type_str + " " + var_name + ";";

  return res;
}

string TypeSystem::generate_definition(vector<string> &var_name, int type) {
  if (DBG) cout << "Generating definitions for type: " << type << endl;
  auto type_ptr = get_type_by_type_id(type);
  assert(type_ptr != nullptr);
  assert(var_name.size());
  auto type_str = type_ptr->type_name_;
  string res = type_str + " ";
  string var_list = var_name[0];
  for (auto itr = var_name.begin() + 1; itr != var_name.end(); itr++)
    var_list += ", " + *itr;
  res += var_list + ";";

  return res;
}

bool OPRule::is_op1() { return operand_num_ == 1; }

bool OPRule::is_op2() { return operand_num_ == 2; }

int OPRule::apply(int arg1, int arg2) {
  // can apply rule here.
  if (result_ != ALLTYPES && result_ != ALLCOMPOUNDTYPE &&
      result_ != ALLFUNCTION) {
    return result_;
  }
  if (is_op1()) {
    switch (property_) {
      case OP_PROP_Reference:
        return get_or_create_pointer_type(arg1);
      case OP_PROP_Dereference:
        if (is_pointer_type(arg1) == false) return NOTEXIST;
        return get_pointer_type_by_type_id(arg1)->orig_type_;
      case OP_PROP_FunctionCall:
        if (is_function_type(arg1) == false) {
          break;
        }
        // cout << get_function_type_by_type_id(arg1)->return_type_ << endl;
        // assert(0);
        // cout << "reach here" << endl;
        return get_function_type_by_type_id(arg1)->return_type_;
      case OP_PROP_Default:
        return arg1;
      default:
        assert(0);
    }
  } else {
  }
  return least_upper_common_type(arg1, arg2);
}

int TypeInferer::query_result_type(int op, int arg1, int arg2) {
  bool isop1 = arg2 == 0;

  if (op_rules_.find(op) == op_rules_.end()) {
    dbg_cout << "Not exist op!" << endl;
    assert(0);
  }

  OPRule *rule = nullptr;
  int left = 0, right = 0, result_type = 0;

  for (auto &r : op_rules_[op]) {  // exact match
    if (r.is_op1() != isop1) continue;

    if (isop1) {
      if (r.left_ == arg1) return r.apply(arg1);
    } else {
      if (r.left_ == arg1 && r.right_ == arg2) return r.apply(arg1, arg2);
    }
  }

  for (auto &r : op_rules_[op]) {  // derived type match
    if (r.is_op1() != isop1) continue;

    if (isop1) {
      if (is_derived_type(arg1, r.left_)) return r.apply(arg1);
    } else {
      if (is_derived_type(arg1, r.left_) && is_derived_type(arg2, r.right_))
        return r.apply(arg1, arg2);
    }
  }

  if (DBG) cout << "Here , no exist" << endl;
  return NOTEXIST;
}

int TypeInferer::get_op_property(int op_id) {
  assert(op_rules_.find(op_id) != op_rules_.end());
  assert(op_rules_[op_id].size());

  return op_rules_[op_id][0].property_;
}

bool TypeInferer::is_op1(int op_id) {
  if (op_rules_.find(op_id) == op_rules_.end()) {
    return false;
  }

  assert(op_rules_[op_id].size());

  return op_rules_[op_id][0].operand_num_ == 1;
}

bool TypeInferer::is_op2(int op_id) {
  if (op_rules_.find(op_id) == op_rules_.end()) {
    return false;
  }

  assert(op_rules_[op_id].size());

  return op_rules_[op_id][0].operand_num_ == 2;
}

void OPRule::add_property(const string &s) {
  if (s == "FUNCTIONCALL") {
    property_ = OP_PROP_FunctionCall;
  } else if (s == "DEREFERENCE") {
    property_ = OP_PROP_Dereference;
  } else if (s == "REFERENCE") {
    property_ = OP_PROP_Reference;
  }
}

OPRule TypeInferer::parse_op_rule(string s) {
  vector<string> v_strbuf;
  int pos = 0, last_pos = 0;
  while ((pos = s.find(" # ", last_pos)) != string::npos) {
    v_strbuf.push_back(s.substr(last_pos, pos - last_pos));
    last_pos = pos + 3;
  }

  v_strbuf.push_back(s.substr(last_pos, s.size() - last_pos));

  int cur_id = op_id_map_[v_strbuf[1]][v_strbuf[2]][v_strbuf[3]];
  if (cur_id == 0) {
    cur_id = op_id_map_[v_strbuf[1]][v_strbuf[2]][v_strbuf[3]] = gen_id();
    if (DBG) cout << cur_id << endl;
  }

  if (DBG) cout << s << endl;
  if (v_strbuf[0][0] == '2') {
    auto left = get_basic_type_id_by_string(v_strbuf[4]);
    auto right = get_basic_type_id_by_string(v_strbuf[5]);
    auto result = get_basic_type_id_by_string(v_strbuf[6]);

    assert(left && right && result);

    OPRule res(cur_id, result, left, right);

    if (v_strbuf[7] == "LEFT") {
      res.fix_order_ = LEFT_TO_RIGHT;
    } else if (v_strbuf[7] == "RIGHT") {
      res.fix_order_ = RIGHT_TO_LEFT;
    } else {
      res.fix_order_ = DEFAULT;
    }
    return std::move(res);
  } else {
    assert(v_strbuf[0][0] == '1');
    if (DBG) cout << "Here: " << v_strbuf[4] << endl;
    auto left = get_basic_type_id_by_string(v_strbuf[4]);
    auto result = get_basic_type_id_by_string(v_strbuf[5]);

    OPRule res(cur_id, result, left);
    res.add_property(v_strbuf.back());

    if (v_strbuf[6] == "LEFT") {
      res.fix_order_ = LEFT_TO_RIGHT;
    } else if (v_strbuf[6] == "RIGHT") {
      res.fix_order_ = RIGHT_TO_LEFT;
    } else {
      res.fix_order_ = DEFAULT;
    }
    return std::move(res);
  }
}

/*
bool TypeSystem::insert_definition(int scope_id, int type_id, string var_name) {
  auto scope_ptr = scope_tree_->GetScopeById(scope_id);
  auto type_ptr = get_type_by_type_id(type_id);
  IRPtr insert_target = nullptr;

  if (!scope_ptr || !type_ptr) return false;

  for (auto ir : scope_ptr->v_ir_set_) {
    if (isInsertable(ir->data_flag_)) {
      insert_target = ir;
      break;
    }
  }

  if (!insert_target) return false;

  auto def_str = generate_definition(var_name, type_id);
  auto def_ir = std::make_shared<IR>(kIdentifier, def_str, kDataWhatever);
  auto root_ir =
      std::make_shared<IR>(kUnknown, OP0(), def_ir, insert_target->left_);

  root_ir->scope_id_ = def_ir->scope_id_ = scope_id;
  insert_target->left_ = root_ir;

  scope_ptr->add_definition(type_id, var_name, def_ir->id_);
  scope_ptr->v_ir_set_.push_back(root_ir);
  scope_ptr->v_ir_set_.push_back(def_ir);

  return true;
}
*/

}  // namespace typesystem

namespace validation {
ValidationError SemanticValidator::Validate(IRPtr &root) {
  old_type_system_.MarkFixMe(root);
  std::shared_ptr<ScopeTree> scope_tree = BuildScopeTree(root);
  scope_tree->BuildSymbolTables(root);
  old_type_system_.SetScopeTree(scope_tree);
  if (old_type_system_.top_fix(root)) {
    return ValidationError::kSuccess;
  } else {
    // TODO: return the correct error code
    return ValidationError::kNoSymbolToUse;
  }
}

std::string ExpressionGenerator::GenerateExpression(TYPEID type, IRPtr &ir) {
  return generate_expression_by_type(type, ir);
}

string ExpressionGenerator::generate_expression_by_type(int type, IRPtr &ir) {
  gen_counter_ = 0;
  function_gen_counter_ = 0;
  auto res = generate_expression_by_type_core(type, ir);
  if (res.size() == 0) {
    assert(0);
  }
  return res;
}

string ExpressionGenerator::expression_gen_handler(
    int type, map<int, vector<set<int>>> &all_satisfiable_types,
    map<int, vector<string>> &function_map,
    map<int, vector<string>> &compound_var_map, IRPtr ir) {
  string res;
  auto sat_op = typesystem::TypeInferer::collect_sat_op_by_result_type(
      type, all_satisfiable_types, function_map,
      compound_var_map);  // map<OPTYPE, vector<typeid>>
  if (DBG) cout << "OP id: " << sat_op.first << endl;
  if (sat_op.first == 0) {
    return gen_random_num_string();
  }
  assert(sat_op.first);

  auto op = typesystem::TypeInferer::get_op_by_optype(
      sat_op.first);  // vector<string> for prefix, middle, suffix
  assert(op.size());  // should not be an empty operator
  if (typesystem::TypeInferer::is_op1(sat_op.first)) {
    auto arg1_type = sat_op.second[0];
    auto arg1 = generate_expression_by_type_core(arg1_type, ir);
    assert(arg1.size());
    res = op[0] + " " + arg1 + " " + op[1] + op[2];
  } else {
    auto arg1_type = sat_op.second[0];
    auto arg2_type = sat_op.second[1];
    auto arg1 = generate_expression_by_type_core(arg1_type, ir);
    auto arg2 = generate_expression_by_type_core(arg2_type, ir);

    assert(arg1.size() && arg2.size());
    res = op[0] + " " + arg1 + " " + op[1] + " " + arg2 + " " + op[2];
  }
  return res;
}

string ExpressionGenerator::generate_expression_by_type_core(int type,
                                                             IRPtr &ir) {
  static vector<map<int, vector<string>>> var_maps;
  static map<int, vector<set<int>>> all_satisfiable_types;
  if (gen_counter_ == 0) {
    if (current_fix_scope_ != ir->scope_id) {
      current_fix_scope_ = ir->scope_id;
      var_maps.clear();
      all_satisfiable_types.clear();
      var_maps = collect_all_var_definition_by_type(ir);
      all_satisfiable_types =
          collect_satisfiable_types(ir, var_maps[0], var_maps[1], var_maps[2]);
    }
  }

  if (gen_counter_ > 50) return gen_random_num_string();
  gen_counter_++;
  cout << "Generating type:" << get_type_name_by_id(type)
       << ", type id: " << type << endl;
  string res;

  // collect all possible types
  auto simple_var_map = var_maps[0];
  auto compound_var_map = var_maps[1];
  auto function_map = var_maps[2];
  auto pointer_var_map = var_maps[3];

  auto simple_var_size = simple_var_map.size();
  auto compound_var_size = compound_var_map.size();
  auto function_size = function_map.size();

  if (!gen::Configuration::GetInstance().IsWeakType()) {
    // add pointer into *_var_map
    update_pointer_var(pointer_var_map, simple_var_map, compound_var_map);
  }

  if (type == ALLTYPES && all_satisfiable_types.size()) {
    type = random_pick(all_satisfiable_types)->first;
    if (DBG)
      cout << "Type becomes: " << get_type_name_by_id(type) << ", id: " << type
           << endl;
    if (is_function_type(type) && (get_rand_int(3))) {
      type = get_function_type_by_type_id(type)->return_type_;
      if (DBG)
        cout << "Type becomes: " << get_type_name_by_id(type)
             << ", id: " << type << endl;
    }

    /*
    if(rand_choice < simple_var_size){
        type = random_pick(simple_var_map)->first;
    }else if(rand_choice < simple_var_size + compound_var_size){
        type = random_pick(compound_var_map)->first;
    }else{
        type = random_pick(function_map)->first;
    }
    */
  }

  if (all_satisfiable_types.find(type) == all_satisfiable_types.end()) {
    std::cout << "No satifyting type?" << std::endl;
    // should invoke insert_definition;
    return gen_random_num_string();
    assert(0);
  }

  int tmp_prob = 2;
  /*
  while (0) {
    // can choose to generate its derived_type if possible
    auto type_ptr = get_type_by_type_id(type);
    if (type_ptr->derived_type_.empty()) {
      break;
    }
    auto derived_type_ptr = (*random_pick(type_ptr->derived_type_)).lock();
    auto derived_type = derived_type_ptr->get_type_id();
    if (all_satisfiable_types.find(derived_type) !=
        all_satisfiable_types.end()) {
      if (get_rand_int(tmp_prob) == 0) {
        if (DBG)
          cout << "Changing type from " << type << " to " << derived_type
               << endl;
        type = derived_type;
        tmp_prob <<= 1;
      } else {
        break;
      }
    } else {
      break;
    }
  }
   */

  // Filter out unmatched types, update the sizes
  filter_element(simple_var_map, all_satisfiable_types[type][SIMPLE_VAR_IDX]);
  filter_element(compound_var_map, all_satisfiable_types[type][STRUCTURE_IDX]);
  filter_element(function_map, all_satisfiable_types[type][FUNCTION_CALL_IDX]);

  simple_var_size = simple_var_map.size();
  // compound_var_size = 0;
  compound_var_size = compound_var_map.size();
  // compound_var_size = simple_var_map.size();//compound_var_map.size();
  function_size = function_map.size();

// calculate probility
#define SIMPLE_VAR_WEIGHT 6
#define COMPOUND_VAR_WEIGHT 3
#define FUNCTION_WEIGHT 3
#define EXPRESSION_WEIGHT 1

  unsigned long expression_size =
      (function_size + compound_var_size + simple_var_size) >> 1;

  // when we use builtin types, we should not worry about this.
  /*
  while(expression_size > simple_var_size){
      expression_size >>= 1;
  }
  */
  if (!(function_size + compound_var_size + simple_var_size)) {
    return gen_random_num_string();
  }

  if (expression_size == 0) expression_size = 1;
  if (is_function_type(type) || is_compound_type(type))
    expression_size =
        0;  // when meeting a function size, we do not use it in operation.

  if (DBG) cout << "Function size: " << function_size << endl;
  if (DBG) cout << "Compound size: " << compound_var_size << endl;
  if (DBG) cout << "Simple var size: " << simple_var_size << endl;
  expression_size <<= EXPRESSION_WEIGHT;
  function_size <<= FUNCTION_WEIGHT;
  compound_var_size <<= COMPOUND_VAR_WEIGHT;
  simple_var_size <<= SIMPLE_VAR_WEIGHT;
  if (gen_counter_ > 3) expression_size >>= 2;
  if (gen_counter_ > 15) {
    simple_var_size <<= 0x10;
    expression_size = 0;
  }
  if (function_gen_counter_ > 2) function_size >>= (function_gen_counter_ >> 2);
  unsigned long prob[] = {expression_size, function_size, compound_var_size,
                          simple_var_size};

  auto total_size = simple_var_size + function_size + compound_var_size;
  if (total_size == 0) return gen_random_num_string();
  auto choice = get_rand_int(total_size);
  if (DBG)
    cout << "choice: " << choice << "/"
         << simple_var_size + function_size + compound_var_size +
                expression_size
         << endl;
  if (DBG) cout << expression_size << endl;
  // assert(expression_size);
  // if(expression_size == 0){
  //     return "";
  // }
  if (0 <= choice && choice < prob[0]) {
    if (DBG) cout << "exp op exp handler" << endl;
    res = expression_gen_handler(type, all_satisfiable_types, function_map,
                                 compound_var_map, ir);
    return res;
    // expr op expr
  }

  choice -= prob[0];
  if (0 <= choice && choice < prob[1]) {
    return function_call_gen_handler(function_map, ir);
  }

  choice -= prob[1];
  if (0 <= choice && choice < prob[2]) {
    // handle structure here
    return structure_member_gen_handler(compound_var_map, type);
  } else {
    // handle simple var here
    if (DBG) cout << "simple_type handler" << endl;

    assert(!simple_var_map[type].empty());

    return *random_pick(simple_var_map[type]);
  }
}

string ExpressionGenerator::function_call_gen_handler(
    map<int, vector<string>> &function_map, IRPtr ir) {
  string res;
  assert(function_map.size());
  if (DBG) cout << "function handler" << endl;
  auto pick_func = *random_pick(function_map);
  if (DBG) cout << "Function type: " << pick_func.first << endl;
  shared_ptr<FunctionType> choice_ptr =
      get_function_type_by_type_id(pick_func.first);

  assert(choice_ptr != nullptr);

  res = choice_ptr->type_name_;
  res += "(";
  function_gen_counter_ += choice_ptr->v_arg_types_.size();
  for (auto k : choice_ptr->v_arg_types_) {
    res += generate_expression_by_type_core(k, ir);
    res += ",";
  }
  if (res[res.size() - 1] == ',')
    res[res.size() - 1] = ')';
  else
    res += ")";
  return res;
}

string ExpressionGenerator::structure_member_gen_handler(
    map<int, vector<string>> &compound_var_map, int member_type) {
  if (DBG) cout << "Structure handler" << endl;

  string res;

  auto compound = *random_pick(compound_var_map);
  auto compound_type = compound.first;

  // if(compound.second.size() == 0){
  //     cout << "empty structure" <<
  // }
  assert(compound.second.size());
  auto compound_var = *random_pick(compound.second);
  res = get_class_member_by_type(compound_type, member_type);
  if (res.empty()) {
    assert(member_type == compound_type);
    if (gen::Configuration::GetInstance().IsWeakType()) {
      if (is_builtin_type(compound_type) && get_rand_int(4)) {
        auto compound_ptr = get_type_by_type_id(compound_type);
        if (compound_ptr != nullptr && compound_var == compound_ptr->type_name_)
          return "(new " + compound_ptr->type_name_ + "())";
        else {
          return compound_var;
        }
      }
    }
    return compound_var;
  }
  res = compound_var + res;

  return res;
}

void ExpressionGenerator::update_pointer_var(
    map<int, vector<string>> &pointer_var_map,
    map<int, vector<string>> &simple_var_map,
    map<int, vector<string>> &compound_var_map) {
  for (auto pointer_type : pointer_var_map) {
    if (pointer_type.second.size() == 0) break;
    auto pointer_id = pointer_type.first;
    auto pointer_ptr = get_pointer_type_by_type_id(pointer_id);
    if (is_basic_type(pointer_ptr->basic_type_)) {
      for (auto var_name : pointer_type.second) {
        string target(pointer_ptr->reference_level_, '*');
        simple_var_map[pointer_ptr->basic_type_].push_back(target + var_name);
      }
    } else if (is_compound_type(pointer_ptr->basic_type_)) {
      for (auto var_name : pointer_type.second) {
        string target(pointer_ptr->reference_level_, '*');
        compound_var_map[pointer_ptr->basic_type_].push_back(target + var_name);
      }
    }
  }

  return;
}

string ExpressionGenerator::get_class_member_by_type_no_duplicate(
    int type, int target_type, set<int> &visit) {
  string res;
  vector<string> all_sol;
  vector<shared_ptr<FunctionType>> func_sol;
  visit.insert(type);

  auto type_ptr = get_compound_type_by_type_id(type);
  for (auto &member : type_ptr->v_members_) {
    if (member.first == target_type) {
      res = member_str + *random_pick(member.second);
      all_sol.push_back(res);
    }
  }

  string res1;
  for (auto &member : type_ptr->v_members_) {
    if (is_compound_type(member.first)) {
      if (visit.find(member.first) != visit.end()) continue;
      auto tmp_res = get_class_member_by_type_no_duplicate(member.first,
                                                           target_type, visit);
      if (tmp_res.size()) {
        res1 = member_str + *random_pick(type_ptr->v_members_[member.first]) +
               tmp_res;
        all_sol.push_back(res1);
      }
    } else if (is_function_type(member.first)) {
      if (member.first == target_type) {
        res1 = member_str + *random_pick(type_ptr->v_members_[member.first]);
        all_sol.push_back(res1);
      } else {
        auto pfunc = get_function_type_by_type_id(member.first);
        if (pfunc->return_type_ != target_type) continue;
        func_sol.push_back(pfunc);
      }
    }
  }

  if (all_sol.size() && !func_sol.size()) {
    res = *random_pick(all_sol);
  } else if (!all_sol.size() && func_sol.size()) {
    auto pfunc = *random_pick(func_sol);
    map<int, vector<string>> tmp_func_map;
    tmp_func_map[pfunc->type_id_] = {pfunc->type_name_};
    res = member_str + function_call_gen_handler(tmp_func_map, nullptr);
  } else if (all_sol.size() && func_sol.size()) {
    if (get_rand_int(2)) {
      auto pfunc = *random_pick(func_sol);
      map<int, vector<string>> tmp_func_map;
      tmp_func_map[pfunc->type_id_] = {pfunc->type_name_};
      res = member_str + function_call_gen_handler(tmp_func_map, nullptr);
    } else {
      res = *random_pick(all_sol);
    }
  }

  return res;
}

string ExpressionGenerator::get_class_member_by_type(int type,
                                                     int target_type) {
  set<int> visit;
  return get_class_member_by_type_no_duplicate(type, target_type, visit);
}

vector<map<int, vector<string>>>
ExpressionGenerator::collect_all_var_definition_by_type(IRPtr cur) {
  vector<map<int, vector<string>>> result;
  map<int, vector<string>> simple_var;
  map<int, vector<string>> functions;
  map<int, vector<string>> compound_types;
  map<int, vector<string>> pointer_types;
  auto cur_scope_id = cur->scope_id;
  auto ir_id = cur->id;
  // TODO: Fix this.
  auto current_scope = scope_tree_->GetScopeById(cur_scope_id);
  while (current_scope != nullptr) {
    // if(DBG) cout <<"Searching scope "<< current_scope->scope_id_ << endl;
    if (current_scope->definitions_.GetTable().size()) {
      for (auto &iter : current_scope->definitions_.GetTable()) {
        auto tmp_type = iter.first;
        auto type_ptr = get_type_by_type_id(tmp_type);
        if (type_ptr == nullptr) continue;
        if (type_ptr->is_function_type()) {
          for (auto &var : iter.second) {
            if (var.order_id < ir_id) {
              // if(DBG) cout << "Collectingi func: " << var.first << endl;
              functions[tmp_type].push_back(var.name);
            }
          }
        } else if (type_ptr->is_compound_type()) {
          for (auto &var : iter.second) {
            if (var.order_id < ir_id) {
              if (DBG) cout << "Collecting compound: " << var.name << endl;
              compound_types[tmp_type].push_back(var.name);
            }
          }
        } else {
          if (type_ptr->is_pointer_type()) {
            for (auto &var : iter.second) {
              if (var.order_id < ir_id) {
                pointer_types[tmp_type].push_back(var.name);
              }
            }
          }
          for (auto &var : iter.second) {
            if (var.order_id < ir_id) {
              cout << "Collecting simple var: " << var.name << endl;
              simple_var[tmp_type].push_back(var.name);
            } else {
              cout << "Not collecting simple var: " << var.name << endl;
            }
          }
        }
      }
    }
    current_scope = current_scope->parent_.lock();
  }

  // add builtin types

  auto &builtin_func = get_all_builtin_function_types();
  size_t add_prop = builtin_func.size();
  // if(add_prop == 0) add_prop = 1;
  for (auto &k : builtin_func) {
    for (auto &n : k.second) {
      if (get_rand_int(add_prop) == 0) functions[k.first].push_back(n);
    }
  }

  if (builtin_func.size()) {
    for (int ii = 0; ii < 2; ii++) {
      auto t1 = random_pick(builtin_func);
      if (t1->second.size())
        functions[t1->first].push_back(*random_pick(t1->second));
    }
  }

  auto &builtin_compounds = get_all_builtin_compound_types();
  add_prop = builtin_compounds.size();
  // if(add_prop == 0) add_prop = 1;
  for (auto &k : builtin_compounds) {
    for (auto &n : k.second) {
      if (get_rand_int(add_prop) == 0) compound_types[k.first].push_back(n);
    }
  }

  if (builtin_compounds.size()) {
    for (int ii = 0; ii < 2; ii++) {
      auto t1 = random_pick(builtin_compounds);
      if (t1->second.size())
        compound_types[t1->first].push_back(*random_pick(t1->second));
    }
  }

  auto &builtin_simple_var = get_all_builtin_simple_var_types();
  add_prop = builtin_simple_var.size();
  // if(add_prop == 0) add_prop = 1;
  for (auto &k : builtin_simple_var) {
    for (auto &n : k.second) {
      if (get_rand_int(add_prop) == 0) simple_var[k.first].push_back(n);
    }
  }

  if (builtin_simple_var.size()) {
    auto t1 = random_pick(builtin_simple_var);
    if (t1->second.size())
      simple_var[t1->first].push_back(*random_pick(t1->second));
  }

  result.push_back(std::move(simple_var));
  result.push_back(std::move(compound_types));
  result.push_back(std::move(functions));
  result.push_back(std::move(pointer_types));
  return result;
}

map<int, vector<set<int>>> ExpressionGenerator::collect_satisfiable_types(
    IRPtr ir, map<int, vector<string>> &simple_var_map,
    map<int, vector<string>> &compound_var_map,
    map<int, vector<string>> &function_map) {
  map<int, vector<set<int>>> res;
  // auto var_maps = collect_all_var_definition_by_type(ir);
  // auto &simple_var_map = var_maps[0];
  // auto &compound_var_map = var_maps[1];
  // auto &function_map = var_maps[2];
  set<int> current_types;

  for (auto &t : simple_var_map) {
    auto type = t.first;
    if (res.find(type) == res.end()) {
      res[type] = vector<set<int>>(HANDLER_CASE_NUM);
    }
    res[type][SIMPLE_VAR_IDX].insert(type);
    current_types.insert(type);
  }

  for (auto &t : compound_var_map) {
    auto type = t.first;
    if (res.find(type) == res.end()) {
      res[type] = vector<set<int>>(HANDLER_CASE_NUM);
    }

    res[type][STRUCTURE_IDX].insert(type);
    auto member_types = calc_possible_types_from_structure(type);
    // assert(member_types.size());
    for (auto member_type : member_types) {
      current_types.insert(member_type);
      if (res.find(member_type) == res.end()) {
        res[member_type] = vector<set<int>>(HANDLER_CASE_NUM);
      }
      res[member_type][STRUCTURE_IDX].insert(type);
      // if(DBG) cout << "Collecting " << get_type_name_by_id(member_type) << "
      // from " << get_type_name_by_id(type) << endl;
    }
  }

  set<int> function_types;
  for (auto &t : function_map) {
    function_types.insert(t.first);
  }

  auto satisfiable_functions =
      calc_satisfiable_functions(function_types, current_types);
  for (auto type : satisfiable_functions) {
    auto func_ptr = get_function_type_by_type_id(type);
    auto return_type = func_ptr->return_type_;
    if (res.find(return_type) == res.end()) {
      res[return_type] = vector<set<int>>(HANDLER_CASE_NUM);
    }
    res[return_type][FUNCTION_CALL_IDX].insert(type);
  }

  return res;
}

set<int> ExpressionGenerator::calc_satisfiable_functions(
    const set<int> &function_type_set, const set<int> &available_types) {
  map<int, set<int>> func_map;
  set<int> current_types = available_types;
  set<int> res = function_type_set;

  // setup function graph into a map
  for (auto &func : function_type_set) {
    auto func_ptr = get_function_type_by_type_id(func);
    func_map[func] =
        set<int>(func_ptr->v_arg_types_.begin(), func_ptr->v_arg_types_.end());
  }

  // traverse function graph
  // remove satisfied function type and add them into current_types
  bool is_change;
  do {
    is_change = false;
    for (auto func_itr = func_map.begin(); func_itr != func_map.end();) {
      auto func = *func_itr;
      auto func_ptr = get_function_type_by_type_id(func.first);
      for (auto &t : current_types) {
        func.second.erase(t);
      }
      if (func.second.size() == 0) {
        is_change = true;
        func_map.erase(func_itr++);
        current_types.insert(func_ptr->return_type_);
      } else {
        func_itr++;
      }
    }
  } while (is_change == true);

  // unsatisfied function remain in func_map
  for (auto &f : func_map) {
    if (DBG) cout << "remove function: " << f.first << endl;
    res.erase(f.first);
  }
  return res;
}

set<int> get_all_types_from_compound_type(int compound_type, set<int> &visit) {
  set<int> res;
  if (visit.find(compound_type) != visit.end()) return res;
  visit.insert(compound_type);

  auto compound_ptr = get_compound_type_by_type_id(compound_type);
  for (auto member : compound_ptr->v_members_) {
    auto member_type = member.first;
    if (is_compound_type(member_type)) {
      auto sub_structure_res =
          get_all_types_from_compound_type(member_type, visit);
      res.insert(sub_structure_res.begin(), sub_structure_res.end());
      res.insert(member_type);
    } else if (is_function_type(member_type)) {
      // assert(0);
      if (gen::Configuration::GetInstance().IsWeakType()) {
        auto pfunc = get_function_type_by_type_id(member_type);
        res.insert(pfunc->return_type_);
        res.insert(member_type);
      }
    } else if (is_basic_type(member_type)) {
      res.insert(member_type);
    } else {
      if (gen::Configuration::GetInstance().IsWeakType()) {
        res.insert(member_type);
      }
    }
  }

  return res;
}

set<int> ExpressionGenerator::calc_possible_types_from_structure(
    int structure_type) {
  static map<int, set<int>> builtin_structure_type_cache;
  set<int> visit;
  if (DBG) {
    auto type_ptr = get_compound_type_by_type_id(structure_type);
    cout << "[calc_possible_types_from_structure] " << type_ptr->type_name_
         << endl;
  }
  if (builtin_structure_type_cache.count(structure_type))
    return builtin_structure_type_cache[structure_type];
  auto res = get_all_types_from_compound_type(structure_type, visit);
  if (is_builtin_type(structure_type))
    builtin_structure_type_cache[structure_type] = res;
  return res;
}

}  // namespace validation
}  // namespace polyglot
