// #include "ast.h"
#include "typesystem.h"

#include <memory>
#include <optional>

#include "config_misc.h"
#include "define.h"
#include "frontend.h"
#include "spdlog/spdlog.h"
#include "utils.h"
#include "var_definition.h"

using namespace std;
namespace polyglot {

namespace typesystem {

#define DBG 0
#define SOLIDITYFUZZ
#define dbg_cout \
  if (DBG) cout

#ifdef PHPFUZZ
const char *member_str = "->";
#else
const char *member_str = ".";
#endif

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
map<int, vector<OPRule>> TypeSystem::TypeInferer::op_rules_;
map<string, map<string, map<string, int>>> TypeSystem::TypeInferer::op_id_map_;

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
  char content[0x4000] = {0};
  auto fd = open(filename.c_str(), 0);

  assert(read(fd, content, 0x3fff) > 0);
  close(fd);

  set_scope_translation_flag(true);
  auto res = frontend_->TranslateToIR(content);
  set_scope_translation_flag(false);
  if (!res) {
    spdlog::error("[init_internal_obj] parse {} failed", filename);
    return;
  }

  is_internal_obj_setup = true;
  if (create_symbol_table(res) == false)
    spdlog::error("[init_internal_obj] setup {} failed", filename);
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

void TypeSystem::TypeInferer::init_type_dict() {
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
}
void TypeSystem::split_to_basic_unit(IRPtr root, queue<IRPtr> &q,
                                     map<IRPtr *, IRPtr> &m_save) {
  split_to_basic_unit(root, q, m_save, s_basic_unit_);
}

void TypeSystem::split_to_basic_unit(IRPtr root, queue<IRPtr> &q,
                                     map<IRPtr *, IRPtr> &m_save,
                                     set<IRTYPE> &s_basic_unit) {
  if (root->left_ &&
      s_basic_unit.find(root->left_->type_) != s_basic_unit.end()) {
    m_save[&root->left_] = root->left_;
    q.push(root->left_);
    root->left_ = nullptr;
  }
  if (root->left_) split_to_basic_unit(root->left_, q, m_save, s_basic_unit);

  if (root->right_ &&
      s_basic_unit.find(root->right_->type_) != s_basic_unit.end()) {
    m_save[&root->right_] = root->right_;
    q.push(root->right_);
    root->right_ = nullptr;
  }
  if (root->right_) split_to_basic_unit(root->right_, q, m_save, s_basic_unit);
}

void TypeSystem::connect_back(map<IRPtr *, IRPtr> &m_save) {
  for (auto &i : m_save) {
    *i.first = i.second;
  }
}

bool TypeSystem::create_symbol_table(IRPtr root) {
  static unsigned recursive_counter = 0;
  queue<IRPtr> q;
  map<IRPtr *, IRPtr> m_save;
  int node_count = 0;
  q.push(root);
  split_to_basic_unit(root, q, m_save);

  recursive_counter++;
  if (is_internal_obj_setup == false) {
    // limit the number and the length of statements.s
    if (q.size() > 15) {
      connect_back(m_save);
      recursive_counter--;
      return false;
    }
  }

  while (!q.empty()) {
    auto cur = q.front();
    if (recursive_counter == 1) {
      int tmp_count = calc_node_num(cur);
      node_count += tmp_count;
      if ((tmp_count > 250 || node_count > 1500) &&
          is_internal_obj_setup == false) {
        connect_back(m_save);
        recursive_counter--;
        return false;
      }
    }
    spdlog::info("[splitted] {}", cur->to_string());
    if (is_contain_definition(cur)) {
      collect_definition(cur);
    }
    q.pop();
  }
  connect_back(m_save);
  recursive_counter--;
  return true;
}

FIXORDER TypeSystem::TypeInferer::get_fix_order(int op) {
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

int TypeSystem::TypeInferer::get_op_value(std::shared_ptr<IROperator> op) {
  if (op == nullptr) return 0;
  return op_id_map_[op->prefix_][op->middle_][op->suffix_];
}

bool TypeSystem::TypeInferer::is_op_null(std::shared_ptr<IROperator> op) {
  return (op == nullptr ||
          (op->suffix_ == "" && op->middle_ == "" && op->prefix_ == ""));
}

bool TypeSystem::is_contain_definition(IRPtr cur) {
  bool res = false;
  stack<IRPtr> stk;

  stk.push(cur);

  while (stk.empty() == false) {
    cur = stk.top();
    stk.pop();
    if (cur->data_type_ == kDataVarDefine || isDefine(cur->data_flag_)) {
      return true;
    }
    if (cur->right_) stk.push(cur->right_);
    if (cur->left_) stk.push(cur->left_);
  }
  return res;
}

void search_by_data_type(IRPtr cur, DATATYPE type, vector<IRPtr> &result,
                         DATATYPE forbit_type = kDataWhatever,
                         bool go_inside = false) {
  if (cur->data_type_ == type) {
    result.push_back(cur);
  } else if (forbit_type != kDataWhatever && cur->data_type_ == forbit_type) {
    return;
  }
  if (cur->data_type_ != type || go_inside == true) {
    if (cur->left_) {
      search_by_data_type(cur->left_, type, result, forbit_type, go_inside);
    }
    if (cur->right_) {
      search_by_data_type(cur->right_, type, result, forbit_type, go_inside);
    }
  }
}

IRPtr search_by_data_type(IRPtr cur, DATATYPE type,
                          DATATYPE forbit_type = kDataWhatever) {
  if (cur->data_type_ == type) {
    return cur;
  } else if (forbit_type != kDataWhatever && cur->data_type_ == forbit_type) {
    return nullptr;
  } else {
    if (cur->left_) {
      auto res = search_by_data_type(cur->left_, type, forbit_type);
      if (res != nullptr) return res;
    }
    if (cur->right_) {
      auto res = search_by_data_type(cur->right_, type, forbit_type);
      if (res != nullptr) return res;
    }
  }
  return nullptr;
}

ScopeType scope_js(const string &s) {
  if (s.find("var") != string::npos) return kScopeFunction;
  if (s.find("let") != string::npos || s.find("const") != string::npos)
    return kScopeStatement;
  for (int i = 0; i < 0x1000; i++) cout << s << endl;
  assert(0);
  return kScopeStatement;
}

void TypeSystem::collect_simple_variable_defintion_wt(IRPtr cur) {
  spdlog::info("Collecting: {}", cur->to_string());

  auto var_scope = search_by_data_type(cur, kDataVarScope);
  ScopeType scope_type = kScopeGlobal;

  // handle specill
  if (var_scope) {
    string str = var_scope->to_string();
    scope_type = scope_js(str);
  }

  vector<IRPtr> name_vec;
  vector<IRPtr> init_vec;
  vector<int> type_vec;
  search_by_data_type(cur, kDataVarName, name_vec);
  search_by_data_type(cur, kDataInitiator, init_vec);
  if (name_vec.empty()) {
    spdlog::info("fail to search for the name");
    return;
  } else if (name_vec.size() != init_vec.size()) {
    for (auto i = 0; i < name_vec.size(); i++) {
      type_vec.push_back(ANYTYPE);
    }
  } else {
    for (auto t : init_vec) {
      // TODO: Double check this logis. We should use type inference during
      // collections.
      /*
      bool flag = type_inference_new(t);
      if (flag == true) {
        type = cache_inference_map_[t]->GetARandomCandidateType();
      }
      */
      // cout << "Infer type: " << type << endl;
      int type = ALLTYPES;
      if (type == ALLTYPES || type == NOTEXIST) type = ANYTYPE;
      type_vec.push_back(type);
    }
  }

  auto cur_scope = scope_tree_->GetScopeById(cur->scope_id_);
  for (auto i = 0; i < name_vec.size(); i++) {
    auto name_ir = name_vec[i];
    spdlog::info("Adding name: {}", name_ir->to_string());
    auto type = type_vec[i];

    spdlog::info("Scope: {}", scope_type);
    spdlog::info("name_ir id: {}", name_ir->id_);
    if (DBG) spdlog::info("Type: {}", get_type_name_by_id(type));
    if (cur_scope->scope_type_ == kScopeClass) {
      if (DBG) {
        spdlog::info("Adding in class: {}", name_ir->to_string());
      }
      cur_scope->add_definition(type, name_ir->to_string(), name_ir->id_,
                                kScopeStatement);
    } else {
      cur_scope->add_definition(type, name_ir->to_string(), name_ir->id_,
                                scope_type);
    }
  }
}

void TypeSystem::collect_function_definition_wt(IRPtr cur) {
  spdlog::info("Collecting {}", cur->to_string());
  auto function_name_ir = search_by_data_type(cur, kDataFunctionName);
  auto function_args_ir = search_by_data_type(cur, kDataFunctionArg);
  // assert(function_name_ir || function_args_ir);

  string function_name;
  if (function_name_ir) {
    function_name = function_name_ir->to_string();
  }

  size_t num_function_args = 0;
  vector<IRPtr> args;
  vector<string> arg_names;
  vector<int> arg_types;
  if (function_args_ir) {
    search_by_data_type(function_args_ir, kDataVarName, args);
    num_function_args = args.size();
    spdlog::info("Num arg: {}", num_function_args);
    for (auto i : args) {
      arg_names.push_back(i->to_string());
      spdlog::info("Arg: {}", i->to_string());
      arg_types.push_back(ANYTYPE);
    }
    // assert(num_function_args == 3);
  }

  auto cur_scope = scope_tree_->GetScopeById(cur->scope_id_);
  if (function_name.empty()) function_name = "Anoynmous" + to_string(cur->id_);
  auto function_type = make_function_type(function_name, ANYTYPE, arg_types);
  if (DBG) {
    spdlog::info("Collecing function name: {}", function_name);
  }

  cur_scope->add_definition(
      function_type->type_id_, function_name,
      function_name_ir == nullptr ? cur->id_ : function_name_ir->id_);
  // cout << "Scope is global?: " << (cur_scope->scope_type_ == kScopeGlobal) <<
  // endl; cout << "Scope ID: " << (cur_scope->scope_id_) << endl;

  auto function_body_ir = search_by_data_type(cur, kDataFunctionBody);
  if (function_body_ir) {
    cur_scope = scope_tree_->GetScopeById(function_body_ir->scope_id_);
    for (auto i = 0; i < num_function_args; i++) {
      cur_scope->add_definition(ANYTYPE, arg_names[i], args[i]->id_);
    }
    if (DBG)
      spdlog::info("Recursive on function body: {}",
                   function_body_ir->to_string());
    create_symbol_table(function_body_ir);
  }
}

void TypeSystem::collect_structure_definition_wt(IRPtr cur, IRPtr root) {
  auto cur_scope = scope_tree_->GetScopeById(cur->scope_id_);

  if (isDefine(cur->data_flag_)) {
    vector<IRPtr> structure_name, strucutre_variable_name, structure_body;

    search_by_data_type(cur, kDataClassName, structure_name);
    auto struct_body = search_by_data_type(cur, kDataStructBody);
    if (struct_body == nullptr) return;
    shared_ptr<CompoundType> new_compound;
    string current_compound_name;
    if (structure_name.size() > 0) {
      spdlog::info("not anonymous {}", structure_name[0]->str_val_.value());
      // not anonymous
      new_compound = make_compound_type_by_scope(
          scope_tree_->GetScopeById(struct_body->scope_id_),
          structure_name[0]->str_val_.value());
      current_compound_name = structure_name[0]->str_val_.value();
    } else {
      spdlog::info("anonymous");
      // anonymous structure
      static int anonymous_idx = 1;
      string compound_name = string("ano") + std::to_string(anonymous_idx++);
      new_compound = make_compound_type_by_scope(
          scope_tree_->GetScopeById(struct_body->scope_id_), compound_name);
      current_compound_name = compound_name;
    }
    spdlog::info("{}", struct_body->to_string());
    is_in_class = true;
    create_symbol_table(struct_body);
    is_in_class = false;
    auto compound_id = new_compound->type_id_;
    new_compound = make_compound_type_by_scope(
        scope_tree_->GetScopeById(struct_body->scope_id_),
        current_compound_name);
  } else {
    if (cur->left_) collect_structure_definition_wt(cur->left_, root);
    if (cur->right_) collect_structure_definition_wt(cur->right_, root);
  }
}

std::optional<SymbolTable> TypeSystem::collect_simple_variable_defintion(
    IRPtr cur) {
  string var_type;

  vector<IRPtr> ir_vec;

  search_by_data_type(cur, kDataVarType, ir_vec);

  if (!ir_vec.empty()) {
    for (auto ir : ir_vec) {
      if (ir->op_ == nullptr || ir->op_->prefix_.empty()) {
        auto tmpp = ir->to_string();
        var_type += tmpp.substr(0, tmpp.size() - 1);
      } else {
        var_type += ir->op_->prefix_;
      }
      var_type += " ";
    }
    var_type = var_type.substr(0, var_type.size() - 1);
  }

  int type = get_type_id_by_string(var_type);

  if (type == NOTEXIST) {
#ifdef SOLIDITYFUZZ
    type = ANYTYPE;
#else
    return;
#endif
  }

  spdlog::debug("Variable type: {}, typeid: {}", var_type, type);
  auto cur_scope = scope_tree_->GetScopeById(cur->scope_id_);

  ir_vec.clear();

  search_by_data_type(cur, kDataDeclarator, ir_vec);
  if (ir_vec.empty()) return std::nullopt;

  SymbolTable res;
  res.SetScopeId(cur->scope_id_);
  for (auto ir : ir_vec) {
    spdlog::debug("var: {}", ir->to_string());
    auto name_ir = search_by_data_type(ir, kDataVarName);
    auto new_type = type;
    vector<IRPtr> tmp_vec;
    search_by_data_type(ir, kDataPointer, tmp_vec, kDataWhatever, true);

    if (!tmp_vec.empty()) {
      spdlog::debug("This is a pointer definition");
      spdlog::debug("Pointer level {}", tmp_vec.size());
      new_type = generate_pointer_type(type, tmp_vec.size());
    } else {
      spdlog::debug("This is not a pointer definition");
      // handle other
    }
    if (name_ir == nullptr || cur_scope == nullptr) return res;
    cur_scope->add_definition(new_type, name_ir->str_val_.value(),
                              name_ir->id_);
    res.AddDefinition(new_type, name_ir->str_val_.value(), name_ir->id_);
  }
  return res;
}

void TypeSystem::collect_structure_definition(IRPtr cur, IRPtr root) {
  if (cur->data_type_ == kDataClassType) {
    spdlog::debug("to_string: {}", cur->to_string());
    spdlog::debug("[collect_structure_definition] data_type_ = kDataClassType");
    auto cur_scope = scope_tree_->GetScopeById(cur->scope_id_);

    if (isDefine(cur->data_flag_)) {  // with structure define
      if (DBG) cout << "data_flag = Define" << endl;
      vector<IRPtr> structure_name, strucutre_variable_name, structure_body;
      search_by_data_type(cur, kDataClassName, structure_name);

      auto struct_body = search_by_data_type(cur, kDataStructBody);
      assert(struct_body);

      shared_ptr<CompoundType> new_compound;
      // type_fix_framework(struct_body);
      string current_compound_name;
      if (structure_name.size() > 0) {
        if (DBG) cout << "not anonymous" << endl;
        // not anonymous
        new_compound = make_compound_type_by_scope(
            scope_tree_->GetScopeById(struct_body->scope_id_),
            structure_name[0]->str_val_.value());
        current_compound_name = structure_name[0]->str_val_.value();
      } else {
        if (DBG) cout << "anonymous" << endl;
        // anonymous structure
        static int anonymous_idx = 1;
        string compound_name = string("ano") + std::to_string(anonymous_idx++);
        new_compound = make_compound_type_by_scope(
            scope_tree_->GetScopeById(struct_body->scope_id_), compound_name);
        current_compound_name = compound_name;
      }
      create_symbol_table(struct_body);
      auto compound_id = new_compound->type_id_;
      new_compound = make_compound_type_by_scope(
          scope_tree_->GetScopeById(struct_body->scope_id_),
          current_compound_name);

      // get all class variable define unit by finding kDataDeclarator.
      vector<IRPtr> strucutre_variable_unit;
      vector<IRPtr> structure_pointer_var;
      search_by_data_type(root, kDataDeclarator, strucutre_variable_unit,
                          kDataStructBody);
      if (DBG) cout << strucutre_variable_unit.size() << endl;
      if (DBG) cout << root->to_string() << endl;
      if (DBG) cout << frontend_->GetIRTypeStr(root->type_) << endl;

      // for each class variable define unit, collect all kDataPointer.
      // it will be the reference level, if empty, it is not a pointer
      for (auto var_define_unit : strucutre_variable_unit) {
        search_by_data_type(var_define_unit, kDataPointer,
                            structure_pointer_var, kDataWhatever, true);
        auto var_name = search_by_data_type(var_define_unit, kDataVarName);
        assert(var_name);
        if (structure_pointer_var.size() == 0) {  // not a pointer
          cur_scope->add_definition(compound_id, var_name->str_val_.value(),
                                    var_name->id_);
          if (DBG)
            cout << "[struct]not a pointer, name: "
                 << var_name->str_val_.value() << endl;
        } else {
          auto new_type =
              generate_pointer_type(compound_id, structure_pointer_var.size());
          cur_scope->add_definition(new_type, var_name->str_val_.value(),
                                    var_name->id_);
          if (DBG)
            cout << "[struct]a pointer in level "
                 << structure_pointer_var.size()
                 << ", name: " << var_name->str_val_.value() << endl;
        }
        structure_pointer_var.clear();
      }
    } else if (isUse(cur->data_flag_)) {  // only strucutre variable define
      if (DBG) cout << "data_flag = Use" << endl;
      vector<IRPtr> structure_name, strucutre_variable_name;
      search_by_data_type(cur, kDataClassName, structure_name);
      // search_by_data_type(root, kDataVarName, strucutre_variable_name,
      // kDataStructBody);

      assert(structure_name.size());
      auto compound_id =
          get_type_id_by_string(structure_name[0]->str_val_.value());
      if (DBG) {
        cout << structure_name[0]->str_val_.value() << endl;
        cout << "TYpe id: " << compound_id << endl;
      }
      if (compound_id == 0) return;
      // if(compound_id == 0)
      // forward_add_compound_type(structure_name[0]->str_val_);

      // get all class variable define unit by finding kDataDeclarator.
      vector<IRPtr> strucutre_variable_unit;
      vector<IRPtr> structure_pointer_var;
      search_by_data_type(root, kDataDeclarator, strucutre_variable_unit,
                          kDataStructBody);
      if (DBG) cout << strucutre_variable_unit.size() << endl;
      if (DBG) cout << root->to_string() << endl;
      if (DBG) cout << frontend_->GetIRTypeStr(root->type_) << endl;

      // for each class variable define unit, collect all kDataPointer.
      // it will be the reference level, if empty, it is not a pointer
      for (auto var_define_unit : strucutre_variable_unit) {
        search_by_data_type(var_define_unit, kDataPointer,
                            structure_pointer_var, kDataWhatever, true);
        auto var_name = search_by_data_type(var_define_unit, kDataVarName);
        assert(var_name);
        if (structure_pointer_var.size() == 0) {  // not a pointer
          cur_scope->add_definition(compound_id, var_name->str_val_.value(),
                                    var_name->id_);
          spdlog::debug("[struct]not a pointer, name: {}",
                        var_name->str_val_.value());
        } else {
          auto new_type =
              generate_pointer_type(compound_id, structure_pointer_var.size());
          cur_scope->add_definition(new_type, var_name->str_val_.value(),
                                    var_name->id_);
          spdlog::debug("[struct]a pointer in level {}, name: {}",
                        structure_pointer_var.size(),
                        var_name->str_val_.value());
        }
      }
      structure_pointer_var.clear();
    }
  } else {
    if (cur->left_) collect_structure_definition(cur->left_, root);
    if (cur->right_) collect_structure_definition(cur->right_, root);
  }
}

void TypeSystem::collect_function_definition(IRPtr cur) {
  auto return_value_type_ir =
      search_by_data_type(cur, kDataFunctionReturnValue, kDataFunctionBody);
  auto function_name_ir =
      search_by_data_type(cur, kDataFunctionName, kDataFunctionBody);
  auto function_arg_ir =
      search_by_data_type(cur, kDataFunctionArg, kDataFunctionBody);

  string function_name_str;
  if (function_name_ir) {
    function_name_str = function_name_ir->to_string();
    strip_string(function_name_str);
  }

#ifdef SOLIDITYFUZZ
  TYPEID return_type = ANYTYPE;
#else
  TYPEID return_type = NOTEXIST;
#endif
  string return_value_type_str;
  if (return_value_type_ir) {
    return_value_type_str = return_value_type_ir->to_string();
    if (return_value_type_str.size() > 7) {
      if (return_value_type_str.substr(0, 7) == "struct ") {
        return_value_type_str =
            return_value_type_str.substr(7, return_value_type_str.size() - 7);
      } else if (return_value_type_str.substr(0, 5) == "enum ") {
        return_value_type_str =
            return_value_type_str.substr(5, return_value_type_str.size() - 5);
      }
    }
    strip_string(return_value_type_str);
    return_type = get_type_id_by_string(return_value_type_str);
  }

#ifdef SOLIDITYFUZZ
  if (return_type == NOTEXIST) return_type = ANYTYPE;
#else
#endif

  vector<TYPEID> arg_types;
  vector<string> arg_names;
  vector<unsigned long> arg_ids;
  if (function_arg_ir) {
    queue<IRPtr> q;
    map<IRPtr *, IRPtr> m_save;
    set<IRTYPE> ss;
    // ss.insert(kParameterDeclaration);
    if (!gen::Configuration::GetInstance().IsWeakType()) {
      ss = gen::Configuration::GetInstance().GetFunctionArgNodeType();
    }

    // q.push(function_arg_ir);
    split_to_basic_unit(function_arg_ir, q, m_save, ss);

    while (!q.empty()) {
      auto cur = q.front();
      string var_type;
      string var_name;

      vector<IRPtr> ir_vec;
      vector<IRPtr> ir_vec_name;
      search_by_data_type(cur, kDataVarType, ir_vec);
      search_by_data_type(cur, kDataVarName, ir_vec_name);

      if (ir_vec_name.empty()) {
        break;
      }
      // handle specially
      for (auto ir : ir_vec) {
        if (ir->op_ == nullptr || ir->op_->prefix_.empty()) {
          auto tmpp = ir->to_string();
          var_type += tmpp.substr(0, tmpp.size() - 1);
        } else {
          var_type += ir->op_->prefix_;
        }
        var_type += " ";
      }
      var_type = var_type.substr(0, var_type.size() - 1);
      var_name = ir_vec_name[0]->to_string();
      auto idx = ir_vec_name[0]->id_;
      if (DBG) cout << "Type string: " << var_type << endl;
      if (DBG) cout << "Arg name: " << var_name << endl;
      if (!var_type.empty()) {
        int type = get_basic_type_id_by_string(var_type);
        if (type == 0) {
#ifdef SOLIDITYFUZZ
          type = ANYTYPE;
#else
          arg_types.clear();
          arg_names.clear();
          arg_ids.clear();
          break;
#endif
        }
        arg_types.push_back(type);
        arg_names.push_back(var_name);
        arg_ids.push_back(idx);
      }

      q.pop();
    }

    connect_back(m_save);
  }
  if (DBG) cout << "Function name: " << function_name_str << endl;
  if (DBG)
    cout << "return value type: " << return_value_type_str
         << "id:" << return_type << endl;
  if (DBG) cout << "Args type: " << endl;
  for (auto i : arg_types) {
    if (DBG) cout << "typeid" << endl;
    if (DBG) cout << get_type_by_type_id(i)->type_name_ << endl;
  }

  auto cur_scope = scope_tree_->GetScopeById(cur->scope_id_);
  if (return_type) {
    auto function_ptr =
        make_function_type(function_name_str, return_type, arg_types);
    if (function_ptr == nullptr || function_name_ir == nullptr) return;
    // if(DBG) cout << cur_scope << ", " << function_ptr << endl;
    cur_scope->add_definition(function_ptr->type_id_, function_ptr->type_name_,
                              function_name_ir->id_);
  }

  auto function_body = search_by_data_type(cur, kDataFunctionBody);
  if (function_body) {
    cur_scope = scope_tree_->GetScopeById(function_body->scope_id_);
    for (auto i = 0; i < arg_types.size(); i++) {
      cur_scope->add_definition(arg_types[i], arg_names[i], arg_ids[i]);
    }
    create_symbol_table(function_body);
  }
}

DATATYPE TypeSystem::find_define_type(IRPtr cur) {
  if (cur->data_type_ == kDataVarType || cur->data_type_ == kDataClassType ||
      cur->data_type_ == kDataFunctionType)
    return cur->data_type_;

  if (cur->left_) {
    auto res = find_define_type(cur->left_);
    if (res != kDataWhatever) return res;
  }

  if (cur->right_) {
    auto res = find_define_type(cur->right_);
    if (res != kDataWhatever) return res;
  }

  return kDataWhatever;
}

bool TypeSystem::collect_definition(IRPtr cur) {
  bool res = false;
  if (cur->data_type_ == kDataVarDefine) {
    auto define_type = find_define_type(cur);

    switch (define_type) {
      case kDataVarType:
        if (DBG) cout << "kDataVarType" << endl;
        if (gen::Configuration::GetInstance().IsWeakType()) {
          collect_simple_variable_defintion_wt(cur);
        } else {
          collect_simple_variable_defintion(cur);
        }
        return true;

      case kDataClassType:
        if (DBG) cout << "kDataClassType" << endl;
        if (gen::Configuration::GetInstance().IsWeakType()) {
          collect_structure_definition_wt(cur, cur);
        } else {
          collect_structure_definition(cur, cur);
        }
        return true;

      case kDataFunctionType:
        if (DBG) cout << "kDataFunctionType" << endl;
        if (gen::Configuration::GetInstance().IsWeakType()) {
          collect_function_definition_wt(cur);
        } else {
          collect_function_definition(cur);
        }
        return true;
      default:

        // handle structure and function ,array ,etc..
        if (gen::Configuration::GetInstance().IsWeakType()) {
          collect_simple_variable_defintion_wt(cur);
        } else {
          collect_simple_variable_defintion(cur);
        }

        break;
    }
  } else {
    if (cur->left_) res = collect_definition(cur->left_) && res;
    if (cur->right_) res = collect_definition(cur->right_) && res;
  }

  return res;
}

// map<IR*, shared_ptr<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>>
// TypeSystem::cache_inference_map_;
bool TypeSystem::TypeInferer::Infer(IRPtr &cur, int scope_type) {
  return type_inference_new(cur, scope_type);
}

bool TypeSystem::TypeInferer::type_inference_new(IRPtr cur, int scope_type) {
  auto cur_type = std::make_shared<CandidateTypes>();
  int res_type = NOTEXIST;
  bool flag;
  if (DBG) cout << "Infering: " << cur->to_string() << endl;
  if (DBG) cout << "Scope type: " << scope_type << endl;

  if (cur->type_ == frontend_->GetStringLiteralType()) {
    res_type = get_type_id_by_string("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  } else if (cur->type_ == frontend_->GetIntLiteralType()) {
    res_type = get_type_id_by_string("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  } else if (cur->type_ == frontend_->GetFloatLiteralType()) {
    res_type = get_type_id_by_string("ANYTYPE");
    cur_type->AddCandidate(res_type, 0, 0);
    cache_inference_map_[cur] = cur_type;
    return true;
  }

  if (cur->type_ == frontend_->GetIdentifierType()) {
    // handle here
    if (cur->str_val_ == "FIXME") {
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

      res_type = locate_defined_variable_by_name(cur->str_val_.value(),
                                                 cur->scope_id_);
      if (DBG) cout << "Name: " << cur->str_val_.value() << endl;
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
          if (cur->str_val_ == member) {
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

  if (is_op_null(cur->op_)) {
    if (cur->left_ && cur->right_) {
      flag = type_inference_new(cur->left_, scope_type);
      if (!flag) return flag;
      flag = type_inference_new(cur->right_, scope_type);
      if (!flag) return flag;
      for (auto &left : cache_inference_map_[cur->left_]->GetCandidates()) {
        for (auto &right : cache_inference_map_[cur->right_]->GetCandidates()) {
          auto res_type = least_upper_common_type(left.first, right.first);
          cur_type->AddCandidate(res_type, left.first, right.first);
        }
      }
      cache_inference_map_[cur] = cur_type;
    } else if (cur->left_) {
      flag = type_inference_new(cur->left_, scope_type);
      if (!flag || !cache_inference_map_[cur->left_]->HasCandidate())
        return false;
      if (DBG) cout << "Left: " << cur->left_->to_string() << endl;
      assert(cache_inference_map_[cur->left_]->HasCandidate());
      cache_inference_map_[cur] = cache_inference_map_[cur->left_];
    } else {
      if (DBG) cout << cur->to_string() << endl;
      return false;
      assert(0);
    }
    return true;
  }

  // handle by OP

  auto cur_op = get_op_value(cur->op_);
  if (cur_op == NOTEXIST) {
    if (DBG) cout << cur->to_string() << endl;
    if (DBG)
      cout << cur->op_->prefix_ << ", " << cur->op_->middle_ << ", "
           << cur->op_->suffix_ << endl;
    if (DBG) cout << "OP not exist!" << endl;
    return false;
    assert(0);
  }

  if (is_op1(cur_op)) {
    // assert(cur->left_); //for test
    if (cur->left_ == nullptr) {
      return false;
    }
    flag = type_inference_new(cur->left_, scope_type);
    if (!flag) return flag;
    // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>();
    for (auto &left : cache_inference_map_[cur->left_]->GetCandidates()) {
      auto left_type = left.first;
      if (DBG) cout << "Reaching op1" << endl;
      if (DBG)
        cout << cur->op_->prefix_ << ", " << cur->op_->middle_ << ", "
             << cur->op_->suffix_ << endl;
      res_type = query_result_type(cur_op, left_type);
      if (DBG) cout << "Result_type: " << res_type << endl;
      if (res_type != NOTEXIST) {
        cur_type->AddCandidate(res_type, left_type, 0);
      }
    }
    cache_inference_map_[cur] = cur_type;
  } else if (is_op2(cur_op)) {
    if (!(cur->left_ && cur->right_)) return false;
    // auto cur_type = make_shared<map<TYPEID, vector<pair<TYPEID, TYPEID>>>>();
    switch (get_fix_order(cur_op)) {
      case LEFT_TO_RIGHT: {
        // this shouldn't contain "FIXME"
        if (DBG) cout << "Left to right" << endl;
        flag = type_inference_new(cur->left_, scope_type);
        if (!flag) return flag;
        if (!cache_inference_map_[cur->left_]->HasCandidate()) return false;
        auto left_type =
            cache_inference_map_[cur->left_]->GetARandomCandidateType();
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
        flag = type_inference_new(cur->right_, new_left_type);
        if (!flag) return flag;
        auto right_type =
            cache_inference_map_[cur->right_]->GetARandomCandidateType();
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
        flag = type_inference_new(cur->left_, scope_type);
        if (!flag) return flag;
        flag = type_inference_new(cur->right_, scope_type);
        if (!flag) return flag;
        auto left_type = cache_inference_map_[cur->left_];
        auto right_type = cache_inference_map_[cur->right_];
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
             cache_inference_map_[cur->left_]->GetCandidates()) {
          for (auto &right_cache :
               cache_inference_map_[cur->right_]->GetCandidates()) {
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

int TypeSystem::TypeInferer::locate_defined_variable_by_name(
    const string &var_name, int scope_id) {
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

set<int> TypeSystem::TypeInferer::collect_usable_type(IRPtr cur) {
  set<int> result;
  auto ir_id = cur->id_;
  auto current_scope = scope_tree_->GetScopeById(cur->scope_id_);
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

vector<map<int, vector<string>>> TypeSystem::collect_all_var_definition_by_type(
    IRPtr cur) {
  vector<map<int, vector<string>>> result;
  map<int, vector<string>> simple_var;
  map<int, vector<string>> functions;
  map<int, vector<string>> compound_types;
  map<int, vector<string>> pointer_types;
  auto cur_scope_id = cur->scope_id_;
  auto ir_id = cur->id_;
  auto current_scope = scope_tree_->GetScopeById(cur_scope_id);
  while (current_scope) {
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

pair<OPTYPE, vector<int>>
TypeSystem::TypeInferer::collect_sat_op_by_result_type(
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

vector<string> TypeSystem::TypeInferer::get_op_by_optype(OPTYPE op_type) {
  for (auto &s1 : op_id_map_) {
    for (auto &s2 : s1.second) {
      for (auto &s3 : s2.second) {
        if (s3.second == op_type) return {s1.first, s2.first, s3.first};
      }
    }
  }

  return {};
}

string TypeSystem::get_class_member_by_type_no_duplicate(int type,
                                                         int target_type,
                                                         set<int> &visit) {
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

string TypeSystem::get_class_member_by_type(int type, int target_type) {
  set<int> visit;
  return get_class_member_by_type_no_duplicate(type, target_type, visit);
}

bool TypeSystem::filter_compound_type(
    map<int, vector<string>> &compound_var_map, int type) {
  bool res = false;
  auto tmp = compound_var_map;

  for (auto &each_compound_var : tmp) {
    auto compound_type = each_compound_var.first;
    auto member_name = get_class_member_by_type(compound_type, type);
    if (!member_name.empty()) {
      res = true;
      break;
    }

    compound_var_map.erase(each_compound_var.first);
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
static map<int, set<int>> builtin_structure_type_cache;
set<int> TypeSystem::calc_possible_types_from_structure(int structure_type) {
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

set<int> TypeSystem::calc_satisfiable_functions(
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

#define SIMPLE_VAR_IDX 0
#define STRUCTURE_IDX 1
#define FUNCTION_CALL_IDX 2
#define HANDLER_CASE_NUM 3

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

map<int, vector<set<int>>> TypeSystem::collect_satisfiable_types(
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

string TypeSystem::function_call_gen_handler(
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

string TypeSystem::structure_member_gen_handler(
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

void TypeSystem::update_pointer_var(
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

string TypeSystem::expression_gen_handler(
    int type, map<int, vector<set<int>>> &all_satisfiable_types,
    map<int, vector<string>> &function_map,
    map<int, vector<string>> &compound_var_map, IRPtr ir) {
  string res;
  auto sat_op = TypeInferer::collect_sat_op_by_result_type(
      type, all_satisfiable_types, function_map,
      compound_var_map);  // map<OPTYPE, vector<typeid>>
  if (DBG) cout << "OP id: " << sat_op.first << endl;
  if (sat_op.first == 0) {
    return gen_random_num_string();
  }
  assert(sat_op.first);

  auto op = TypeInferer::get_op_by_optype(
      sat_op.first);  // vector<string> for prefix, middle, suffix
  assert(op.size());  // should not be an empty operator
  if (TypeInferer::is_op1(sat_op.first)) {
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

string TypeSystem::generate_expression_by_type(int type, IRPtr ir) {
  gen_counter_ = 0;
  function_gen_counter_ = 0;
  auto res = generate_expression_by_type_core(type, ir);
  if (res.size() == 0) {
    assert(0);
  }
  return res;
}

string TypeSystem::generate_expression_by_type_core(int type, IRPtr ir) {
  static vector<map<int, vector<string>>> var_maps;
  static map<int, vector<set<int>>> all_satisfiable_types;
  if (gen_counter_ == 0) {
    if (current_fix_scope_ != ir->scope_id_) {
      current_fix_scope_ = ir->scope_id_;
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

IRPtr TypeSystem::locate_mutated_ir(IRPtr root) {
  if (root->left_) {
    if (root->right_ == nullptr) {
      return locate_mutated_ir(root->left_);
    }

    if (contain_fixme(root->right_) == false) {
      return locate_mutated_ir(root->left_);
    }
    if (contain_fixme(root->left_) == false) {
      return locate_mutated_ir(root->right_);
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

  spdlog::debug("NodeType: {}", frontend_->GetIRTypeStr(ir->type_));
  spdlog::debug("Type: {}", type);

  // if (ir->type_ == kIdentifier && ir->str_val_ == "FIXME")
  if (ir->str_val_.has_value() && ir->str_val_.value() == "FIXME") {
    spdlog::debug("Reach here");
    ir->str_val_ = generate_expression_by_type(type, ir);
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
      spdlog::debug("NodeType: {}", frontend_->GetIRTypeStr(ir->type_));
    }
    if (!inferer.GetCandidateTypes(ir)->HasCandidate(type)) return false;
    if (ir->left_) {
      auto iter =
          *random_pick(inferer.GetCandidateTypes(ir)->GetCandidates(type));
      if (ir->right_) {
        simple_fix(ir->left_, iter.left, inferer);
        simple_fix(ir->right_, iter.right, inferer);
      } else {
        simple_fix(ir->left_, iter.left, inferer);
      }
    }
  } else {
    if (ir->left_) simple_fix(ir->left_, type, inferer);
    if (ir->right_) simple_fix(ir->right_, type, inferer);
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
      if (root->str_val_ == "FIXME") {
        int type = ALLTYPES;
        res = simple_fix(root, type, inferer);
      } else {
        if (root->right_) stk.push(root->right_);
        if (root->left_) stk.push(root->left_);
      }
    } else {
      if (root->type_ == gen::Configuration::GetInstance().GetFixIRType() ||
          root->str_val_ == "FIXME") {
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
        if (root->right_) stk.push(root->right_);
        if (root->left_) stk.push(root->left_);
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

void TypeSystem::extract_struct_after_mutation(IRPtr root) {
  if (root->left_) {
    if (root->left_->data_type_ == kDataFixUnit) {
      if (contain_fixme(root->left_)) {
        auto save_ir_id = root->left_->id_;
        auto save_scope = root->left_->scope_id_;
        ;
        root->left_ =
            std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME");
        root->left_->scope_id_ = save_scope;
        root->left_->id_ = save_ir_id;
      }
    } else {
      extract_struct_after_mutation(root->left_);
    }
  }
  if (root->right_) {
    if (root->right_->data_type_ == kDataFixUnit) {
      if (contain_fixme(root->right_)) {
        auto save_ir_id = root->right_->id_;
        auto save_scope = root->right_->scope_id_;
        ;
        root->right_ =
            std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME");
        root->right_->scope_id_ = save_scope;
        root->right_->id_ = save_ir_id;
      }
    } else {
      extract_struct_after_mutation(root->right_);
    }
  }
  return;
}

bool TypeSystem::validate(IRPtr &root) {
  bool res = false;
#ifdef SYNTAX_ONLY
  res = validate_syntax_only(root);
  if (res == false) {
    type_fix_framework_fail_counter++;
  } else {
    top_fix_success_counter++;
  }
  return res;
#else
  gen_counter_ = 0;
  current_fix_scope_ = -1;
  auto new_root = frontend_->TranslateToIR(root->to_string());
  if (new_root == nullptr) {
    return false;
  }

  if (!gen::Configuration::GetInstance().IsWeakType()) {
    root = new_root;
    extract_struct_after_mutation(root);

    set_scope_translation_flag(true);
    new_root = frontend_->TranslateToIR(root->to_string());
    if (new_root == nullptr) return false;
    scope_tree_ = BuildScopeTree(new_root);
    root = new_root;
  } else {
    set_scope_translation_flag(true);
    new_root = frontend_->TranslateToIR(root->to_string());
    if (new_root == nullptr) return false;
    scope_tree_ = BuildScopeTree(new_root);
    root = new_root;
    extract_struct_after_mutation(root);
  }
  // init_internal_type();
  std::cerr << "Generate IR: " << root->to_string() << "" << std::endl;
  res = create_symbol_table(root);
  if (res == false) {
    type_fix_framework_fail_counter++;
    root = nullptr;
  } else {
    res = top_fix(root);
    if (res == false) {
      top_fix_fail_counter++;
      root = nullptr;
    }
    top_fix_success_counter++;
  }

  // cache_inference_map_.clear();
  scope_tree_ = nullptr;
  clear_definition_all();
  set_scope_translation_flag(false);

  return res;
#endif
}

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

int TypeSystem::TypeInferer::query_result_type(int op, int arg1, int arg2) {
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

int TypeSystem::TypeInferer::get_op_property(int op_id) {
  assert(op_rules_.find(op_id) != op_rules_.end());
  assert(op_rules_[op_id].size());

  return op_rules_[op_id][0].property_;
}

bool TypeSystem::TypeInferer::is_op1(int op_id) {
  if (op_rules_.find(op_id) == op_rules_.end()) {
    return false;
  }

  assert(op_rules_[op_id].size());

  return op_rules_[op_id][0].operand_num_ == 1;
}

bool TypeSystem::TypeInferer::is_op2(int op_id) {
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

OPRule TypeSystem::TypeInferer::parse_op_rule(string s) {
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
}  // namespace polyglot
