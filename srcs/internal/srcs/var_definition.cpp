#include "var_definition.h"

#include <optional>
#include <queue>
#include <stack>

#include "config_misc.h"
#include "spdlog/spdlog.h"
#include "typesystem.h"

using namespace std;
#define NOTEXISTS 0
#define DBG 0
// shared_ptr<Scope> g_scope_current;
// static shared_ptr<Scope> g_scope_root;
/*
static set<int> all_functions;
set<int> all_compound_types_;
set<int> all_internal_compound_types;
set<int> all_internal_functions;
map<TYPEID, shared_ptr<VarType>> internal_type_map;

map<TYPEID, map<int, TYPEID>> pointer_map;  // original_type:<level: typeid>

*/
namespace polyglot {

bool RealTypeSystem::is_internal_obj_setup = true;
map<string, shared_ptr<VarType>> RealTypeSystem::basic_types;
set<TYPEID> RealTypeSystem::basic_types_set;

bool RealTypeSystem::IsBuiltinType(TYPEID type_id) {
  return internal_type_map.count(type_id) > 0;
}

void SymbolTable::AddDefinition(Definition def) {
  // TODO: Check if the definition is already in the table
  m_table_[def.type].push_back(def);
}

void SymbolTable::AddDefinition(TYPEID type, const string &name,
                                ORDERID order) {
  Definition def;
  def.type = type;
  def.name = name;
  def.order_id = order;
  AddDefinition(def);
}

std::optional<Definition> SymbolTable::GetDefinition(
    std::string_view name) const {
  for (auto &def : m_table_) {
    for (auto &d : def.second) {
      if (d.name == name) {
        return d;
      }
    }
  }
  return std::nullopt;
}

map<TYPEID, vector<string>> &RealTypeSystem::GetBuiltinSimpleVarTypes() {
  static map<TYPEID, vector<string>> res;
  if (res.size() > 0) return res;

  return res;
}
map<TYPEID, vector<string>> &RealTypeSystem::GetBuiltinCompoundTypes() {
  static map<TYPEID, vector<string>> res;
  if (res.size() > 0) return res;

  for (auto type_id : all_internal_compound_types) {
    auto ptype = internal_type_map[type_id];
    res[type_id].push_back(ptype->type_name_);
  }

  return res;
}

map<TYPEID, vector<string>> &RealTypeSystem::GetBuiltinFunctionTypes() {
  static map<TYPEID, vector<string>> res;
  if (res.size() > 0) return res;

  for (auto type_id : all_internal_functions) {
    auto ptype = internal_type_map[type_id];
    res[type_id].push_back(ptype->type_name_);
  }

  return res;
}

TYPEID VarType::get_type_id() const { return type_id_; }

// shared_ptr<Scope> get_scope_root() { return g_scope_root; }

void RealTypeSystem::init_convert_chain() {
  // init instance for ALLTYPES, ALLCLASS, ALLFUNCTION ...

  /*
  static vector<pair<string, string>> v_convert;
  static bool has_init = false;

  if (!has_init) {
    __SEMANTIC_CONVERT_CHAIN__
    has_init = true;
  }
  */

  for (auto &rule : gen::Configuration::GetInstance().GetConvertChain()) {
    auto base_var =
        get_type_by_type_id(get_basic_type_id_by_string(rule.second));
    auto derived_var =
        get_type_by_type_id(get_basic_type_id_by_string(rule.first));
    if (base_var != nullptr && derived_var != nullptr) {
      derived_var->base_type_.push_back(base_var);
      base_var->derived_type_.push_back(derived_var);
    } else {
      assert(0);
    }
  }
}

bool RealTypeSystem::is_derived_type(TYPEID dtype, TYPEID btype) {
  auto derived_type = get_type_by_type_id(dtype);
  auto base_type = get_type_by_type_id(btype);

  if (base_type == derived_type) return true;
  // if(derived_type == nullptr || base_type == nullptr) return false;
  assert(derived_type && base_type);

  bool res = false;
  // if(DBG) cout << derived_type << endl;
  for (auto &t : derived_type->base_type_) {
    assert(t->type_id_ != dtype);
    res = res || is_derived_type(t->type_id_, btype);
  }

  return res;
}

RealTypeSystem::RealTypeSystem() {
  init_basic_types();
  init_convert_chain();
}

void RealTypeSystem::init_basic_types() {
  for (auto &line : gen::Configuration::GetInstance().GetBasicTypeStr()) {
    if (line.empty()) continue;
    auto new_id = gen_type_id();
    auto ptr = make_shared<VarType>();
    ptr->type_id_ = new_id;
    ptr->type_name_ = line;
    basic_types[line] = ptr;
    basic_types_set.insert(new_id);
    type_map[new_id] = ptr;
    if (DBG) cout << "Basic types: " << line << ", type id: " << new_id << endl;
  }

  make_basic_type_add_map(ALLTYPES, "ALLTYPES");
  make_basic_type_add_map(ALLCOMPOUNDTYPE, "ALLCOMPOUNDTYPE");
  make_basic_type_add_map(ALLFUNCTION, "ALLFUNCTION");
  make_basic_type_add_map(ANYTYPE, "ANYTYPE");
  basic_types["ALLTYPES"] = get_type_by_type_id(ALLTYPES);
  basic_types["ALLCOMPOUNDTYPE"] = get_type_by_type_id(ALLCOMPOUNDTYPE);
  basic_types["ALLFUNCTION"] = get_type_by_type_id(ALLFUNCTION);
  basic_types["ANYTYPE"] = get_type_by_type_id(ANYTYPE);
}

TYPEID RealTypeSystem::get_basic_typeid_by_string(const string &s) {
  if (basic_types.find(s) != basic_types.end()) {
    return basic_types[s]->get_type_id();
  }

  return NOTEXISTS;
}

int RealTypeSystem::gen_type_id() {
  static int id = 10;
  return id++;
}

void RealTypeSystem::init_internal_type() {
  for (auto i : all_internal_functions) {
    auto ptr = get_function_type_by_type_id(i);
    // TODO: Fix this.
    // g_scope_root->add_definition(ptr->type_id_, ptr->type_name_, 0);
  }

  /*
      for(auto i: all_internal_class_methods){
          auto ptr = get_function_type_by_type_id(i);
          g_scope_root->add_definition(ptr->type_id_, ptr->type_name_, 0);
      }
  */
}

void RealTypeSystem::clear_type_map() {
  // clear type_map
  // copy basic type back to type_map
  pointer_map.clear();
  type_map.clear();
  all_compound_types_.clear();

  // make_basic_type_add_map(ALLTYPES, "ALLTYPES");
  // make_basic_type_add_map(ALLCOMPOUNDTYPE, "ALLCOMPOUNDTYPE");
  // make_basic_type_add_map(ALLFUNCTION, "ALLFUNCTION");
  // make_basic_type_add_map(ANYTYPE, "ANYTYPE");

  for (auto &i : basic_types) {
    i.second->base_type_.clear();
    i.second->derived_type_.clear();
    type_map[i.second->get_type_id()] = i.second;
  }

  init_convert_chain();
  // make_basic_type_add_map(ALLUPPERBOUND, "ALLUPPERBOUND");
}

set<int> RealTypeSystem::get_all_class() {
  set<int> res(all_compound_types_);
  res.insert(all_internal_compound_types.begin(),
             all_internal_compound_types.end());

  return res;
}

/*
shared_ptr<Scope> get_scope_by_id(int scope_id) {
  assert(scope_id_map.find(scope_id) != scope_id_map.end());
  return scope_id_map[scope_id];
}
*/

shared_ptr<VarType> RealTypeSystem::get_type_by_type_id(TYPEID type_id) {
  if (type_map.find(type_id) != type_map.end()) return type_map[type_id];

  if (internal_type_map.find(type_id) != internal_type_map.end())
    return internal_type_map[type_id];

  return nullptr;
}

shared_ptr<CompoundType> RealTypeSystem::get_compound_type_by_type_id(
    TYPEID type_id) {
  if (type_map.find(type_id) != type_map.end())
    return static_pointer_cast<CompoundType>(type_map[type_id]);
  if (internal_type_map.find(type_id) != internal_type_map.end())
    return static_pointer_cast<CompoundType>(internal_type_map[type_id]);

  return nullptr;
}

shared_ptr<FunctionType> RealTypeSystem::get_function_type_by_type_id(
    TYPEID type_id) {
  if (type_map.find(type_id) != type_map.end())
    return static_pointer_cast<FunctionType>(type_map[type_id]);
  if (internal_type_map.find(type_id) != internal_type_map.end())
    return static_pointer_cast<FunctionType>(internal_type_map[type_id]);

  return nullptr;
}

bool RealTypeSystem::is_compound_type(TYPEID type_id) {
  return all_compound_types_.find(type_id) != all_compound_types_.end() ||
         all_internal_compound_types.find(type_id) !=
             all_internal_compound_types.end();
}

TYPEID RealTypeSystem::get_compound_type_id_by_string(const string &s) {
  for (auto k : all_compound_types_) {
    if (type_map[k]->type_name_ == s) return k;
  }

  for (auto k : all_internal_compound_types) {
    if (internal_type_map[k]->type_name_ == s) return k;
  }

  return NOTEXISTS;
}

bool RealTypeSystem::is_function_type(TYPEID type_id) {
  return all_functions.find(type_id) != all_functions.end() ||
         all_internal_functions.find(type_id) != all_internal_functions.end() ||
         all_internal_class_methods.find(type_id) !=
             all_internal_class_methods.end();
}

bool RealTypeSystem::is_basic_type(TYPEID type_id) {
  return basic_types_set.find(type_id) != basic_types_set.end();
}

bool RealTypeSystem::is_basic_type(const string &s) {
  return basic_types.find(s) != basic_types.end();
}

TYPEID RealTypeSystem::get_basic_type_id_by_string(const string &s) {
  if (s == "ALLTYPES") return ALLTYPES;
  if (s == "ALLCOMPOUNDTYPE") return ALLCOMPOUNDTYPE;
  if (s == "ALLFUNCTION") return ALLFUNCTION;
  if (s == "ANYTYPE") return ANYTYPE;
  if (is_basic_type(s) == false) return NOTEXISTS;
  return basic_types[s]->get_type_id();
}

TYPEID RealTypeSystem::get_type_id_by_string(const string &s) {
  for (auto iter : type_map) {
    if (iter.second->type_name_ == s) return iter.first;
  }

  for (auto iter : internal_type_map) {
    if (iter.second->type_name_ == s) return iter.first;
  }
  return NOTEXISTS;
}

shared_ptr<FunctionType> RealTypeSystem::get_function_type_by_return_type_id(
    TYPEID type_id) {
  int counter = 0;
  shared_ptr<FunctionType> result = nullptr;
  for (auto t : all_functions) {
    shared_ptr<FunctionType> tmp_ptr =
        static_pointer_cast<FunctionType>(type_map[t]);
    if (tmp_ptr->return_type_ == type_id) {
      if (result == nullptr) {
        result = tmp_ptr;
      } else {
        if (rand() % (counter + 1) < 1) {
          result = tmp_ptr;
        }
      }
      counter++;
    }
  }
  return nullptr;
}

void RealTypeSystem::make_basic_type_add_map(TYPEID id, const string &s) {
  auto res = make_basic_type(id, s);
  type_map[id] = res;
  if (id == ALLCOMPOUNDTYPE) {
    for (auto internal_compound : all_internal_compound_types) {
      auto compound_ptr = get_type_by_type_id(internal_compound);
      res->derived_type_.push_back(compound_ptr);
    }
  } else if (id == ALLFUNCTION) {
    // handler function here
    for (auto internal_func : all_internal_functions) {
      auto func_ptr = get_type_by_type_id(internal_func);
      res->derived_type_.push_back(func_ptr);
    }
  } else if (id == ANYTYPE) {
    for (auto &type : internal_type_map) {
      res->derived_type_.push_back(type.second);
    }
  }
}

shared_ptr<VarType> RealTypeSystem::make_basic_type(TYPEID id,
                                                    const string &s) {
  auto res = make_shared<VarType>();
  res->type_id_ = id;
  res->type_name_ = s;

  return res;
}

void RealTypeSystem::forward_add_compound_type(string &structure_name) {
  if (DBG) cout << "pre define compound type" << endl;
  auto res = make_shared<CompoundType>();
  res->type_id_ = gen_type_id();
  res->type_name_ = structure_name;
  type_map[res->type_id_] = res;
  all_compound_types_.insert(res->type_id_);
  auto all_compound_type = get_type_by_type_id(ALLCOMPOUNDTYPE);
  assert(all_compound_type);
  all_compound_type->derived_type_.push_back(res);
  res->base_type_.push_back(all_compound_type);
}

set<int> RealTypeSystem::get_all_types_from_compound_type(int compound_type,
                                                          set<int> &visit) {
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

shared_ptr<CompoundType> RealTypeSystem::make_compound_type_by_scope(
    shared_ptr<Scope> scope, std::string structure_name) {
  shared_ptr<CompoundType> res = nullptr;

  auto tid = get_compound_type_id_by_string(structure_name);
  if (tid != NOTEXISTS) res = get_compound_type_by_type_id(tid);
  if (res == nullptr) {
    res = make_shared<CompoundType>();
    res->type_id_ = gen_type_id();
    res->type_name_ = structure_name;
    if (is_internal_obj_setup == true) {
      all_internal_compound_types.insert(res->type_id_);
      internal_type_map[res->type_id_] = res;
      auto all_compound_type = get_type_by_type_id(ALLCOMPOUNDTYPE);
      assert(all_compound_type);
      all_compound_type->derived_type_.push_back(res);
      res->base_type_.push_back(all_compound_type);
    } else {
      all_compound_types_.insert(res->type_id_);  // here
      type_map[res->type_id_] = res;              // here
      auto all_compound_type = get_type_by_type_id(ALLCOMPOUNDTYPE);
      assert(all_compound_type);
      all_compound_type->derived_type_.push_back(res);
      res->base_type_.push_back(all_compound_type);
    }
    if (structure_name.size()) {
      vector<TYPEID> tmp;
      auto pfunc = make_function_type(structure_name, res->type_id_, tmp);
      // TODO: Fix this.
      /*
      if (DBG)
        cout << "add definition: " << pfunc->type_id_ << ", " << structure_name
             << " to scope " << g_scope_root->scope_id_ << endl;
      g_scope_root->add_definition(pfunc->type_id_, structure_name, 0);
      */
    }
  }

  // res->define_root_ = scope->v_ir_set_.back();
  if (DBG)
    cout << "FUCK me in make compound typeid:" << res->type_id_
         << " Scope id:" << scope->scope_id_ << endl;

  for (auto &defined_var : scope->definitions_.GetTable()) {
    auto &var_type = defined_var.first;
    auto &var_names = defined_var.second;
    for (auto &var : var_names) {
      auto &var_name = var.name;
      res->v_members_[var_type].push_back(var_name);
      if (DBG)
        cout << "[struct member] add member: " << var_name
             << " type: " << var_type << " to structure " << res->type_name_
             << endl;
    }
  }

  return res;
}

shared_ptr<FunctionType> RealTypeSystem::make_function_type(
    string &function_name, TYPEID return_type, vector<TYPEID> &args) {
  auto res = make_shared<FunctionType>();
  res->type_id_ = gen_type_id();
  res->type_name_ = function_name;

  res->return_type_ = return_type;
  res->v_arg_types_ = args;
  if (is_internal_obj_setup == true) {
    internal_type_map[res->type_id_] = res;
    if (!is_in_class)
      all_internal_functions.insert(res->type_id_);
    else
      all_internal_class_methods.insert(res->type_id_);
    auto all_function_type = get_type_by_type_id(ALLFUNCTION);
    all_function_type->derived_type_.push_back(res);
    res->base_type_.push_back(all_function_type);
  } else {
    type_map[res->type_id_] = res;        // here
    all_functions.insert(res->type_id_);  // here
    auto all_function_type = get_type_by_type_id(ALLFUNCTION);
    all_function_type->derived_type_.push_back(res);
    res->base_type_.push_back(all_function_type);
  }

  return res;
}

shared_ptr<FunctionType> RealTypeSystem::make_function_type_by_scope(
    shared_ptr<Scope> scope) {
  return nullptr;  // may be useless
  /*
  auto res = make_shared<FunctionType>();
  res->type_id_ = gen_type_id();
  all_functions.insert(res->type_id_);
  type_map[res->type_id_] = res;

  for(auto ir: scope->v_ir_set_){
      if(isFunctionDefine(ir->data_flag_)){
          ir->value_type_ = res->type_id_;
          res->type_name_ = ir->str_val_;
          break;
      }
  }

  for(auto ir: scope->v_ir_set_){
      if(ir->data_type_ == kDataReturnValue){
          res->return_value_ir_.push_back(ir);
      }
      else if(ir->data_type_ == kDataFunctionArg){
          res->v_arguments_.push_back(ir);
      }
  }

  auto all_function_type = get_type_by_type_id(ALLFUNCTION);
  all_function_type->derived_type_.push_back(res);
  res->base_type_.push_back(all_function_type);

  return res;
  */
}

void Scope::add_definition(int type, IRPtr ir) {
  if (type == 0) return;
  m_define_ir_[type].push_back(ir);
}

void Scope::add_definition(int type, const string &var_name, unsigned long id) {
  if (type == 0) return;
  definitions_.AddDefinition({var_name, type, id});
}

void Scope::add_definition(int type, const string &var_name, unsigned long id,
                           ScopeType stype) {
  if (type == 0) return;

  if (gen::Configuration::GetInstance().IsWeakType()) {
    if (stype != kScopeStatement) {
      auto p = this;
      while (p != nullptr && p->scope_type_ != stype)
        p = p->parent_.lock().get();
      if (p == nullptr) p = this;
      if (p->s_defined_variable_names_.find(var_name) !=
          p->s_defined_variable_names_.end())
        return;

      p->s_defined_variable_names_.insert(var_name);
      p->definitions_.AddDefinition({var_name, type, id});

      return;
    } else {
      definitions_.AddDefinition({var_name, type, id});
      return;
    }
  }

  definitions_.AddDefinition({var_name, type, id});
}

TYPEID RealTypeSystem::least_upper_common_type(TYPEID type1, TYPEID type2) {
  if (type1 == type2) {
    return type1;
  }

  if (is_derived_type(type1, type2))
    return type2;
  else if (is_derived_type(type2, type1))
    return type1;
  return NOTEXISTS;
}

TYPEID RealTypeSystem::convert_to_real_type_id(TYPEID type1, TYPEID type2) {
  if (type1 > ALLUPPERBOUND) {
    return type1;
  }

  switch (type1) {
    case ALLTYPES: {
      if (type2 == ALLTYPES || type2 == NOTEXISTS) {
        /* FIX ME
        if(DBG) cout << "Map size: " << type_map.size() << endl;
        auto pick_ptr = random_pick(type_map);
        return pick_ptr->first;
        */
        auto pick_ptr = random_pick(basic_types_set);
        return *pick_ptr;
      } else if (type2 == ALLCOMPOUNDTYPE) {
        if (all_compound_types_.empty()) {
          if (DBG) cout << "empty me" << endl;
          break;
        }
        auto res = random_pick(all_compound_types_);
        return *res;
      } else if (is_basic_type(type2)) {
        return type2;
      } else {
        auto parent_type_ptr =
            static_pointer_cast<CompoundType>(type_map[type2]);
        if (parent_type_ptr->v_members_.empty()) {
          break;
        }
        auto res = random_pick(parent_type_ptr->v_members_);
        return res->first;
      }
    }
    case ALLFUNCTION: {
      auto res = *random_pick(all_functions);
      return res;
    }

    case ALLCOMPOUNDTYPE: {
      if (type2 == ALLTYPES || type2 == ALLCOMPOUNDTYPE ||
          is_basic_type(type2) || type2 == NOTEXISTS) {
        if (all_compound_types_.empty()) {
          if (DBG) cout << "empty me" << endl;
          break;
        }
        auto res = random_pick(all_compound_types_);
        return *res;
      } else {
        assert(is_compound_type(type2));
        auto parent_type_ptr =
            static_pointer_cast<CompoundType>(type_map[type2]);
        if (parent_type_ptr->v_members_.empty()) {
          break;
        }

        int counter = 0;
        auto res = NOTEXISTS;
        for (auto &iter : parent_type_ptr->v_members_) {
          if (is_compound_type(iter.first)) {
            if (rand() % (counter + 1) < 1) {
              res = iter.first;
            }
            counter++;
          }
        }
        return res;
      }
    }
  }
  return NOTEXISTS;
}

string CompoundType::get_member_by_type(TYPEID type) {
  if (v_members_.find(type) == v_members_.end()) {
    return "";
  }
  return *random_pick(v_members_[type]);
}

/*
void debug_scope_tree(shared_ptr<Scope> cur) {
  if (cur == nullptr) return;
  for (auto &child : cur->children_) {
    debug_scope_tree(child.second);
  }

  if (DBG) cout << cur->scope_id_ << ":" << endl;
  if (DBG) cout << "Definition set: " << endl;
  for (auto &iter : cur->definitions_.GetTable()) {
    if (DBG) cout << "Type id:" << iter.first << endl;
    auto tt = get_type_by_type_id(iter.first);
    if (tt == nullptr) continue;
    if (DBG) cout << "Type name: " << tt->type_name_ << endl;
    for (auto &name : iter.second) {
      if (DBG) cout << "\t" << name.name << endl;
    }
  }
  if (DBG) cout << "------------------------" << endl;
}
*/

void ScopeTree::EnterScope(ScopeType scope_type) {
  // if (get_scope_translation_flag() == false) return;
  auto new_scope = GenScope(scope_type);
  if (g_scope_root_ == nullptr) {
    if (DBG) cout << "set g_scope_root, g_scope_current: " << new_scope << endl;
    g_scope_root_ = g_scope_current_ = new_scope;
    // return;
  } else {
    new_scope->parent_ = g_scope_current_;
    if (DBG) cout << "use g_scope_current: " << g_scope_current_ << endl;
    g_scope_current_->children_[new_scope->scope_id_] = new_scope;
    g_scope_current_ = new_scope;
    if (DBG)
      cout << "[enter]change g_scope_current: " << g_scope_current_ << endl;
  }
  if (DBG) cout << "Entering new scope: " << g_scope_id_counter_ << endl;
}

void ScopeTree::ExitScope() {
  // if (get_scope_translation_flag() == false) return;
  if (DBG) cout << "Exit scope: " << g_scope_current_->scope_id_ << endl;
  g_scope_current_ = g_scope_current_->parent_.lock();
  if (DBG) cout << "[exit]change g_scope_current: " << g_scope_current_ << endl;
  // g_scope_root = nullptr;
}

ScopePtr ScopeTree::GenScope(ScopeType scope_type) {
  g_scope_id_counter_++;
  auto res = make_shared<Scope>(g_scope_id_counter_, scope_type);
  scope_id_map_[g_scope_id_counter_] = res;
  return res;
}

ScopePtr ScopeTree::GetScopeById(ScopeID id) {
  if (scope_id_map_.find(id) == scope_id_map_.end()) {
    return nullptr;
  }
  return scope_id_map_[id];
}

void BuildScopeTreeImpl(IRPtr root, ScopeTree &scope_tree) {
  if (root == nullptr) return;
  if (root->GetScopeType() != kScopeDefault) {
    scope_tree.EnterScope(root->GetScopeType());
  }
  if (scope_tree.GetCurrentScope() != nullptr) {
    root->SetScopeID(scope_tree.GetCurrentScopeId());
  }
  if (root->left_child) {
    BuildScopeTreeImpl(root->left_child, scope_tree);
  }
  if (root->right_child) {
    BuildScopeTreeImpl(root->right_child, scope_tree);
  }
  if (root->GetScopeType() != kScopeDefault) {
    scope_tree.ExitScope();
  }
}

std::shared_ptr<ScopeTree> BuildScopeTree(IRPtr root) {
  auto scope_tree = std::make_shared<ScopeTree>();
  BuildScopeTreeImpl(root, *scope_tree);
  return scope_tree;
}

string RealTypeSystem::get_type_name_by_id(TYPEID type_id) {
  if (type_id == 0) return "NOEXISTS";
  if (DBG) cout << "get_type name: Type: " << type_id << endl;
  if (DBG)
    cout << "get_type name: Str: " << type_map[type_id]->type_name_ << endl;

  if (type_map.count(type_id) > 0) {
    return type_map[type_id]->type_name_;
  }
  if (internal_type_map.count(type_id) > 0) {
    return internal_type_map[type_id]->type_name_;
  }

  return "NOEXIST";
}

int RealTypeSystem::generate_pointer_type(int original_type,
                                          int pointer_level) {
  // must be a positive level
  assert(pointer_level);
  if (pointer_map[original_type].count(pointer_level))
    return pointer_map[original_type][pointer_level];

  auto cur_type = make_shared<PointerType>();
  cur_type->type_id_ = gen_type_id();
  cur_type->type_name_ = "pointer_typeid_" + std::to_string(cur_type->type_id_);

  int base_type = -1;
  if (pointer_level == 1)
    base_type = original_type;
  else
    base_type = generate_pointer_type(original_type, pointer_level - 1);

  cur_type->orig_type_ = base_type;
  cur_type->reference_level_ = pointer_level;
  cur_type->basic_type_ = original_type;

  auto alltype_ptr =
      get_type_by_type_id(get_basic_type_id_by_string("ALLTYPES"));
  cur_type->base_type_.push_back(alltype_ptr);
  alltype_ptr->derived_type_.push_back(cur_type);

  type_map[cur_type->type_id_] = cur_type;
  pointer_map[original_type][pointer_level] = cur_type->type_id_;
  debug_pointer_type(cur_type);
  return cur_type->type_id_;
}

int RealTypeSystem::get_or_create_pointer_type(int type) {
  bool is_found = false;
  int orig_type = -1;
  int level = -1;
  int res = -1;
  bool outter_flag = false;
  for (auto &each_orig : pointer_map) {
    // if type is a basic type
    if (each_orig.first == type) {
      is_found = true;
      level = 0;
      orig_type = type;
      break;
    }

    // not a basic type
    for (auto &each_level : each_orig.second) {
      if (each_level.second == type) {
        is_found = true;
        level = each_level.first;
        orig_type = each_orig.first;
        outter_flag = true;
        break;
      }
    }
    if (outter_flag) break;
  }

  if (is_found == true) {
    assert(level != -1 && orig_type != -1);

    // found target pointer type
    if (pointer_map[orig_type].count(level + 1))
      return pointer_map[orig_type][level + 1];

    // found original type but no this level reference
    auto cur_type = make_shared<PointerType>();
    cur_type->type_id_ = gen_type_id();
    cur_type->type_name_ =
        "pointer_typeid_" + std::to_string(cur_type->type_id_);
    cur_type->orig_type_ = type;
    cur_type->reference_level_ = level + 1;
    cur_type->basic_type_ = orig_type;
    auto alltype_ptr =
        get_type_by_type_id(get_basic_type_id_by_string("ALLTYPES"));
    alltype_ptr->derived_type_.push_back(cur_type);
    cur_type->base_type_.push_back(alltype_ptr);

    type_map[cur_type->type_id_] = cur_type;
    pointer_map[orig_type][level + 1] = cur_type->type_id_;
    res = cur_type->type_id_;
    debug_pointer_type(cur_type);
  } else {
    // new original type
    auto cur_type = make_shared<PointerType>();
    cur_type->type_id_ = gen_type_id();
    cur_type->type_name_ =
        "pointer_typeid_" + std::to_string(cur_type->type_id_);
    cur_type->orig_type_ = type;
    cur_type->reference_level_ = 1;
    cur_type->basic_type_ = type;
    auto alltype_ptr =
        get_type_by_type_id(get_basic_type_id_by_string("ALLTYPES"));
    alltype_ptr->derived_type_.push_back(cur_type);
    cur_type->base_type_.push_back(alltype_ptr);

    type_map[cur_type->type_id_] = cur_type;
    pointer_map[type][1] = cur_type->type_id_;
    res = cur_type->type_id_;
    debug_pointer_type(cur_type);
  }

  return res;
}

bool RealTypeSystem::is_pointer_type(int type) {
  if (DBG) cout << "is_pointer_type: " << type << endl;
  auto type_ptr = get_type_by_type_id(type);
  return type_ptr->is_pointer_type();
}

shared_ptr<PointerType> RealTypeSystem::get_pointer_type_by_type_id(
    TYPEID type_id) {
  if (type_map.find(type_id) == type_map.end()) return nullptr;

  auto res = static_pointer_cast<PointerType>(type_map[type_id]);
  if (res->is_pointer_type() == false) return nullptr;

  return res;
}

void RealTypeSystem::debug_pointer_type(shared_ptr<PointerType> &p) {
  if (DBG) cout << "------new_pointer_type-------" << endl;
  if (DBG) cout << "type id: " << p->type_id_ << endl;
  if (DBG) cout << "basic_type: " << p->basic_type_ << endl;
  if (DBG) cout << "reference_level: " << p->reference_level_ << endl;
  if (DBG) cout << "-----------------------------" << endl;
}

void reset_scope() {
  if (DBG) cout << "call reset_scope" << endl;
  // g_scope_current = nullptr;
  // g_scope_root = nullptr;
  // scope_id_map.clear();
}

void clear_definition_all() {
  // clear_type_map();
  reset_scope();
}

bool ScopeTree::is_contain_definition(IRPtr cur) {
  bool res = false;
  std::stack<IRPtr> stk;

  stk.push(cur);

  while (stk.empty() == false) {
    cur = stk.top();
    stk.pop();
    if (cur->GetDataType() == kDataVarDefine || isDefine(cur->GetDataFlag())) {
      return true;
    }
    if (cur->right_child) stk.push(cur->right_child);
    if (cur->left_child) stk.push(cur->left_child);
  }
  return res;
}

void ScopeTree::BuildSymbolTables(IRPtr &root) { create_symbol_table(root); }

bool ScopeTree::create_symbol_table(IRPtr root) {
  static unsigned recursive_counter = 0;
  std::queue<IRPtr> q;
  map<IRPtr *, IRPtr> m_save;
  int node_count = 0;
  q.push(root);
  // split_to_basic_unit(root, q, m_save);

  recursive_counter++;
  if (real_type_system_->IsInternalObjectSetup() == false) {
    // limit the number and the length of statements.s
    if (q.size() > 15) {
      // connect_back(m_save);
      recursive_counter--;
      return false;
    }
  }

  while (!q.empty()) {
    auto cur = q.front();
    if (recursive_counter == 1) {
      int tmp_count = GetChildNum(cur);
      node_count += tmp_count;
      if ((tmp_count > 250 || node_count > 1500) &&
          real_type_system_->IsInternalObjectSetup() == false) {
        // connect_back(m_save);
        recursive_counter--;
        return false;
      }
    }
    spdlog::info("[splitted] {}", cur->ToString());
    if (is_contain_definition(cur)) {
      collect_definition(cur);
    }
    q.pop();
  }
  // connect_back(m_save);
  recursive_counter--;
  return true;
}

bool ScopeTree::collect_definition(IRPtr cur) {
  bool res = false;
  if (cur->GetDataType() == kDataVarDefine) {
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
    if (cur->left_child) res = collect_definition(cur->left_child) && res;
    if (cur->right_child) res = collect_definition(cur->right_child) && res;
  }

  return res;
}

DataType ScopeTree::find_define_type(IRPtr cur) {
  if (cur->GetDataType() == kDataVarType ||
      cur->GetDataType() == kDataClassType ||
      cur->GetDataType() == kDataFunctionType)
    return cur->GetDataType();

  if (cur->left_child) {
    auto res = find_define_type(cur->left_child);
    if (res != kDataWhatever) return res;
  }

  if (cur->right_child) {
    auto res = find_define_type(cur->right_child);
    if (res != kDataWhatever) return res;
  }

  return kDataWhatever;
}

IRPtr search_by_data_type(IRPtr cur, DataType type,
                          DataType forbit_type = kDataWhatever) {
  if (cur->GetDataType() == type) {
    return cur;
  } else if (forbit_type != kDataWhatever &&
             cur->GetDataType() == forbit_type) {
    return nullptr;
  } else {
    if (cur->left_child) {
      auto res = search_by_data_type(cur->left_child, type, forbit_type);
      if (res != nullptr) return res;
    }
    if (cur->right_child) {
      auto res = search_by_data_type(cur->right_child, type, forbit_type);
      if (res != nullptr) return res;
    }
  }
  return nullptr;
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

void ScopeTree::collect_simple_variable_defintion_wt(IRPtr cur) {
  spdlog::info("Collecting: {}", cur->ToString());

  auto var_scope = search_by_data_type(cur, kDataVarScope);
  ScopeType scope_type = kScopeGlobal;

  // handle specill
  if (var_scope) {
    string str = var_scope->ToString();
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

  auto cur_scope = GetScopeById(cur->GetScopeID());
  for (auto i = 0; i < name_vec.size(); i++) {
    auto name_ir = name_vec[i];
    spdlog::info("Adding name: {}", name_ir->ToString());
    auto type = type_vec[i];

    spdlog::info("Scope: {}", scope_type);
    spdlog::info("name_ir id: {}", name_ir->GetStatementID());
    if (DBG)
      spdlog::info("Type: {}", real_type_system_->get_type_name_by_id(type));
    if (cur_scope->scope_type_ == kScopeClass) {
      if (DBG) {
        spdlog::info("Adding in class: {}", name_ir->ToString());
      }
      cur_scope->add_definition(type, name_ir->ToString(),
                                name_ir->GetStatementID(), kScopeStatement);
    } else {
      cur_scope->add_definition(type, name_ir->ToString(),
                                name_ir->GetStatementID(), scope_type);
    }
  }
}

std::optional<SymbolTable> ScopeTree::collect_simple_variable_defintion(
    IRPtr cur) {
  string var_type;

  vector<IRPtr> ir_vec;

  search_by_data_type(cur, kDataVarType, ir_vec);

  if (!ir_vec.empty()) {
    for (auto ir : ir_vec) {
      if (ir->op == nullptr || ir->op->prefix.empty()) {
        auto tmpp = ir->ToString();
        var_type += tmpp.substr(0, tmpp.size() - 1);
      } else {
        var_type += ir->op->prefix;
      }
      var_type += " ";
    }
    var_type = var_type.substr(0, var_type.size() - 1);
  }

  int type = real_type_system_->get_type_id_by_string(var_type);

  if (type == NOTEXIST) {
    // ifdef SOLIDITYFUZZ
    type = ANYTYPE;
    //#else
    //  return std::nullopt;
    //#endif
  }

  spdlog::debug("Variable type: {}, typeid: {}", var_type, type);
  auto cur_scope = GetScopeById(cur->GetScopeID());

  ir_vec.clear();

  search_by_data_type(cur, kDataDeclarator, ir_vec);
  if (ir_vec.empty()) return std::nullopt;

  SymbolTable res;
  res.SetScopeId(cur->GetScopeID());
  for (auto ir : ir_vec) {
    spdlog::debug("var: {}", ir->ToString());
    auto name_ir = search_by_data_type(ir, kDataVarName);
    auto new_type = type;
    vector<IRPtr> tmp_vec;
    search_by_data_type(ir, kDataPointer, tmp_vec, kDataWhatever, true);

    if (!tmp_vec.empty()) {
      spdlog::debug("This is a pointer definition");
      spdlog::debug("Pointer level {}", tmp_vec.size());
      new_type = real_type_system_->generate_pointer_type(type, tmp_vec.size());
    } else {
      spdlog::debug("This is not a pointer definition");
      // handle other
    }
    if (name_ir == nullptr || cur_scope == nullptr) return res;
    cur_scope->add_definition(new_type, name_ir->GetString(),
                              name_ir->GetStatementID());
    res.AddDefinition(new_type, name_ir->GetString(),
                      name_ir->GetStatementID());
  }
  return res;
}

void ScopeTree::collect_structure_definition_wt(IRPtr cur, IRPtr root) {
  auto cur_scope = GetScopeById(cur->GetScopeID());

  if (isDefine(cur->GetDataFlag())) {
    vector<IRPtr> structure_name, strucutre_variable_name, structure_body;

    search_by_data_type(cur, kDataClassName, structure_name);
    auto struct_body = search_by_data_type(cur, kDataStructBody);
    if (struct_body == nullptr) return;
    shared_ptr<CompoundType> new_compound;
    string current_compound_name;
    if (structure_name.size() > 0) {
      spdlog::info("not anonymous {}", structure_name[0]->GetString());
      // not anonymous
      new_compound = real_type_system_->make_compound_type_by_scope(
          GetScopeById(struct_body->GetScopeID()),
          structure_name[0]->GetString());
      current_compound_name = structure_name[0]->GetString();
    } else {
      spdlog::info("anonymous");
      // anonymous structure
      static int anonymous_idx = 1;
      string compound_name = string("ano") + std::to_string(anonymous_idx++);
      new_compound = real_type_system_->make_compound_type_by_scope(
          GetScopeById(struct_body->GetScopeID()), compound_name);
      current_compound_name = compound_name;
    }
    spdlog::info("{}", struct_body->ToString());
    real_type_system_->SetInClass(true);
    create_symbol_table(struct_body);
    real_type_system_->SetInClass(false);
    auto compound_id = new_compound->type_id_;
    new_compound = real_type_system_->make_compound_type_by_scope(
        GetScopeById(struct_body->GetScopeID()), current_compound_name);
  } else {
    if (cur->left_child) collect_structure_definition_wt(cur->left_child, root);
    if (cur->right_child)
      collect_structure_definition_wt(cur->right_child, root);
  }
}

void ScopeTree::collect_structure_definition(IRPtr cur, IRPtr root) {
  if (cur->GetDataType() == kDataClassType) {
    spdlog::debug("to_string: {}", cur->ToString());
    spdlog::debug("[collect_structure_definition] data_type_ = kDataClassType");
    auto cur_scope = GetScopeById(cur->GetScopeID());

    if (isDefine(cur->GetDataFlag())) {  // with structure define
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
        new_compound = real_type_system_->make_compound_type_by_scope(
            GetScopeById(struct_body->GetScopeID()),
            structure_name[0]->GetString());
        current_compound_name = structure_name[0]->GetString();
      } else {
        if (DBG) cout << "anonymous" << endl;
        // anonymous structure
        static int anonymous_idx = 1;
        string compound_name = string("ano") + std::to_string(anonymous_idx++);
        new_compound = real_type_system_->make_compound_type_by_scope(
            GetScopeById(struct_body->GetScopeID()), compound_name);
        current_compound_name = compound_name;
      }
      create_symbol_table(struct_body);
      auto compound_id = new_compound->type_id_;
      new_compound = real_type_system_->make_compound_type_by_scope(
          GetScopeById(struct_body->GetScopeID()), current_compound_name);

      // get all class variable define unit by finding kDataDeclarator.
      vector<IRPtr> strucutre_variable_unit;
      vector<IRPtr> structure_pointer_var;
      search_by_data_type(root, kDataDeclarator, strucutre_variable_unit,
                          kDataStructBody);
      if (DBG) cout << strucutre_variable_unit.size() << endl;
      if (DBG) cout << root->ToString() << endl;
      // if (DBG) cout << frontend_->GetIRTypeStr(root->type) << endl;

      // for each class variable define unit, collect all kDataPointer.
      // it will be the reference level, if empty, it is not a pointer
      for (auto var_define_unit : strucutre_variable_unit) {
        search_by_data_type(var_define_unit, kDataPointer,
                            structure_pointer_var, kDataWhatever, true);
        auto var_name = search_by_data_type(var_define_unit, kDataVarName);
        assert(var_name);
        if (structure_pointer_var.size() == 0) {  // not a pointer
          cur_scope->add_definition(compound_id, var_name->GetString(),
                                    var_name->GetStatementID());
          if (DBG)
            cout << "[struct]not a pointer, name: " << var_name->GetString()
                 << endl;
        } else {
          auto new_type = real_type_system_->generate_pointer_type(
              compound_id, structure_pointer_var.size());
          cur_scope->add_definition(new_type, var_name->GetString(),
                                    var_name->GetStatementID());
          if (DBG)
            cout << "[struct]a pointer in level "
                 << structure_pointer_var.size()
                 << ", name: " << var_name->GetString() << endl;
        }
        structure_pointer_var.clear();
      }
    } else if (isUse(cur->GetDataFlag())) {  // only strucutre variable define
      if (DBG) cout << "data_flag = Use" << endl;
      vector<IRPtr> structure_name, strucutre_variable_name;
      search_by_data_type(cur, kDataClassName, structure_name);
      // search_by_data_type(root, kDataVarName, strucutre_variable_name,
      // kDataStructBody);

      assert(structure_name.size());
      auto compound_id = real_type_system_->get_type_id_by_string(
          structure_name[0]->GetString());
      if (DBG) {
        cout << structure_name[0]->GetString() << endl;
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
      if (DBG) cout << root->ToString() << endl;
      // if (DBG) cout << frontend_->GetIRTypeStr(root->type) << endl;

      // for each class variable define unit, collect all kDataPointer.
      // it will be the reference level, if empty, it is not a pointer
      for (auto var_define_unit : strucutre_variable_unit) {
        search_by_data_type(var_define_unit, kDataPointer,
                            structure_pointer_var, kDataWhatever, true);
        auto var_name = search_by_data_type(var_define_unit, kDataVarName);
        assert(var_name);
        if (structure_pointer_var.size() == 0) {  // not a pointer
          cur_scope->add_definition(compound_id, var_name->GetString(),
                                    var_name->GetStatementID());
          spdlog::debug("[struct]not a pointer, name: {}",
                        var_name->GetString());
        } else {
          auto new_type = real_type_system_->generate_pointer_type(
              compound_id, structure_pointer_var.size());
          cur_scope->add_definition(new_type, var_name->GetString(),
                                    var_name->GetStatementID());
          spdlog::debug("[struct]a pointer in level {}, name: {}",
                        structure_pointer_var.size(), var_name->GetString());
        }
      }
      structure_pointer_var.clear();
    }
  } else {
    if (cur->left_child) collect_structure_definition(cur->left_child, root);
    if (cur->right_child) collect_structure_definition(cur->right_child, root);
  }
}

void ScopeTree::collect_function_definition_wt(IRPtr cur) {
  spdlog::info("Collecting {}", cur->ToString());
  auto function_name_ir = search_by_data_type(cur, kDataFunctionName);
  auto function_args_ir = search_by_data_type(cur, kDataFunctionArg);
  // assert(function_name_ir || function_args_ir);

  string function_name;
  if (function_name_ir) {
    function_name = function_name_ir->ToString();
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
      arg_names.push_back(i->ToString());
      spdlog::info("Arg: {}", i->ToString());
      arg_types.push_back(ANYTYPE);
    }
    // assert(num_function_args == 3);
  }

  auto cur_scope = GetScopeById(cur->GetScopeID());
  if (function_name.empty())
    function_name = "Anoynmous" + to_string(cur->GetStatementID());
  auto function_type =
      real_type_system_->make_function_type(function_name, ANYTYPE, arg_types);
  if (DBG) {
    spdlog::info("Collecing function name: {}", function_name);
  }

  cur_scope->add_definition(function_type->type_id_, function_name,
                            function_name_ir == nullptr
                                ? cur->GetStatementID()
                                : function_name_ir->GetStatementID());
  // cout << "Scope is global?: " << (cur_scope->scope_type_ == kScopeGlobal) <<
  // endl; cout << "Scope ID: " << (cur_scope->scope_id_) << endl;

  auto function_body_ir = search_by_data_type(cur, kDataFunctionBody);
  if (function_body_ir) {
    cur_scope = GetScopeById(function_body_ir->GetScopeID());
    for (auto i = 0; i < num_function_args; i++) {
      cur_scope->add_definition(ANYTYPE, arg_names[i],
                                args[i]->GetStatementID());
    }
    if (DBG)
      spdlog::info("Recursive on function body: {}",
                   function_body_ir->ToString());
    create_symbol_table(function_body_ir);
  }
}

void ScopeTree::collect_function_definition(IRPtr cur) {
  auto return_value_type_ir =
      search_by_data_type(cur, kDataFunctionReturnValue, kDataFunctionBody);
  auto function_name_ir =
      search_by_data_type(cur, kDataFunctionName, kDataFunctionBody);
  auto function_arg_ir =
      search_by_data_type(cur, kDataFunctionArg, kDataFunctionBody);

  string function_name_str;
  if (function_name_ir) {
    function_name_str = function_name_ir->ToString();
    strip_string(function_name_str);
  }

#ifdef SOLIDITYFUZZ
  TYPEID return_type = ANYTYPE;
#else
  TYPEID return_type = NOTEXIST;
#endif
  string return_value_type_str;
  if (return_value_type_ir) {
    return_value_type_str = return_value_type_ir->ToString();
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
    return_type =
        real_type_system_->get_type_id_by_string(return_value_type_str);
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
    // split_to_basic_unit(function_arg_ir, q, m_save, ss);

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
        if (ir->op == nullptr || ir->op->prefix.empty()) {
          auto tmpp = ir->ToString();
          var_type += tmpp.substr(0, tmpp.size() - 1);
        } else {
          var_type += ir->op->prefix;
        }
        var_type += " ";
      }
      var_type = var_type.substr(0, var_type.size() - 1);
      var_name = ir_vec_name[0]->ToString();
      auto idx = ir_vec_name[0]->GetStatementID();
      if (DBG) cout << "Type string: " << var_type << endl;
      if (DBG) cout << "Arg name: " << var_name << endl;
      if (!var_type.empty()) {
        int type = real_type_system_->get_basic_type_id_by_string(var_type);
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

    // connect_back(m_save);
  }
  if (DBG) cout << "Function name: " << function_name_str << endl;
  if (DBG)
    cout << "return value type: " << return_value_type_str
         << "id:" << return_type << endl;
  if (DBG) cout << "Args type: " << endl;
  for (auto i : arg_types) {
    if (DBG) cout << "typeid" << endl;
    if (DBG)
      cout << real_type_system_->get_type_by_type_id(i)->type_name_ << endl;
  }

  auto cur_scope = GetScopeById(cur->GetScopeID());
  if (return_type) {
    auto function_ptr = real_type_system_->make_function_type(
        function_name_str, return_type, arg_types);
    if (function_ptr == nullptr || function_name_ir == nullptr) return;
    // if(DBG) cout << cur_scope << ", " << function_ptr << endl;
    cur_scope->add_definition(function_ptr->type_id_, function_ptr->type_name_,
                              function_name_ir->GetStatementID());
  }

  auto function_body = search_by_data_type(cur, kDataFunctionBody);
  if (function_body) {
    cur_scope = GetScopeById(function_body->GetScopeID());
    for (auto i = 0; i < arg_types.size(); i++) {
      cur_scope->add_definition(arg_types[i], arg_names[i], arg_ids[i]);
    }
    create_symbol_table(function_body);
  }
}
}  // namespace polyglot
