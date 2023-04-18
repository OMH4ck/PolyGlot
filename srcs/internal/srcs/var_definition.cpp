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

#include "var_definition.h"

#include <fmt/format.h>

#include <optional>
#include <queue>
#include <stack>

#include "config_misc.h"
#include "gsl/assert"
#include "ir.h"
#include "spdlog/spdlog.h"
#include "typesystem.h"

using namespace std;
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

bool TypeSystem::is_internal_obj_setup = true;
map<string, shared_ptr<VarType>> TypeSystem::basic_types;
set<TypeID> TypeSystem::basic_types_set;

bool TypeSystem::IsBuiltinType(TypeID type_id) {
  return internal_type_map.count(type_id) > 0;
}

void SymbolTable::AddDefinition(Definition def) {
  // TODO: Check if the definition is already in the table
  m_table_[def.type].push_back(def);
}

void SymbolTable::AddDefinition(const string &name, TypeID type,
                                StatementID order) {
  Definition def;
  def.type = type;
  def.name = name;
  def.statement_id = order;
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

const map<TypeID, vector<string>> &TypeSystem::GetBuiltinSimpleVarTypes()
    const {
  static map<TypeID, vector<string>> res;
  if (res.size() > 0) return res;

  // TODO: Initialize the map.
  return res;
}
const map<TypeID, vector<string>> &TypeSystem::GetBuiltinCompoundTypes() const {
  static map<TypeID, vector<string>> res;
  if (res.size() > 0) return res;

  // TODO: Initialize the map.
  /*
  for (auto type_id : all_internal_compound_types) {
    auto ptype = internal_type_map[type_id];
    res[type_id].push_back(ptype->type_name_);
  }
  */

  return res;
}

const map<TypeID, vector<string>> &TypeSystem::GetBuiltinFunctionTypes() const {
  // TODO: Initialize the map.
  static map<TypeID, vector<string>> res;
  if (res.size() > 0) return res;

  /*
  for (auto type_id : all_internal_functions) {
    auto ptype = internal_type_map[type_id];
    res[type_id].push_back(ptype->type_name_);
  }
  */

  return res;
}

TypeID VarType::get_type_id() const { return type_id_; }

// shared_ptr<Scope> get_scope_root() { return g_scope_root; }

void TypeSystem::init_convert_chain() {
  // init instance for SpecialType::kAllTypes, ALLCLASS,
  // SpecialType::kAllFunction ...

  /*
  static vector<pair<string, string>> v_convert;
  static bool has_init = false;

  if (!has_init) {
    __SEMANTIC_CONVERT_CHAIN__
    has_init = true;
  }
  */

  for (auto &rule : gen::Configuration::GetInstance().GetConvertChain()) {
    auto base_var = GetTypePtrByID(GetBasicTypeIDByStr(rule.second));
    auto derived_var = GetTypePtrByID(GetBasicTypeIDByStr(rule.first));
    if (base_var != nullptr && derived_var != nullptr) {
      derived_var->base_type_.push_back(base_var);
      base_var->derived_type_.push_back(derived_var);
    } else {
      assert(0);
    }
  }
}

bool TypeSystem::CanDeriveFrom(TypeID dtype, TypeID btype) {
  auto derived_type = GetTypePtrByID(dtype);
  auto base_type = GetTypePtrByID(btype);

  if (base_type == derived_type) return true;
  // if(derived_type == nullptr || base_type == nullptr) return false;
  assert(derived_type && base_type);

  bool res = false;
  // if(DBG) cout << derived_type << endl;
  for (auto &t : derived_type->base_type_) {
    assert(t->type_id_ != dtype);
    res = res || CanDeriveFrom(t->type_id_, btype);
  }

  return res;
}

TypeSystem::TypeSystem() {
  init_basic_types();
  init_convert_chain();
}

void TypeSystem::init_basic_types() {
  for (auto &line : gen::Configuration::GetInstance().GetBasicTypeStr()) {
    if (line.empty()) continue;
    auto new_id = gen_type_id();
    auto ptr = make_shared<VarType>();
    ptr->type_id_ = new_id;
    ptr->name = line;
    basic_types[line] = ptr;
    basic_types_set.insert(new_id);
    type_map[new_id] = ptr;
    SPDLOG_INFO("Basic types: {}, type id: {}", line, new_id);
  }

  make_basic_type_add_map(SpecialType::kAllTypes, "SpecialType::kAllTypes");
  make_basic_type_add_map(SpecialType::kAllCompoundType,
                          "SpecialType::kAllCompoundType");
  make_basic_type_add_map(SpecialType::kAllFunction,
                          "SpecialType::kAllFunction");
  make_basic_type_add_map(SpecialType::kAnyType, "SpecialType::kAnyType");
  basic_types["SpecialType::kAllTypes"] =
      GetTypePtrByID(SpecialType::kAllTypes);
  basic_types["SpecialType::kAllCompoundType"] =
      GetTypePtrByID(SpecialType::kAllCompoundType);
  basic_types["SpecialType::kAllFunction"] =
      GetTypePtrByID(SpecialType::kAllFunction);
  basic_types["SpecialType::kAnyType"] = GetTypePtrByID(SpecialType::kAnyType);
}

int TypeSystem::gen_type_id() {
  static int id = 10;
  return id++;
}

void TypeSystem::init_internal_type() {
  for (auto i : all_internal_functions) {
    auto ptr = GetFunctionType(i);
    // TODO: Fix this.
    // g_scope_root->AddDefinition(ptr->type_id_, ptr->type_name_, 0);
  }

  /*
      for(auto i: all_internal_class_methods){
          auto ptr = get_function_type_by_type_id(i);
          g_scope_root->AddDefinition(ptr->type_id_, ptr->type_name_, 0);
      }
  */
}

/*
void RealTypeSystem::clear_type_map() {
  // clear type_map
  // copy basic type back to type_map
  pointer_map.clear();
  type_map.clear();
  all_compound_types_.clear();

  // make_basic_type_add_map(SpecialType::kAllTypes, "SpecialType::kAllTypes");
  // make_basic_type_add_map(SpecialType::kAllCompoundType,
  // "SpecialType::kAllCompoundType");
  // make_basic_type_add_map(SpecialType::kAllFunction,
  // "SpecialType::kAllFunction");
  // make_basic_type_add_map(SpecialType::kAnyType, "SpecialType::kAnyType");

  for (auto &i : basic_types) {
    i.second->base_type_.clear();
    i.second->derived_type_.clear();
    type_map[i.second->get_type_id()] = i.second;
  }

  init_convert_chain();
  // make_basic_type_add_map(SpecialType::kAllUpperBound,
  // "SpecialType::kAllUpperBound");
}
*/

/*
shared_ptr<Scope> get_scope_by_id(int scope_id) {
  assert(scope_id_map.find(scope_id) != scope_id_map.end());
  return scope_id_map[scope_id];
}
*/

shared_ptr<VarType> TypeSystem::GetTypePtrByID(TypeID type_id) {
  if (type_map.find(type_id) != type_map.end()) return type_map[type_id];

  if (internal_type_map.find(type_id) != internal_type_map.end())
    return internal_type_map[type_id];

  return nullptr;
}

shared_ptr<CompoundType> TypeSystem::GetCompoundType(TypeID type_id) {
  if (type_map.find(type_id) != type_map.end())
    return static_pointer_cast<CompoundType>(type_map[type_id]);
  if (internal_type_map.find(type_id) != internal_type_map.end())
    return static_pointer_cast<CompoundType>(internal_type_map[type_id]);

  return nullptr;
}

shared_ptr<FunctionType> TypeSystem::GetFunctionType(TypeID type_id) {
  if (type_map.find(type_id) != type_map.end())
    return static_pointer_cast<FunctionType>(type_map[type_id]);
  if (internal_type_map.find(type_id) != internal_type_map.end())
    return static_pointer_cast<FunctionType>(internal_type_map[type_id]);

  return nullptr;
}

bool TypeSystem::IsCompoundType(TypeID type_id) {
  return all_compound_types_.find(type_id) != all_compound_types_.end() ||
         all_internal_compound_types.find(type_id) !=
             all_internal_compound_types.end();
}

TypeID TypeSystem::get_compound_type_id_by_string(const string &s) {
  for (auto k : all_compound_types_) {
    if (type_map[k]->name == s) return k;
  }

  for (auto k : all_internal_compound_types) {
    if (internal_type_map[k]->name == s) return k;
  }

  return SpecialType::kNotExist;
}

bool TypeSystem::IsFunctionType(TypeID type_id) {
  return all_functions.find(type_id) != all_functions.end() ||
         all_internal_functions.find(type_id) != all_internal_functions.end() ||
         all_internal_class_methods.find(type_id) !=
             all_internal_class_methods.end();
}

bool TypeSystem::IsBasicType(TypeID type_id) {
  return basic_types_set.find(type_id) != basic_types_set.end();
}

bool TypeSystem::is_basic_type(const string &s) {
  return basic_types.find(s) != basic_types.end();
}

TypeID TypeSystem::GetBasicTypeIDByStr(const string &s) {
  if (s == "ALLTYPES") return SpecialType::kAllTypes;
  if (s == "ALLCOMPOUNDTYPE") return SpecialType::kAllCompoundType;
  if (s == "ALLFUNCTION") return SpecialType::kAllFunction;
  if (s == "ANYTYPE") return SpecialType::kAnyType;
  if (is_basic_type(s) == false) return SpecialType::kNotExist;
  return basic_types[s]->get_type_id();
}

TypeID TypeSystem::GetTypeIDByStr(const string &s) {
  for (auto iter : type_map) {
    if (iter.second->name == s) return iter.first;
  }

  for (auto iter : internal_type_map) {
    if (iter.second->name == s) return iter.first;
  }
  return SpecialType::kNotExist;
}

void TypeSystem::make_basic_type_add_map(TypeID id, const string &s) {
  auto res = make_basic_type(id, s);
  type_map[id] = res;
  if (id == SpecialType::kAllCompoundType) {
    for (auto internal_compound : all_internal_compound_types) {
      auto compound_ptr = GetTypePtrByID(internal_compound);
      res->derived_type_.push_back(compound_ptr);
    }
  } else if (id == SpecialType::kAllFunction) {
    // handler function here
    for (auto internal_func : all_internal_functions) {
      auto func_ptr = GetTypePtrByID(internal_func);
      res->derived_type_.push_back(func_ptr);
    }
  } else if (id == SpecialType::kAnyType) {
    for (auto &type : internal_type_map) {
      res->derived_type_.push_back(type.second);
    }
  }
}

shared_ptr<VarType> TypeSystem::make_basic_type(TypeID id, const string &s) {
  auto res = make_shared<VarType>();
  res->type_id_ = id;
  res->name = s;

  return res;
}

set<int> TypeSystem::get_all_types_from_compound_type(int compound_type,
                                                      set<int> &visit) {
  set<int> res;
  if (visit.find(compound_type) != visit.end()) return res;
  visit.insert(compound_type);

  auto compound_ptr = GetCompoundType(compound_type);
  for (auto member : compound_ptr->v_members_) {
    auto member_type = member.first;
    if (IsCompoundType(member_type)) {
      auto sub_structure_res =
          get_all_types_from_compound_type(member_type, visit);
      res.insert(sub_structure_res.begin(), sub_structure_res.end());
      res.insert(member_type);
    } else if (IsFunctionType(member_type)) {
      // assert(0);
      if (gen::Configuration::GetInstance().IsWeakType()) {
        auto pfunc = GetFunctionType(member_type);
        res.insert(pfunc->return_type_);
        res.insert(member_type);
      }
    } else if (IsBasicType(member_type)) {
      res.insert(member_type);
    } else {
      if (gen::Configuration::GetInstance().IsWeakType()) {
        res.insert(member_type);
      }
    }
  }

  return res;
}

/*
shared_ptr<CompoundType> TypeSystem::CreateCompoundTypeAtScope(
    shared_ptr<Scope> scope, std::string structure_name) {
  shared_ptr<CompoundType> res = nullptr;

  auto tid = get_compound_type_id_by_string(structure_name);
  if (tid != SpecialType::kNotExist) res = GetCompoundType(tid);
  if (res == nullptr) {
    res = make_shared<CompoundType>();
    res->type_id_ = gen_type_id();
    res->name = structure_name;
    if (is_internal_obj_setup == true) {
      all_internal_compound_types.insert(res->type_id_);
      internal_type_map[res->type_id_] = res;
      auto all_compound_type = GetTypePtrByID(SpecialType::kAllCompoundType);
      assert(all_compound_type);
      all_compound_type->derived_type_.push_back(res);
      res->base_type_.push_back(all_compound_type);
    } else {
      all_compound_types_.insert(res->type_id_);  // here
      type_map[res->type_id_] = res;              // here
      auto all_compound_type = GetTypePtrByID(SpecialType::kAllCompoundType);
      assert(all_compound_type);
      all_compound_type->derived_type_.push_back(res);
      res->base_type_.push_back(all_compound_type);
    }
    if (structure_name.size()) {
      vector<TypeID> tmp;
      // auto pfunc = CreateFunctionType(structure_name, res->type_id_, tmp);
      // TODO: Fix this.
      /
      if (DBG)
        cout << "add definition: " << pfunc->type_id_ << ", " << structure_name
             << " to scope " << g_scope_root->scope_id_ << endl;
      g_scope_root->AddDefinition(pfunc->type_id_, structure_name, 0);
      /
    }
  }

  // res->define_root_ = scope->v_ir_set_.back();
  if (DBG)
    cout << "FUCK me in make compound typeid:" << res->type_id_
         << " Scope id:" << scope->GetScopeID() << endl;

  for (auto &defined_var : scope->GetSymbolTable().GetTable()) {
    auto &var_type = defined_var.first;
    auto &var_names = defined_var.second;
    for (auto &var : var_names) {
      auto &var_name = var.name;
      res->v_members_[var_type].push_back(var_name);
      if (DBG)
        cout << "[struct member] add member: " << var_name
             << " type: " << var_type << " to structure " << res->name << endl;
    }
  }

  return res;
}
*/

shared_ptr<FunctionType> TypeSystem::CreateFunctionType(
    string &function_name, TypeID return_type, vector<TypeID> &args,
    std::vector<std::string> &arg_names) {
  auto res = make_shared<FunctionType>();
  res->type_id_ = gen_type_id();
  res->name = function_name;
  res->v_arg_names_ = arg_names;

  res->return_type_ = return_type;
  res->v_arg_types_ = args;
  if (is_internal_obj_setup == true) {
    internal_type_map[res->type_id_] = res;
    if (!is_in_class)
      all_internal_functions.insert(res->type_id_);
    else
      all_internal_class_methods.insert(res->type_id_);
    auto all_function_type = GetTypePtrByID(SpecialType::kAllFunction);
    all_function_type->derived_type_.push_back(res);
    res->base_type_.push_back(all_function_type);
  } else {
    type_map[res->type_id_] = res;        // here
    all_functions.insert(res->type_id_);  // here
    auto all_function_type = GetTypePtrByID(SpecialType::kAllFunction);
    all_function_type->derived_type_.push_back(res);
    res->base_type_.push_back(all_function_type);
  }

  return res;
}

void Scope::AddDefinition(const string &var_name, TypeID type,
                          unsigned long id) {
  if (type == SpecialType::kNotExist) return;
  symbol_table_.AddDefinition({var_name, type, id});
}

void Scope::AddDefinition(const string &var_name, TypeID type, unsigned long id,
                          ScopeType stype) {
  if (type == SpecialType::kNotExist) return;

  if (gen::Configuration::GetInstance().IsWeakType()) {
    if (stype != kScopeStatement) {
      auto p = this;
      while (p != nullptr && p->scope_type_ != stype) p = p->GetParent().get();
      if (p == nullptr) p = this;
      if (p->s_defined_variable_names_.find(var_name) !=
          p->s_defined_variable_names_.end())
        return;

      p->s_defined_variable_names_.insert(var_name);
      p->AddDefinition(var_name, type, id);

      return;
    } else {
      symbol_table_.AddDefinition({var_name, type, id});
      return;
    }
  }

  symbol_table_.AddDefinition({var_name, type, id});
}

TypeID TypeSystem::GetLeastUpperCommonType(TypeID type1, TypeID type2) {
  if (type1 == type2) {
    return type1;
  }

  if (CanDeriveFrom(type1, type2))
    return type2;
  else if (CanDeriveFrom(type2, type1))
    return type1;
  return SpecialType::kNotExist;
}

/*
TypeID RealTypeSystem::convert_to_real_type_id(TypeID type1, TypeID type2) {
  if (type1 > SpecialType::kAllUpperBound) {
    return type1;
  }

  switch (type1) {
    case SpecialType::kAllTypes: {
      if (type2 == SpecialType::kAllTypes || type2 == SpecialType::kNotExist) {
        / FIX ME
        if(DBG) cout << "Map size: " << type_map.size() << endl;
        auto pick_ptr = random_pick(type_map);
        return pick_ptr->first;
        /
        auto pick_ptr = random_pick(basic_types_set);
        return *pick_ptr;
      } else if (type2 == SpecialType::kAllCompoundType) {
        if (all_compound_types_.empty()) {
          if (DBG) cout << "empty me" << endl;
          break;
        }
        auto res = random_pick(all_compound_types_);
        return *res;
      } else if (IsBasicType(type2)) {
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
    case SpecialType::kAllFunction: {
      auto res = *random_pick(all_functions);
      return res;
    }

    case SpecialType::kAllCompoundType: {
      if (type2 == SpecialType::kAllTypes ||
          type2 == SpecialType::kAllCompoundType || IsBasicType(type2) ||
          type2 == SpecialType::kNotExist) {
        if (all_compound_types_.empty()) {
          if (DBG) cout << "empty me" << endl;
          break;
        }
        auto res = random_pick(all_compound_types_);
        return *res;
      } else {
        assert(IsCompoundType(type2));
        auto parent_type_ptr =
            static_pointer_cast<CompoundType>(type_map[type2]);
        if (parent_type_ptr->v_members_.empty()) {
          break;
        }

        int counter = 0;
        TypeID res = SpecialType::kNotExist;
        for (auto &iter : parent_type_ptr->v_members_) {
          if (IsCompoundType(iter.first)) {
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
  return SpecialType::kNotExist;
}
*/

string CompoundType::get_member_by_type(TypeID type) {
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
    new_scope->SetParent(g_scope_current_);
    if (DBG) cout << "use g_scope_current: " << g_scope_current_ << endl;
    g_scope_current_->AddChild(new_scope);
    g_scope_current_ = new_scope;
    if (DBG)
      cout << "[enter]change g_scope_current: " << g_scope_current_ << endl;
  }
  if (DBG) cout << "Entering new scope: " << g_scope_id_counter_ << endl;
}

void ScopeTree::ExitScope() {
  // if (get_scope_translation_flag() == false) return;
  if (DBG) cout << "Exit scope: " << g_scope_current_->GetScopeID() << endl;
  g_scope_current_ = g_scope_current_->GetParent();
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
  if (root->HasLeftChild()) {
    BuildScopeTreeImpl(root->LeftChild(), scope_tree);
  }
  if (root->HasRightChild()) {
    BuildScopeTreeImpl(root->RightChild(), scope_tree);
  }
  if (root->GetScopeType() != kScopeDefault) {
    scope_tree.ExitScope();
  }
}

std::shared_ptr<ScopeTree> ScopeTree::BuildTree(IRPtr root) {
  auto scope_tree = std::make_shared<ScopeTree>();
  BuildScopeTreeImpl(root, *scope_tree);
  return scope_tree;
}

int TypeSystem::GeneratePointerType(int original_type, int pointer_level) {
  // must be a positive level
  assert(pointer_level);
  if (pointer_map[original_type].count(pointer_level))
    return pointer_map[original_type][pointer_level];

  auto cur_type = make_shared<PointerType>();
  cur_type->type_id_ = gen_type_id();
  cur_type->name = "pointer_typeid_" + std::to_string(cur_type->type_id_);

  int base_type = -1;
  if (pointer_level == 1)
    base_type = original_type;
  else
    base_type = GeneratePointerType(original_type, pointer_level - 1);

  cur_type->orig_type_ = base_type;
  cur_type->reference_level_ = pointer_level;
  cur_type->basic_type_ = original_type;

  auto alltype_ptr =
      GetTypePtrByID(GetBasicTypeIDByStr("SpecialType::kAllTypes"));
  cur_type->base_type_.push_back(alltype_ptr);
  alltype_ptr->derived_type_.push_back(cur_type);

  type_map[cur_type->type_id_] = cur_type;
  pointer_map[original_type][pointer_level] = cur_type->type_id_;
  debug_pointer_type(cur_type);
  return cur_type->type_id_;
}

int TypeSystem::GetOrCreatePointerType(int type) {
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
    cur_type->name = "pointer_typeid_" + std::to_string(cur_type->type_id_);
    cur_type->orig_type_ = type;
    cur_type->reference_level_ = level + 1;
    cur_type->basic_type_ = orig_type;
    auto alltype_ptr =
        GetTypePtrByID(GetBasicTypeIDByStr("SpecialType::kAllTypes"));
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
    cur_type->name = "pointer_typeid_" + std::to_string(cur_type->type_id_);
    cur_type->orig_type_ = type;
    cur_type->reference_level_ = 1;
    cur_type->basic_type_ = type;
    auto alltype_ptr =
        GetTypePtrByID(GetBasicTypeIDByStr("SpecialType::kAllTypes"));
    alltype_ptr->derived_type_.push_back(cur_type);
    cur_type->base_type_.push_back(alltype_ptr);

    type_map[cur_type->type_id_] = cur_type;
    pointer_map[type][1] = cur_type->type_id_;
    res = cur_type->type_id_;
    debug_pointer_type(cur_type);
  }

  return res;
}

bool TypeSystem::IsPointerType(TypeID type) {
  if (DBG) cout << "is_pointer_type: " << type << endl;
  auto type_ptr = GetTypePtrByID(type);
  return type_ptr->is_pointer_type();
}

shared_ptr<PointerType> TypeSystem::GetPointerType(TypeID type_id) {
  if (type_map.find(type_id) == type_map.end()) return nullptr;

  auto res = static_pointer_cast<PointerType>(type_map[type_id]);
  if (res->is_pointer_type() == false) return nullptr;

  return res;
}

void TypeSystem::debug_pointer_type(shared_ptr<PointerType> &p) {
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
    DataType cur_type = cur->GetDataType();
    if (cur_type == kVariableDefinition || cur_type == kFunctionDefinition ||
        cur_type == kClassDefinition) {
      return true;
    }
    if (cur->HasRightChild()) stk.push(cur->RightChild());
    if (cur->HasLeftChild()) stk.push(cur->LeftChild());
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
  if (real_type_system_->HasBuiltinType() == false) {
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
          real_type_system_->HasBuiltinType() == false) {
        // connect_back(m_save);
        recursive_counter--;
        return false;
      }
    }
    SPDLOG_DEBUG("[splitted] {}", cur->ToString());
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
  if (cur->GetDataType() == kVariableDefinition ||
      cur->GetDataType() == kFunctionDefinition ||
      cur->GetDataType() == kClassDefinition) {
    auto define_type = find_define_type(cur);

    switch (define_type) {
      case kVariableType:
        if (DBG) cout << "kVariableType" << endl;
        CollectSimpleVariableDefinition(cur);
        return true;

      case kClassDefinition:
        if (DBG) cout << "kClassDefinition" << endl;
        CollectStructureDefinition(cur, cur);
        return true;

      case kFunctionDefinition:
        SPDLOG_INFO("function definition: {}", cur->ToString());
        CollectFunctionDefinition(cur);
        return true;
      default:
        CollectSimpleVariableDefinition(cur);
        break;
    }
  } else {
    if (cur->HasLeftChild()) res = collect_definition(cur->LeftChild()) && res;
    if (cur->HasRightChild())
      res = collect_definition(cur->RightChild()) && res;
  }

  return res;
}

DataType ScopeTree::find_define_type(IRPtr cur) {
  if (cur->GetDataType() == kVariableType ||
      cur->GetDataType() == kClassDefinition ||
      cur->GetDataType() == kFunctionDefinition)
    return cur->GetDataType();

  if (cur->HasLeftChild()) {
    auto res = find_define_type(cur->LeftChild());
    if (res != kDataDefault) return res;
  }

  if (cur->HasRightChild()) {
    auto res = find_define_type(cur->RightChild());
    if (res != kDataDefault) return res;
  }

  return kDataDefault;
}

IRPtr search_by_data_type(IRPtr cur, DataType type,
                          DataType forbit_type = kDataDefault) {
  if (cur->GetDataType() == type) {
    return cur;
  } else if (forbit_type != kDataDefault && cur->GetDataType() == forbit_type) {
    return nullptr;
  } else {
    if (cur->HasLeftChild()) {
      auto res = search_by_data_type(cur->LeftChild(), type, forbit_type);
      if (res != nullptr) return res;
    }
    if (cur->HasRightChild()) {
      auto res = search_by_data_type(cur->RightChild(), type, forbit_type);
      if (res != nullptr) return res;
    }
  }
  return nullptr;
}

void search_by_data_type(IRPtr cur, DataType type, vector<IRPtr> &result,
                         DataType forbit_type = kDataDefault,
                         bool go_inside = false) {
  if (cur->GetDataType() == type) {
    result.push_back(cur);
  } else if (forbit_type != kDataDefault && cur->GetDataType() == forbit_type) {
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

/*
ScopeType scope_js(const string &s) {
  if (s.find("var") != string::npos) return kScopeFunction;
  if (s.find("let") != string::npos || s.find("const") != string::npos)
    return kScopeStatement;
  for (int i = 0; i < 0x1000; i++) cout << s << endl;
  assert(0);
  return kScopeStatement;
}
*/

void ScopeTree::CollectSimpleVariableDefinition(IRPtr &cur) {
  SPDLOG_DEBUG("Collecting: {}", cur->ToString());

  ScopeType scope_type = kScopeGlobal;

  // handle specill
  /*
  auto var_scope = search_by_data_type(cur, kDataVarScope);
  if (var_scope) {
    string str = var_scope->ToString();
    scope_type = scope_js(str);
  }
  */

  vector<IRPtr> name_vec;
  vector<int> type_vec;
  search_by_data_type(cur, kVariableName, name_vec);
  IRPtr type_node = search_by_data_type(cur, kVariableType);
  TypeID type = SpecialType::kAnyType;
  if (type_node) {
    std::string type_str = type_node->ToString();
    Trim(type_str);
    type = real_type_system_->GetTypeIDByStr(type_str);
    if (type == SpecialType::kNotExist &&
        gen::Configuration::GetInstance().IsWeakType()) {
      type = SpecialType::kAnyType;
    }
    assert(type != SpecialType::kNotExist);
  }

  auto cur_scope = GetScopeById(cur->GetScopeID());
  for (auto i = 0; i < name_vec.size(); i++) {
    auto name_ir = name_vec[i];
    SPDLOG_DEBUG("Adding name: {}", name_ir->ToString());

    SPDLOG_DEBUG("Scope: {}", scope_type);
    SPDLOG_DEBUG("name_ir id: {}", name_ir->GetStatementID());
    cur_scope->AddDefinition(name_ir->ToString(), type,
                             name_ir->GetStatementID());
  }
}

/*
std::optional<SymbolTable> ScopeTree::collect_simple_variable_defintion(
    IRPtr cur) {
  string var_type;

  vector<IRPtr> ir_vec;

  search_by_data_type(cur, kVariableType, ir_vec);

  // Chain types like "long int"
  if (!ir_vec.empty()) {
    for (auto ir : ir_vec) {
      if (ir->OP() == nullptr || ir->OP()->prefix.empty()) {
        auto tmpp = ir->ToString();
        var_type += tmpp.substr(0, tmpp.size() - 1);
      } else {
        var_type += ir->OP()->prefix;
      }
      var_type += " ";
    }
    var_type = var_type.substr(0, var_type.size() - 1);
  }

  int type = real_type_system_->GetTypeIDByStr(var_type);

  if (type == SpecialType::kNotExist) {
    // ifdef SOLIDITYFUZZ
    type = SpecialType::kAnyType;
    // #else
    //   return std::nullopt;
    // #endif
  }

  SPDLOG_DEBUG("Variable type: {}, typeid: {}", var_type, type);
  auto cur_scope = GetScopeById(cur->GetScopeID());

  ir_vec.clear();

  search_by_data_type(cur, kDataDeclarator, ir_vec);
  if (ir_vec.empty()) return std::nullopt;

  SymbolTable res;
  for (auto ir : ir_vec) {
    SPDLOG_DEBUG("var: {}", ir->ToString());
    auto name_ir = search_by_data_type(ir, kVariableName);
    auto new_type = type;
    vector<IRPtr> tmp_vec;
    search_by_data_type(ir, kPointer, tmp_vec, kDataDefault, true);

    if (!tmp_vec.empty()) {
      SPDLOG_DEBUG("This is a pointer definition");
      SPDLOG_DEBUG("Pointer level {}", tmp_vec.size());
      new_type = real_type_system_->GeneratePointerType(type, tmp_vec.size());
    } else {
      SPDLOG_DEBUG("This is not a pointer definition");
      // handle other
    }
    if (name_ir == nullptr || cur_scope == nullptr) return res;
    cur_scope->AddDefinition(name_ir->GetString(), new_type,
                             name_ir->GetStatementID());
    res.AddDefinition(name_ir->GetString(), new_type,
                      name_ir->GetStatementID());
  }
  return res;
}
*/

/*
void ScopeTree::collect_structure_definition_wt(IRPtr cur, IRPtr root) {
  auto cur_scope = GetScopeById(cur->GetScopeID());

  if (isDefincur->GetDataFlag())) {
    vector<IRPtr> structure_name, strucutre_variable_name, structure_body;

    search_by_data_type(cur, kClassName, structure_name);
    auto struct_body = search_by_data_type(cur, kClassBody);
    if (struct_body == nullptr) return;
    shared_ptr<CompoundType> new_compound;
    string current_compound_name;
    if (structure_name.size() > 0) {
      SPDLOG_DEBUG("not anonymous {}", structure_name[0]->GetString());
      // not anonymous
      new_compound = real_type_system_->CreateCompoundTypeAtScope(
          GetScopeById(struct_body->GetScopeID()),
          structure_name[0]->GetString());
      current_compound_name = structure_name[0]->GetString();
    } else {
      SPDLOG_DEBUG("anonymous");
      // anonymous structure
      static int anonymous_idx = 1;
      string compound_name = string("ano") + std::to_string(anonymous_idx++);
      new_compound = real_type_system_->CreateCompoundTypeAtScope(
          GetScopeById(struct_body->GetScopeID()), compound_name);
      current_compound_name = compound_name;
    }
    SPDLOG_DEBUG("{}", struct_body->ToString());
    create_symbol_table(struct_body);
    // real_type_system_->SetInClass(false);
    auto compound_id = new_compound->type_id_;
    new_compound = real_type_system_->CreateCompoundTypeAtScope(
        GetScopeById(struct_body->GetScopeID()), current_compound_name);
  } else {
    if (cur->HasLeftChild())
      collect_structure_definition_wt(cur->LeftChild(), root);
    if (cur->HasRightChild())
      collect_structure_definition_wt(cur->RightChild(), root);
  }
}
*/

std::shared_ptr<CompoundType> TypeSystem::CreateCompoundType(
    std::string &structure_name, std::vector<TypeID> &members,
    std::vector<std::string> &member_names) {
  Ensures(members.size() == member_names.size());
  auto new_compound = std::make_shared<CompoundType>();
  new_compound->type_id_ = gen_type_id();
  new_compound->name = structure_name;
  for (size_t i = 0; i < members.size(); i++) {
    new_compound->v_members_[members[i]].push_back(member_names[i]);
  }
  type_map[new_compound->type_id_] = new_compound;
  all_compound_types_.insert(new_compound->type_id_);
  return new_compound;
}

void ScopeTree::CollectStructureDefinition(IRPtr &cur, IRPtr &root) {
  Ensures(cur->GetDataType() == kClassDefinition);
  SPDLOG_DEBUG("to_string: {}", cur->ToString());
  SPDLOG_DEBUG("[collect_structure_definition] data_type_ = kClassDefinition");
  auto cur_scope = GetScopeById(cur->GetScopeID());

  vector<IRPtr> structure_body;
  IRPtr stucture_name = search_by_data_type(cur, kClassName);

  auto struct_body = search_by_data_type(cur, kClassBody);
  assert(struct_body && "A structure definition should have body");

  // type_fix_framework(struct_body);
  string current_compound_name;
  if (stucture_name) {
    // not anonymous
    std::string structure_name_str = stucture_name->GetString();
    Trim(structure_name_str);
    SPDLOG_INFO("not anonymous {}", structure_name_str);
    current_compound_name = structure_name_str;
  } else {
    assert(false && "anonymous structure not supported yet");
    // TODO: Handle anonymous structure
    /*
    if (DBG) cout << "anonymous" << endl;
    // anonymous structure
    static int anonymous_idx = 1;
    string compound_name = string("ano") + std::to_string(anonymous_idx++);
    new_compound = real_type_system_->CreateCompoundTypeAtScope(
        GetScopeById(struct_body->GetScopeID()), compound_name);
    current_compound_name = compound_name;
    */
  }

  // TODO: Handle self-reference in definition
  // For example: struct A { struct A *a; };
  create_symbol_table(struct_body);
  auto scope_ptr = GetScopeById(struct_body->GetScopeID());
  std::vector<std::string> member_names;
  std::vector<TypeID> member_types;
  for (const auto &member : scope_ptr->GetSymbolTable().GetTable()) {
    for (const auto &def : member.second) {
      member_names.push_back(def.name);
      member_types.push_back(def.type);
      SPDLOG_INFO("member name: {}, type: {}", def.name, def.type);
    }
  }
  auto new_class = real_type_system_->CreateCompoundType(
      current_compound_name, member_types, member_names);
  auto current_scope = GetScopeById(cur->GetScopeID());
  current_scope->AddDefinition(current_compound_name, new_class->type_id_,
                               cur->GetStatementID());

  /*
  // get all class variable define unit by finding kDataDeclarator.
  vector<IRPtr> strucutre_variable_unit;
  vector<IRPtr> structure_pointer_var;
  search_by_data_type(root, kDataDeclarator, strucutre_variable_unit,
                      kClassBody);
  if (DBG) cout << strucutre_variable_unit.size() << endl;
  if (DBG) cout << root->ToString() << endl;
  // if (DBG) cout << frontend_->GetIRTypeStr(root->type) << endl;

  // for each class variable define unit, collect all kPointer.
  // it will be the reference level, if empty, it is not a pointer
  for (auto var_define_unit : strucutre_variable_unit) {
    search_by_data_type(var_define_unit, kPointer, structure_pointer_var,
                        kDataDefault, true);
    auto var_name = search_by_data_type(var_define_unit, kVariableName);
    assert(var_name);
    if (structure_pointer_var.size() == 0) {  // not a pointer
      cur_scope->AddDefinition(var_name->GetString(), compound_id,
                               var_name->GetStatementID());
      if (DBG)
        cout << "[struct]not a pointer, name: " << var_name->GetString()
             << endl;
    } else {
      auto new_type = real_type_system_->GeneratePointerType(
          compound_id, structure_pointer_var.size());
      cur_scope->AddDefinition(var_name->GetString(), new_type,
                               var_name->GetStatementID());
      if (DBG)
        cout << "[struct]a pointer in level " << structure_pointer_var.size()
             << ", name: " << var_name->GetString() << endl;
    }
    structure_pointer_var.clear();
  }
  */
  /*
  else if (isUse(cur->GetDataFlag())) {  // only strucutre variable define
    if (DBG) cout << "data_flag = Use" << endl;
    vector<IRPtr> structure_name, strucutre_variable_name;
    search_by_data_type(cur, kClassName, structure_name);
    // search_by_data_type(root, kVariableName, strucutre_variable_name,
    // kClassBody);

    assert(structure_name.size());
    auto compound_id =
        real_type_system_->GetTypeIDByStr(structure_name[0]->GetString());
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
                        kClassBody);
    if (DBG) cout << strucutre_variable_unit.size() << endl;
    if (DBG) cout << root->ToString() << endl;
    // if (DBG) cout << frontend_->GetIRTypeStr(root->type) << endl;

    // for each class variable define unit, collect all kPointer.
    // it will be the reference level, if empty, it is not a pointer
    for (auto var_define_unit : strucutre_variable_unit) {
      search_by_data_type(var_define_unit, kPointer, structure_pointer_var,
                          kDataDefault, true);
      auto var_name = search_by_data_type(var_define_unit, kVariableName);
      assert(var_name);
      if (structure_pointer_var.size() == 0) {  // not a pointer
        cur_scope->AddDefinition(var_name->GetString(), compound_id,
                                 var_name->GetStatementID());
        SPDLOG_DEBUG("[struct]not a pointer, name: {}", var_name->GetString());
      } else {
        auto new_type = real_type_system_->GeneratePointerType(
            compound_id, structure_pointer_var.size());
        cur_scope->AddDefinition(var_name->GetString(), new_type,
                                 var_name->GetStatementID());
        SPDLOG_DEBUG("[struct]a pointer in level {}, name: {}",
                     structure_pointer_var.size(), var_name->GetString());
      }
    }
    structure_pointer_var.clear();
  }
  */
}

/*
void ScopeTree::collect_function_definition_wt(IRPtr cur) {
  SPDLOG_DEBUG("Collecting {}", cur->ToString());
  auto function_name_ir = search_by_data_type(cur, kFunctionName);
  auto function_args_ir = search_by_data_type(cur, kFunctionArgument);
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
    search_by_data_type(function_args_ir, kVariableName, args);
    num_function_args = args.size();
    SPDLOG_DEBUG("Num arg: {}", num_function_args);
    for (auto i : args) {
      arg_names.push_back(i->ToString());
      SPDLOG_DEBUG("Arg: {}", i->ToString());
      arg_types.push_back(SpecialType::kAnyType);
    }
    // assert(num_function_args == 3);
  }

  auto cur_scope = GetScopeById(cur->GetScopeID());
  if (function_name.empty())
    function_name = "Anoynmous" + to_string(cur->GetStatementID());
  auto function_type = real_type_system_->CreateFunctionType(
      function_name, SpecialType::kAnyType, arg_types);
  if (DBG) {
    SPDLOG_DEBUG("Collecing function name: {}", function_name);
  }

  cur_scope->AddDefinition(function_name, function_type->type_id_,
                           function_name_ir == nullptr
                               ? cur->GetStatementID()
                               : function_name_ir->GetStatementID());
  // cout << "Scope is global?: " << (cur_scope->scope_type_ == kScopeGlobal) <<
  // endl; cout << "Scope ID: " << (cur_scope->scope_id_) << endl;

  auto function_body_ir = search_by_data_type(cur, kFunctionBody);
  if (function_body_ir) {
    cur_scope = GetScopeById(function_body_ir->GetScopeID());
    for (auto i = 0; i < num_function_args; i++) {
      cur_scope->AddDefinition(arg_names[i], SpecialType::kAnyType,
                               args[i]->GetStatementID());
    }
    if (DBG)
      SPDLOG_DEBUG("Recursive on function body: {}",
                   function_body_ir->ToString());
    create_symbol_table(function_body_ir);
  }
}
*/

void ScopeTree::CollectFunctionDefinition(IRPtr &cur) {
  auto return_value_type_ir =
      search_by_data_type(cur, kFunctionReturnType, kFunctionBody);
  auto function_name_ir =
      search_by_data_type(cur, kFunctionName, kFunctionBody);
  std::vector<IRPtr> arguments;
  search_by_data_type(cur, kFunctionArgument, arguments, kFunctionBody);

  SPDLOG_INFO("Function name: {}", function_name_ir->ToString());
  if (return_value_type_ir) {
    SPDLOG_INFO("Function return type: {}", return_value_type_ir->ToString());
  }
  if (arguments.size() > 0) {
    for (auto i : arguments) {
      SPDLOG_INFO("Function arg: {}", i->ToString());
    }
  }

  string function_name_str = function_name_ir->ToString();
  strip_string(function_name_str);

  if (function_name_str.empty()) {
    SPDLOG_INFO("Anonymous function");
    return;
  }

  TypeID return_type = SpecialType::kNotExist;
  if (return_value_type_ir) {
    string return_value_type_str = return_value_type_ir->ToString();
    if (return_value_type_str.size() > 7) {
      // TODO: Trim struct and enum etc.
      if (return_value_type_str.substr(0, 7) == "struct ") {
        return_value_type_str =
            return_value_type_str.substr(7, return_value_type_str.size() - 7);
      } else if (return_value_type_str.substr(0, 5) == "enum ") {
        return_value_type_str =
            return_value_type_str.substr(5, return_value_type_str.size() - 5);
      }
    }
    Trim(return_value_type_str);
    return_type = real_type_system_->GetTypeIDByStr(return_value_type_str);
  }

  vector<TypeID> arg_types;
  vector<string> arg_names;
  for (auto &arg_ir : arguments) {
    auto arg_type_ir = search_by_data_type(arg_ir, kVariableType);
    auto arg_name_ir = search_by_data_type(arg_ir, kVariableName);
    assert(arg_name_ir);
    std::string arg_name = arg_name_ir->ToString();
    Trim(arg_name);
    TypeID arg_type = SpecialType::kAnyType;
    if (arg_type_ir) {
      string arg_type_str = arg_type_ir->ToString();
      Trim(arg_type_str);
      arg_type = real_type_system_->GetTypeIDByStr(arg_type_str);
    }
    string arg_type_str = arg_type_ir->ToString();
    Trim(arg_type_str);
    arg_types.push_back(real_type_system_->GetTypeIDByStr(arg_type_str));
    arg_names.push_back(arg_name);
  }

  SPDLOG_INFO("Function name: {}", function_name_str);
  if (return_value_type_ir) {
    SPDLOG_INFO("Function return type: {}", return_type);
  }
  for (size_t i = 0; i < arguments.size(); i++) {
    SPDLOG_INFO("Function arg: {}", arg_names[i]);
    SPDLOG_INFO("Function arg type: {}",
                real_type_system_->GetTypePtrByID(arg_types[i])->name);
  }

  auto cur_scope = GetScopeById(cur->GetScopeID());
  if (return_type) {
    auto function_ptr = real_type_system_->CreateFunctionType(
        function_name_str, return_type, arg_types, arg_names);
    if (function_ptr == nullptr || function_name_ir == nullptr) return;
    // if(DBG) cout << cur_scope << ", " << function_ptr << endl;
    cur_scope->AddDefinition(function_ptr->name, function_ptr->type_id_,
                             function_name_ir->GetStatementID());
  }

  auto function_body = search_by_data_type(cur, kFunctionBody);
  if (function_body) {
    cur_scope = GetScopeById(function_body->GetScopeID());
    for (auto i = 0; i < arg_types.size(); i++) {
      cur_scope->AddDefinition(arg_names[i], arg_types[i],
                               cur->GetStatementID());
    }
    create_symbol_table(function_body);
  }
}
}  // namespace polyglot
