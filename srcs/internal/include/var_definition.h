/*
 * Copyright (c) 2023 OMH4ck
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __VAR_DEFINITION_H__
#define __VAR_DEFINITION_H__

#include <cassert>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <vector>

// #include "define.h"
#include "ir.h"
#include "utils.h"

namespace polyglot {
using TypeID = int;

class Scope;
class VarType;
using TypePtr = std::shared_ptr<VarType>;
using ScopePtr = std::shared_ptr<Scope>;

enum SpecialType : TypeID {
  kNotExist = 0,
  kAllTypes = 1,
  kAllCompoundType = 2,
  kAllFunction = 3,
  kAllUpperBound = 5,
  kAnyType = 6,
};

struct Definition {
  std::string name;
  TypeID type;
  StatementID statement_id;
};

// Inside one scope.
class SymbolTable {
 public:
  void AddDefinition(const std::string &var_name, TypeID type, StatementID id);
  void AddDefinition(Definition def);
  std::optional<Definition> GetDefinition(std::string_view var_name) const;
  const std::map<TypeID, std::vector<Definition>> &GetTable() const {
    return m_table_;
  }

 private:
  std::map<TypeID, std::vector<Definition>> m_table_;
};

class Scope {
 public:
  Scope(ScopeID scope_id, ScopeType scope_type)
      : scope_id_(scope_id), scope_type_(scope_type) {}

  ScopeID GetScopeID() const { return scope_id_; }
  ScopeType GetScopeType() const { return scope_type_; }
  std::map<ScopeID, std::shared_ptr<Scope>> &GetChildren() { return children_; }
  void AddChild(ScopePtr child) { children_[child->scope_id_] = child; }
  ScopePtr GetParent() const { return parent_.lock(); }
  void SetParent(ScopePtr parent) { parent_ = parent; }
  const SymbolTable &GetSymbolTable() const { return symbol_table_; }
  // map<TYPEID, std::vector<Definition>> definitions_;
  void AddDefinition(const std::string &name, TypeID type, StatementID id,
                     ScopeType scope_type);
  void AddDefinition(const std::string &name, TypeID type, StatementID id);

 private:
  std::map<TypeID, std::vector<IRPtr>> m_define_ir_;
  std::map<ScopeID, std::shared_ptr<Scope>> children_;
  std::weak_ptr<Scope> parent_;
  std::set<std::string> s_defined_variable_names_;
  SymbolTable symbol_table_;
  ScopeID scope_id_;
  ScopeType scope_type_;  // for what type of scope
};

class VarType {
 public:
  TypeID type_id_;
  std::string name;
  std::vector<std::shared_ptr<VarType>> base_type_;
  std::vector<std::weak_ptr<VarType>> derived_type_;
  TypeID get_type_id() const;
  virtual bool is_pointer_type() { return false; }
  virtual bool is_compound_type() { return false; };
  virtual bool is_function_type() { return false; };
};

class FunctionType : public VarType {
 public:
  // pair<TYPEID, std::string> return_value_;
  std::vector<IRPtr> return_value_ir_;
  IRPtr return_definition_ir_;
  TypeID return_type_;
  // map<int, std::vector<std::string>> arguments_; // Should be IR*?
  // std::vector<pair<TYPEID, std::string>> v_arguments_;
  // std::vector<IRPtr> v_arguments_;
  std::vector<std::string> v_arg_names_;
  std::vector<TypeID> v_arg_types_;
  int arg_num() const { return v_arg_types_.size(); }
  std::string get_arg_by_order(int);
  std::string get_arg_by_type(TypeID);
  virtual bool is_pointer_type() { return false; }
  virtual bool is_compound_type() { return false; };
  virtual bool is_function_type() { return true; };
};

class CompoundType : public VarType {
 public:
  std::vector<TypeID> parent_class_;
  std::map<TypeID, std::vector<std::string>> v_members_;
  std::set<IRPtr> can_be_fixed_ir_;
  // IRPtr define_root_;

  std::string get_member_by_type(TypeID type);
  void remove_unfix(IRPtr);
  virtual bool is_pointer_type() { return false; }
  virtual bool is_compound_type() { return true; };
  virtual bool is_function_type() { return false; };
};

class PointerType : public VarType {
 public:
  int orig_type_;
  int basic_type_;
  int reference_level_;
  virtual bool is_pointer_type() { return true; }
  virtual bool is_compound_type() { return false; };
  virtual bool is_function_type() { return false; };
};

// extern std::shared_ptr<Scope> g_scope_root;
// std::shared_ptr<Scope> get_scope_root();
// extern map<int, std::shared_ptr<Scope>> scope_id_map;
// extern map<TYPEID, std::shared_ptr<VarType>> type_map;
// extern map<std::string, int> basic_types;

// TODO: Bad name. Fix later.
class RealTypeSystem {
 public:
  RealTypeSystem();
  const std::map<TypeID, std::vector<std::string>> &GetBuiltinSimpleVarTypes()
      const;
  const std::map<TypeID, std::vector<std::string>> &GetBuiltinCompoundTypes()
      const;
  const std::map<TypeID, std::vector<std::string>> &GetBuiltinFunctionTypes()
      const;
  bool IsBuiltinType(TypeID type_id);
  bool CanDeriveFrom(TypeID dtype, TypeID btype);
  std::shared_ptr<FunctionType> CreateFunctionType(
      std::string &function_name, TypeID return_type, std::vector<TypeID> &args,
      std::vector<std::string> &arg_names);

  std::shared_ptr<CompoundType> CreateCompoundType(
      std::string &structure_name, std::vector<TypeID> &members,
      std::vector<std::string> &member_names);
  // TODO: Refactor the signature of this function. It should accept a vector of
  // member types and names along with the name of the structure.
  std::shared_ptr<CompoundType> CreateCompoundTypeAtScope(
      std::shared_ptr<Scope> scope, std::string structure_name);
  std::shared_ptr<VarType> GetTypePtrByID(TypeID type_id);
  std::shared_ptr<CompoundType> GetCompoundType(TypeID type_id);
  std::shared_ptr<FunctionType> GetFunctionType(TypeID type_id);
  std::shared_ptr<PointerType> GetPointerType(TypeID type_id);
  bool IsCompoundType(TypeID type_id);
  bool IsFunctionType(TypeID type_id);
  bool IsPointerType(TypeID type);
  static bool IsBasicType(TypeID type_id);
  static TypeID GetBasicTypeIDByStr(const std::string &s);
  TypeID GetTypeIDByStr(const std::string &s);
  TypeID GetLeastUpperCommonType(TypeID, TypeID);
  // for pointer
  int GeneratePointerType(int original_type, int pointer_level);
  int GetOrCreatePointerType(int type);
  static bool HasBuiltinType() { return is_internal_obj_setup; }

  // TODO: Make this an utility function outside of this class.
  set<int> get_all_types_from_compound_type(int compound_type, set<int> &visit);

 private:
  void init_internal_type();
  int gen_type_id();
  void debug_pointer_type(std::shared_ptr<PointerType> &p);
  TypeID get_compound_type_id_by_string(const std::string &s);
  static bool is_basic_type(const std::string &s);
  std::shared_ptr<VarType> make_basic_type(TypeID id, const std::string &s);
  void make_basic_type_add_map(TypeID id, const std::string &s);
  void init_convert_chain();
  void init_basic_types();
  std::set<int> all_compound_types_;
  set<int> all_functions;
  // for internal type
  std::set<int> all_internal_compound_types;
  std::set<int> all_internal_functions;
  // This should be static.
  std::map<TypeID, std::shared_ptr<VarType>> internal_type_map;
  map<TypeID, map<int, TypeID>> pointer_map;  // original_type:<level: typeid>
  bool is_in_class;
  map<TypeID, shared_ptr<VarType>> type_map;
  static map<string, shared_ptr<VarType>> basic_types;
  static set<TypeID> basic_types_set;  // For fast lookup
  set<int> all_internal_class_methods;
  static bool is_internal_obj_setup;
};

class ScopeTree {
 public:
  ScopePtr GetScopeById(ScopeID id);
  ScopePtr GetScopeRoot() { return g_scope_root_; }
  void EnterScope(ScopeType scope_type);
  void ExitScope();
  ScopePtr GenScope(ScopeType scope_type);
  ScopePtr GetCurrentScope() { return g_scope_current_; }
  ScopeID GetCurrentScopeId() { return g_scope_current_->GetScopeID(); }

  void BuildSymbolTables(IRPtr &root);

  std::shared_ptr<RealTypeSystem> GetRealTypeSystem() {
    return real_type_system_;
  }
  ScopeTree() { real_type_system_ = std::make_shared<RealTypeSystem>(); }
  static std::shared_ptr<ScopeTree> BuildTree(IRPtr root);

 private:
  int g_scope_id_counter_ = 0;
  // TODO: I think this should be the static scope, where we save all the
  // built-in types and definition.
  ScopePtr g_scope_root_;
  std::shared_ptr<Scope> g_scope_current_;
  std::map<ScopeID, ScopePtr> scope_id_map_;
  std::shared_ptr<RealTypeSystem> real_type_system_;

  // Moved from the Old TypeSystem
  bool create_symbol_table(IRPtr root);
  bool is_contain_definition(IRPtr cur);
  bool collect_definition(IRPtr cur);
  DataType find_define_type(IRPtr cur);
  void CollectSimpleVariableDefinition(IRPtr &cur);
  // std::optional<SymbolTable> collect_simple_variable_defintion(IRPtr cur);
  void CollectStructureDefinition(IRPtr &cur, IRPtr &root);
  void CollectFunctionDefinition(IRPtr &cur);
};
void reset_scope();

}  // namespace polyglot
#endif
