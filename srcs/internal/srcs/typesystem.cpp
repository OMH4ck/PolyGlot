// Copyright (c) 2023 OMH4ck
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

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
std::shared_ptr<RealTypeSystem> OPRule::real_type_system_;

IRPtr cur_statement_root = nullptr;

unsigned long type_fix_framework_fail_counter = 0;
unsigned long top_fix_fail_counter = 0;
unsigned long top_fix_success_counter = 0;

static set<TypeID> current_define_types;

/*
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
*/

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

  // TODO: Fix this.
  // is_internal_obj_setup = true;
  /*
  if (create_symbol_table(res) == false)
    spdlog::error("[init_internal_obj] setup {} failed", filename);
  is_internal_obj_setup = false;
  */
}

void TypeSystem::init() {
  s_basic_unit_ = gen::Configuration::GetInstance().GetBasicUnits();
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
  if (root->HasLeftChild() &&
      s_basic_unit.find(root->LeftChild()->Type()) != s_basic_unit.end()) {
    m_save[&root->LeftChild()] = root->LeftChild();
    q.push(root->LeftChild());
    root->LeftChild() = nullptr;
  }
  if (root->HasLeftChild())
    split_to_basic_unit(root->LeftChild(), q, m_save, s_basic_unit);

  if (root->HasRightChild() &&
      s_basic_unit.find(root->RightChild()->Type()) != s_basic_unit.end()) {
    m_save[&root->RightChild()] = root->RightChild();
    q.push(root->RightChild());
    root->RightChild() = nullptr;
  }
  if (root->HasRightChild())
    split_to_basic_unit(root->RightChild(), q, m_save, s_basic_unit);
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
  if (cur->GetDataType() == type) {
    result.push_back(cur);
  } else if (forbit_type != kDataWhatever &&
             cur->GetDataType() == forbit_type) {
    return;
  }
  if (cur->GetDataType() != type || go_inside == true) {
    if (cur->HasLeftChild()) {
      search_by_data_type(cur->LeftChild(), type, result, forbit_type,
                          go_inside);
    }
    if (cur->HasRightChild()) {
      search_by_data_type(cur->RightChild(), type, result, forbit_type,
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
  int res_type = SpecialType::kNotExist;
  bool flag;
  spdlog::debug("Inferring: {}", cur->ToString());
  spdlog::debug("Scope type: {}", scope_type);

  if (cur->Type() == frontend_->GetStringLiteralType()) {
    res_type = real_type_system_->GetTypeIDByStr("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  } else if (cur->Type() == frontend_->GetIntLiteralType()) {
    res_type = real_type_system_->GetTypeIDByStr("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  } else if (cur->Type() == frontend_->GetFloatLiteralType()) {
    res_type = real_type_system_->GetTypeIDByStr("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  }

  if (cur->Type() == frontend_->GetIdentifierType()) {
    // handle here
    if (cur->GetString() == "FIXME") {
      spdlog::debug("See a fixme!");
      auto v_usable_type = collect_usable_type(cur);
      spdlog::debug("collect_usable_type.size(): {}", v_usable_type.size());
      for (auto t : v_usable_type) {
        assert(t);
        cur_type->AddCandidate(t, t, 0);
      }
      cache_inference_map_[cur] = cur_type;
      return cur_type->HasCandidate();
    }

    if (scope_type == SpecialType::kNotExist) {
      // match name in cur->scope_

      res_type =
          locate_defined_variable_by_name(cur->GetString(), cur->GetScopeID());
      spdlog::debug("Name: {}", cur->GetString());
      spdlog::debug("Type: {}", res_type);
      // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID,
      // TYPEID>>>>();
      if (!res_type) res_type = SpecialType::kAnyType;  // should fix
      cur_type->AddCandidate(res_type, res_type, 0);
      cache_inference_map_[cur] = cur_type;
      return true;

      // return cur->value_type_ = res_type;
    } else {
      // match name in scope_type
      // currently only class/struct is possible
      spdlog::debug("Scope type: {}", scope_type);
      if (real_type_system_->IsCompoundType(scope_type) == false) {
        if (real_type_system_->IsFunctionType(scope_type)) {
          auto ret_type =
              real_type_system_->GetFunctionType(scope_type)->return_type_;
          if (real_type_system_->IsCompoundType(ret_type)) {
            scope_type = ret_type;
          } else {
            return false;
          }
        } else
          return false;
      }
      // assert(is_compound_type(scope_type));
      auto ct = real_type_system_->GetCompoundType(scope_type);
      for (auto &iter : ct->v_members_) {
        for (auto &member : iter.second) {
          if (cur->GetString() == member) {
            spdlog::debug(
                "Match member");  // auto cur_type = make_shared<map<TYPEID,
                                  // vector<pair<TYPEID,
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

  if (is_op_null(cur->OP())) {
    if (cur->HasLeftChild() && cur->HasRightChild()) {
      flag = type_inference_new(cur->LeftChild(), scope_type);
      if (!flag) return flag;
      flag = type_inference_new(cur->RightChild(), scope_type);
      if (!flag) return flag;
      for (auto &left :
           cache_inference_map_[cur->LeftChild()]->GetCandidates()) {
        for (auto &right :
             cache_inference_map_[cur->RightChild()]->GetCandidates()) {
          auto res_type = real_type_system_->GetLeastUpperCommonType(
              left.first, right.first);
          cur_type->AddCandidate(res_type, left.first, right.first);
        }
      }
      cache_inference_map_[cur] = cur_type;
    } else if (cur->HasLeftChild()) {
      flag = type_inference_new(cur->LeftChild(), scope_type);
      if (!flag || !cache_inference_map_[cur->LeftChild()]->HasCandidate())
        return false;
      if (DBG) cout << "Left: " << cur->LeftChild()->ToString() << endl;
      assert(cache_inference_map_[cur->LeftChild()]->HasCandidate());
      cache_inference_map_[cur] = cache_inference_map_[cur->LeftChild()];
    } else {
      if (DBG) cout << cur->ToString() << endl;
      return false;
      assert(0);
    }
    return true;
  }

  // handle by OP

  auto cur_op = get_op_value(cur->OP());
  if (cur_op == SpecialType::kNotExist) {
    if (DBG) cout << cur->ToString() << endl;
    if (DBG)
      cout << cur->OP()->prefix << ", " << cur->OP()->middle << ", "
           << cur->OP()->suffix << endl;
    if (DBG) cout << "OP not exist!" << endl;
    return false;
    assert(0);
  }

  if (is_op1(cur_op)) {
    // assert(cur->left_); //for test
    if (cur->HasLeftChild()) {
      return false;
    }
    flag = type_inference_new(cur->LeftChild(), scope_type);
    if (!flag) return flag;
    // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>();
    for (auto &left : cache_inference_map_[cur->LeftChild()]->GetCandidates()) {
      auto left_type = left.first;
      if (DBG) cout << "Reaching op1" << endl;
      if (DBG)
        cout << cur->OP()->prefix << ", " << cur->OP()->middle << ", "
             << cur->OP()->suffix << endl;
      res_type = query_result_type(cur_op, left_type);
      if (DBG) cout << "Result_type: " << res_type << endl;
      if (res_type != SpecialType::kNotExist) {
        cur_type->AddCandidate(res_type, left_type, 0);
      }
    }
    cache_inference_map_[cur] = cur_type;
  } else if (is_op2(cur_op)) {
    if (!(cur->HasLeftChild() && cur->HasRightChild())) return false;
    // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>();
    switch (get_fix_order(cur_op)) {
      case LEFT_TO_RIGHT: {
        // this shouldn't contain "FIXME"
        if (DBG) cout << "Left to right" << endl;
        flag = type_inference_new(cur->LeftChild(), scope_type);
        if (!flag) return flag;
        if (!cache_inference_map_[cur->LeftChild()]->HasCandidate())
          return false;
        auto left_type =
            cache_inference_map_[cur->LeftChild()]->GetARandomCandidateType();
        auto new_left_type = left_type;
        // if(cur->OP()_->middle_ == "->"){
        if (get_op_property(cur_op) == OP_PROP_Dereference) {
          auto tmp_ptr = real_type_system_->GetTypePtrByID(left_type);
          assert(tmp_ptr->is_pointer_type());
          if (DBG) cout << "left type of -> is : " << left_type << endl;
          auto type_ptr = static_pointer_cast<PointerType>(tmp_ptr);
          if (DBG) cout << "Type ptr: " << type_ptr->type_name_ << endl;
          assert(type_ptr);
          new_left_type = type_ptr->orig_type_;
        }
        flag = type_inference_new(cur->RightChild(), new_left_type);
        if (!flag) return flag;
        auto right_type =
            cache_inference_map_[cur->RightChild()]->GetARandomCandidateType();
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
        flag = type_inference_new(cur->LeftChild(), scope_type);
        if (!flag) return flag;
        flag = type_inference_new(cur->RightChild(), scope_type);
        if (!flag) return flag;
        auto left_type = cache_inference_map_[cur->LeftChild()];
        auto right_type = cache_inference_map_[cur->RightChild()];
        // handle function call case-by-case

        if (left_type->GetCandidates().size() == 1 &&
            real_type_system_->IsFunctionType(
                left_type->GetARandomCandidateType())) {
          res_type = real_type_system_
                         ->GetFunctionType(left_type->GetARandomCandidateType())
                         ->return_type_;
          if (DBG) cout << "get_function_type_by_type_id: " << res_type << endl;
          cur_type->AddCandidate(res_type, 0, 0);
          break;
        }

        // res_type = query_type_dict(cur_op, left_type, right_type);
        for (auto &left_cahce :
             cache_inference_map_[cur->LeftChild()]->GetCandidates()) {
          for (auto &right_cache :
               cache_inference_map_[cur->RightChild()]->GetCandidates()) {
            auto a_left_type = left_cahce.first;
            auto a_right_type = right_cache.first;
            if (DBG)
              cout << "[a+b] left_type = " << a_left_type << ":"
                   << " ,right_type = " << a_right_type << ":"
                   << ", op = " << cur_op << endl;
            if (DBG)
              cout << "Left to alltype: "
                   << real_type_system_->CanDeriveFrom(a_left_type,
                                                       SpecialType::kAllTypes)
                   << ", right to alltype: "
                   << real_type_system_->CanDeriveFrom(a_right_type,
                                                       SpecialType::kAllTypes)
                   << endl;
            auto t = query_result_type(cur_op, a_left_type, a_right_type);
            if (t != SpecialType::kNotExist) {
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
  int result = SpecialType::kNotExist;
  auto current_scope = scope_tree_->GetScopeById(scope_id);
  while (current_scope) {
    // if(DBG) cout <<"Searching scope "<< current_scope->scope_id_ << endl;
    auto def = current_scope->GetSymbolTable().GetDefinition(var_name);
    if (def.has_value()) {
      return def->type;
    }
    current_scope = current_scope->GetParent();
  }

  return result;
}

set<int> TypeInferer::collect_usable_type(IRPtr cur) {
  set<int> result;
  auto ir_id = cur->GetStatementID();
  auto current_scope = scope_tree_->GetScopeById(cur->GetScopeID());
  while (current_scope) {
    if (DBG)
      cout << "Collecting scope id: " << current_scope->GetScopeID() << endl;
    if (current_scope->GetSymbolTable().GetTable().size()) {
      for (auto &iter : current_scope->GetSymbolTable().GetTable()) {
        auto tmp_type = iter.first;
        bool flag = false;
        /*
        cout << "Type: " << get_type_name_by_id(tmp_type) << endl;
        for(auto &kk: iter.second){
            cout << kk.first << endl;
        }
        */
        auto type_ptr = real_type_system_->GetTypePtrByID(tmp_type);
        if (type_ptr == nullptr) continue;
        for (auto &kk : iter.second) {
          if (ir_id > kk.statement_id) {
            flag = true;
            break;
          }
        }

        if (flag == false) {
          continue;
        }

        if (type_ptr->is_function_type()) {
          // whether to insert the function type it self
          auto ptr = real_type_system_->GetFunctionType(tmp_type);
          result.insert(ptr->return_type_);
        } else if (type_ptr->is_compound_type()) {
          auto ptr = real_type_system_->GetCompoundType(tmp_type);
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
    current_scope = current_scope->GetParent();
  }

  return result;
}

pair<OPTYPE, vector<int>> TypeInferer::collect_sat_op_by_result_type(
    int type, map<int, vector<set<int>>> &all_satisfiable_types,
    map<int, vector<string>> &function_map,
    map<int, vector<string>> &compound_var_map,
    std::shared_ptr<RealTypeSystem> &real_type_system) {
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
    if (real_type_system->CanDeriveFrom(type, iter.first)) {
      for (auto &v : iter.second) {
        int left = 0, right = 0;
        if (v[1] > SpecialType::kAllUpperBound &&
            all_satisfiable_types.find(v[1]) == all_satisfiable_types.end()) {
          continue;
        }
        switch (v[1]) {
          case SpecialType::kAllTypes:
            left = type;
            break;
          case SpecialType::kAllFunction:
            if (function_map.empty()) continue;
            left = random_pick(function_map)->first;
            break;
          case SpecialType::kAllCompoundType:
          //    break;
          default:
            if (all_satisfiable_types.find(v[1]) == all_satisfiable_types.end())
              continue;
            left = v[1];
            break;
        }
        // left = v[1] < SpecialType::kAllUpperBound? type: v[1];

        if (v.size() == 3) {
          if (v[2] > SpecialType::kAllUpperBound &&
              all_satisfiable_types.find(v[2]) == all_satisfiable_types.end()) {
            continue;
          }
          right = v[2] < SpecialType::kAllUpperBound ? type : v[2];
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
  if (root->HasLeftChild()) {
    if (!root->HasRightChild()) {
      return locate_mutated_ir(root->LeftChild());
    }

    if (NeedFixing(root->RightChild()) == false) {
      return locate_mutated_ir(root->LeftChild());
    }
    if (NeedFixing(root->LeftChild()) == false) {
      return locate_mutated_ir(root->RightChild());
    }

    return root;
  }

  if (NeedFixing(root)) return root;
  return nullptr;
}

bool TypeSystem::simple_fix(IRPtr ir, int type, TypeInferer &inferer) {
  if (type == SpecialType::kNotExist) return false;

  spdlog::debug("NodeType: {}", frontend_->GetIRTypeStr(ir->Type()));
  spdlog::debug("Type: {}", type);

  // if (ir->type_ == kIdentifier && ir->str_val_ == "FIXME")
  if (ir->ContainString() && ir->GetString() == "FIXME") {
    spdlog::debug("Reach here");
    validation::ExpressionGenerator generator(scope_tree_);
    ir->SetString(generator.GenerateExpression(type, ir));
    return true;
  }

  // TODO: Refactor.
  // This checks whether we can find a derived type from `type`.
  // We should consider the availability of the derived type.
  if (!gen::Configuration::GetInstance().IsWeakType()) {
    if (!inferer.GetCandidateTypes(ir)->HasCandidate(type)) {
      TypeID new_type = SpecialType::kNotExist;
      int counter = 0;
      for (auto &iter : inferer.GetCandidateTypes(ir)->GetCandidates()) {
        if (real_type_system_->CanDeriveFrom(type, iter.first)) {
          if (new_type == SpecialType::kNotExist ||
              get_rand_int(counter) == 0) {
            new_type = iter.first;
          }
          counter++;
        }
      }

      type = new_type;
      spdlog::debug("nothing in cache_inference_map_: {}", ir->ToString());
      spdlog::debug("NodeType: {}", frontend_->GetIRTypeStr(ir->Type()));
    }
    if (!inferer.GetCandidateTypes(ir)->HasCandidate(type)) return false;
    if (ir->HasLeftChild()) {
      auto iter =
          *random_pick(inferer.GetCandidateTypes(ir)->GetCandidates(type));
      if (ir->HasRightChild()) {
        simple_fix(ir->LeftChild(), iter.left, inferer);
        simple_fix(ir->RightChild(), iter.right, inferer);
      } else {
        simple_fix(ir->LeftChild(), iter.left, inferer);
      }
    }
  } else {
    if (ir->HasLeftChild()) simple_fix(ir->LeftChild(), type, inferer);
    if (ir->HasRightChild()) simple_fix(ir->RightChild(), type, inferer);
  }
  return true;
}

bool Fixable(IRPtr root) {
  return root->Type() == gen::Configuration::GetInstance().GetFixIRType() ||
         (root->ContainString() && root->GetString() == "FIXME");
}

bool TypeSystem::Fix(IRPtr root) {
  stack<IRPtr> stk;

  stk.push(root);

  bool res = true;

  TypeInferer inferer(frontend_, scope_tree_);
  while (res && !stk.empty()) {
    root = stk.top();
    stk.pop();
    if (Fixable(root)) {
      assert(NeedFixing(root));
      int type = SpecialType::kAllTypes;
      if (!gen::Configuration::GetInstance().IsWeakType()) {
        if (!inferer.Infer(root, 0)) {
          res = false;
          break;
        }
        auto iter =
            random_pick(inferer.GetCandidateTypes(root)->GetCandidates());
        type = iter->first;
      }
      res = simple_fix(root, type, inferer);
    } else {
      if (root->HasRightChild()) stk.push(root->RightChild());
      if (root->HasLeftChild()) stk.push(root->LeftChild());
    }
  }
  return res;
}

bool TypeSystem::validate_syntax_only(IRPtr root) {
  if (frontend_->Parsable(root->ToString()) == false) return false;
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
    int tmp_count = GetChildNum(cur);
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
  if (root->HasLeftChild()) {
    if (root->LeftChild()->GetDataType() == kDataFixUnit) {
      if (NeedFixing(root->LeftChild())) {
        auto save_ir_id = root->LeftChild()->GetStatementID();
        auto save_scope = root->LeftChild()->GetScopeID();
        root->SetLeftChild(std::make_shared<IR>(
            frontend_->GetStringLiteralType(), std::string("FIXME")));
        root->LeftChild()->SetScopeID(save_scope);
        root->LeftChild()->SetStatementID(save_ir_id);
      }
    } else {
      MarkFixMe(root->LeftChild());
    }
  }
  if (root->HasRightChild()) {
    if (root->RightChild()->GetDataType() == kDataFixUnit) {
      if (NeedFixing(root->RightChild())) {
        auto save_ir_id = root->RightChild()->GetStatementID();
        auto save_scope = root->RightChild()->GetScopeID();
        root->SetRightChild(
            std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME"));
        root->RightChild()->SetScopeID(save_scope);
        root->RightChild()->SetStatementID(save_ir_id);
      }
    } else {
      MarkFixMe(root->RightChild());
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
  auto type_ptr = real_type_system_->GetTypePtrByID(type);
  assert(type_ptr != nullptr);
  auto type_str = type_ptr->type_name_;
  string res = type_str + " " + var_name + ";";

  return res;
}

string TypeSystem::generate_definition(vector<string> &var_name, int type) {
  if (DBG) cout << "Generating definitions for type: " << type << endl;
  auto type_ptr = real_type_system_->GetTypePtrByID(type);
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
  if (result_ != SpecialType::kAllTypes &&
      result_ != SpecialType::kAllCompoundType &&
      result_ != SpecialType::kAllFunction) {
    return result_;
  }
  if (is_op1()) {
    switch (property_) {
      case OP_PROP_Reference:
        return real_type_system_->GetOrCreatePointerType(arg1);
      case OP_PROP_Dereference:
        if (real_type_system_->IsPointerType(arg1) == false)
          return SpecialType::kNotExist;
        return real_type_system_->GetPointerType(arg1)->orig_type_;
      case OP_PROP_FunctionCall:
        if (real_type_system_->IsFunctionType(arg1) == false) {
          break;
        }
        // cout << get_function_type_by_type_id(arg1)->return_type_ << endl;
        // assert(0);
        // cout << "reach here" << endl;
        return real_type_system_->GetFunctionType(arg1)->return_type_;
      case OP_PROP_Default:
        return arg1;
      default:
        assert(0);
    }
  } else {
  }
  return real_type_system_->GetLeastUpperCommonType(arg1, arg2);
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
      if (real_type_system_->CanDeriveFrom(arg1, r.left_)) return r.apply(arg1);
    } else {
      if (real_type_system_->CanDeriveFrom(arg1, r.left_) &&
          real_type_system_->CanDeriveFrom(arg2, r.right_))
        return r.apply(arg1, arg2);
    }
  }

  if (DBG) cout << "Here , no exist" << endl;
  return SpecialType::kNotExist;
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
    auto left = RealTypeSystem::GetBasicTypeIDByStr(v_strbuf[4]);
    auto right = RealTypeSystem::GetBasicTypeIDByStr(v_strbuf[5]);
    auto result = RealTypeSystem::GetBasicTypeIDByStr(v_strbuf[6]);

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
    auto left = RealTypeSystem::GetBasicTypeIDByStr(v_strbuf[4]);
    auto result = RealTypeSystem::GetBasicTypeIDByStr(v_strbuf[5]);

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

  scope_ptr->AddDefinition(type_id, var_name, def_ir->id_);
  scope_ptr->v_ir_set_.push_back(root_ir);
  scope_ptr->v_ir_set_.push_back(def_ir);

  return true;
}
*/

}  // namespace typesystem

namespace validation {
ValidationError SemanticValidator::Validate(IRPtr &root) {
  old_type_system_.MarkFixMe(root);
  std::shared_ptr<ScopeTree> scope_tree = BuildScopeTreeWithSymbolTable(root);
  old_type_system_.SetScopeTree(scope_tree);
  // TODO: Fix this super ugly code.
  old_type_system_.SetRealTypeSystem(scope_tree->GetRealTypeSystem());
  typesystem::OPRule::SetRealTypeSystem(scope_tree->GetRealTypeSystem());
  if (old_type_system_.Fix(root)) {
    return ValidationError::kSuccess;
  } else {
    // TODO: return the correct error code
    return ValidationError::kNoSymbolToUse;
  }
}

std::shared_ptr<ScopeTree> SemanticValidator::BuildScopeTreeWithSymbolTable(
    IRPtr &root) {
  auto scope_tree = ScopeTree::BuildTree(root);
  scope_tree->BuildSymbolTables(root);
  return scope_tree;
}

std::string ExpressionGenerator::GenerateExpression(TypeID type, IRPtr &ir) {
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
      type, all_satisfiable_types, function_map, compound_var_map,
      real_type_system_);  // map<OPTYPE, vector<typeid>>
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
    if (current_fix_scope_ != ir->GetScopeID()) {
      current_fix_scope_ = ir->GetScopeID();
      var_maps.clear();
      all_satisfiable_types.clear();
      var_maps = collect_all_var_definition_by_type(ir);
      all_satisfiable_types =
          collect_satisfiable_types(ir, var_maps[0], var_maps[1], var_maps[2]);
    }
  }

  if (gen_counter_ > 50) return gen_random_num_string();
  gen_counter_++;
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

  if (type == SpecialType::kAllTypes && all_satisfiable_types.size()) {
    type = random_pick(all_satisfiable_types)->first;
    if (real_type_system_->IsFunctionType(type) && (get_rand_int(3))) {
      type = real_type_system_->GetFunctionType(type)->return_type_;
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
  if (real_type_system_->IsFunctionType(type) ||
      real_type_system_->IsCompoundType(type))
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
      real_type_system_->GetFunctionType(pick_func.first);

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
      if (real_type_system_->IsBuiltinType(compound_type) && get_rand_int(4)) {
        auto compound_ptr = real_type_system_->GetTypePtrByID(compound_type);
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
    auto pointer_ptr = real_type_system_->GetPointerType(pointer_id);
    if (real_type_system_->IsBasicType(pointer_ptr->basic_type_)) {
      for (auto var_name : pointer_type.second) {
        string target(pointer_ptr->reference_level_, '*');
        simple_var_map[pointer_ptr->basic_type_].push_back(target + var_name);
      }
    } else if (real_type_system_->IsCompoundType(pointer_ptr->basic_type_)) {
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

  auto type_ptr = real_type_system_->GetCompoundType(type);
  for (auto &member : type_ptr->v_members_) {
    if (member.first == target_type) {
      res = member_str + *random_pick(member.second);
      all_sol.push_back(res);
    }
  }

  string res1;
  for (auto &member : type_ptr->v_members_) {
    if (real_type_system_->IsCompoundType(member.first)) {
      if (visit.find(member.first) != visit.end()) continue;
      auto tmp_res = get_class_member_by_type_no_duplicate(member.first,
                                                           target_type, visit);
      if (tmp_res.size()) {
        res1 = member_str + *random_pick(type_ptr->v_members_[member.first]) +
               tmp_res;
        all_sol.push_back(res1);
      }
    } else if (real_type_system_->IsFunctionType(member.first)) {
      if (member.first == target_type) {
        res1 = member_str + *random_pick(type_ptr->v_members_[member.first]);
        all_sol.push_back(res1);
      } else {
        auto pfunc = real_type_system_->GetFunctionType(member.first);
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
  auto cur_scope_id = cur->GetScopeID();
  auto ir_id = cur->GetStatementID();
  // TODO: Fix this.
  auto current_scope = scope_tree_->GetScopeById(cur_scope_id);
  while (current_scope != nullptr) {
    // if(DBG) cout <<"Searching scope "<< current_scope->scope_id_ << endl;
    if (current_scope->GetSymbolTable().GetTable().size()) {
      for (auto &iter : current_scope->GetSymbolTable().GetTable()) {
        auto tmp_type = iter.first;
        auto type_ptr = real_type_system_->GetTypePtrByID(tmp_type);
        if (type_ptr == nullptr) continue;
        if (type_ptr->is_function_type()) {
          for (auto &var : iter.second) {
            if (var.statement_id < ir_id) {
              // if(DBG) cout << "Collectingi func: " << var.first << endl;
              functions[tmp_type].push_back(var.name);
            }
          }
        } else if (type_ptr->is_compound_type()) {
          for (auto &var : iter.second) {
            if (var.statement_id < ir_id) {
              if (DBG) cout << "Collecting compound: " << var.name << endl;
              compound_types[tmp_type].push_back(var.name);
            }
          }
        } else {
          if (type_ptr->is_pointer_type()) {
            for (auto &var : iter.second) {
              if (var.statement_id < ir_id) {
                pointer_types[tmp_type].push_back(var.name);
              }
            }
          }
          for (auto &var : iter.second) {
            if (var.statement_id < ir_id) {
              cout << "Collecting simple var: " << var.name << endl;
              simple_var[tmp_type].push_back(var.name);
            } else {
              cout << "Not collecting simple var: " << var.name << endl;
            }
          }
        }
      }
    }
    current_scope = current_scope->GetParent();
  }

  // add builtin types

  auto &builtin_func = real_type_system_->GetBuiltinFunctionTypes();
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

  auto &builtin_compounds = real_type_system_->GetBuiltinCompoundTypes();
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

  auto &builtin_simple_var = real_type_system_->GetBuiltinSimpleVarTypes();
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
    auto func_ptr = real_type_system_->GetFunctionType(type);
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
    auto func_ptr = real_type_system_->GetFunctionType(func);
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
      auto func_ptr = real_type_system_->GetFunctionType(func.first);
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

set<int> ExpressionGenerator::calc_possible_types_from_structure(
    int structure_type) {
  static map<int, set<int>> builtin_structure_type_cache;
  set<int> visit;
  if (DBG) {
    auto type_ptr = real_type_system_->GetCompoundType(structure_type);
    cout << "[calc_possible_types_from_structure] " << type_ptr->type_name_
         << endl;
  }
  if (builtin_structure_type_cache.count(structure_type))
    return builtin_structure_type_cache[structure_type];
  auto res = real_type_system_->get_all_types_from_compound_type(structure_type,
                                                                 visit);
  if (real_type_system_->IsBuiltinType(structure_type))
    builtin_structure_type_cache[structure_type] = res;
  return res;
}

}  // namespace validation
}  // namespace polyglot
