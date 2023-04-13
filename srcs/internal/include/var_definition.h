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
  StatementID order_id;
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
  std::string type_name_;
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
  std::vector<IRPtr> v_arguments_;
  std::vector<TypeID> v_arg_types_;
  int arg_num();
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

  bool is_derived_type(TypeID dtype, TypeID btype);

  set<int> get_all_types_from_compound_type(int compound_type, set<int> &visit);
  void forward_add_compound_type(std::string &structure_name);
  std::shared_ptr<CompoundType> make_compound_type_by_scope(
      std::shared_ptr<Scope> scope, std::string structure_name);
  std::shared_ptr<FunctionType> make_function_type_by_scope(
      std::shared_ptr<Scope> scope);
  std::shared_ptr<FunctionType> make_function_type(std::string &function_name,
                                                   TypeID return_type,
                                                   std::vector<TypeID> &args);
  std::shared_ptr<VarType> get_type_by_type_id(TypeID type_id);
  std::shared_ptr<CompoundType> get_compound_type_by_type_id(TypeID type_id);
  std::shared_ptr<FunctionType> get_function_type_by_type_id(TypeID type_id);
  std::shared_ptr<FunctionType> get_function_type_by_return_type_id(
      TypeID type_id);
  void make_basic_type_add_map(TypeID id, const std::string &s);
  std::shared_ptr<VarType> make_basic_type(TypeID id, const std::string &s);
  static bool is_basic_type(TypeID type_id);
  bool is_compound_type(TypeID type_id);
  bool is_function_type(TypeID type_id);
  static bool is_basic_type(const std::string &s);
  static TypeID get_basic_type_id_by_string(const std::string &s);
  [[deprecated]] static TypeID get_basic_typeid_by_string(const string &s);
  TypeID get_type_id_by_string(const std::string &s);
  TypeID get_compound_type_id_by_string(const std::string &s);
  int gen_type_id();
  std::string get_type_name_by_id(TypeID type_id);
  void debug_scope_tree(std::shared_ptr<Scope> cur);
  std::set<int> get_all_class();
  TypeID convert_to_real_type_id(TypeID, TypeID);
  TypeID least_upper_common_type(TypeID, TypeID);
  void clear_type_map();
  // for pointer
  int generate_pointer_type(int original_type, int pointer_level);
  int get_or_create_pointer_type(int type);
  void debug_pointer_type(std::shared_ptr<PointerType> &p);
  bool is_pointer_type(int type);
  void clear_definition_all();
  std::shared_ptr<PointerType> get_pointer_type_by_type_id(TypeID type_id);
  void init_internal_type();
  static bool IsInternalObjectSetup() { return is_internal_obj_setup; }
  void SetInClass(bool in_class) { is_in_class = in_class; }
  bool GetInClass() { return is_in_class; }

 private:
  void init_convert_chain();
  void init_basic_types();
  std::set<int> all_compound_types_;
  set<int> all_functions;
  // for internal type
  std::set<int> all_internal_compound_types;
  std::set<int> all_internal_functions;
  std::map<TypeID, std::shared_ptr<VarType>> internal_type_map;
  map<TypeID, map<int, TypeID>> pointer_map;  // original_type:<level: typeid>
  bool is_in_class;
  map<TypeID, shared_ptr<VarType>> type_map;
  static map<string, shared_ptr<VarType>> basic_types;
  static set<TypeID> basic_types_set;  // For fast lookup
  set<int> all_internal_class_methods;
  static bool is_internal_obj_setup;
};
// extern std::set<int> all_functions;
class ScopeTree {
 public:
  ScopePtr GetScopeById(ScopeID id);
  ScopePtr GetScopeRoot();
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
  void collect_simple_variable_defintion_wt(IRPtr cur);
  std::optional<SymbolTable> collect_simple_variable_defintion(IRPtr cur);
  void collect_structure_definition(IRPtr cur, IRPtr root);
  void collect_structure_definition_wt(IRPtr cur, IRPtr root);
  void collect_function_definition_wt(IRPtr cur);
  void collect_function_definition(IRPtr cur);
};
void reset_scope();

std::shared_ptr<ScopeTree> BuildScopeTree(IRPtr root);
}  // namespace polyglot
#endif
