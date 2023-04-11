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

using TYPEID = int;
using ORDERID = unsigned long;
using ScopeID = int;

class Scope;
class VarType;
using TypePtr = std::shared_ptr<VarType>;
using ScopePtr = std::shared_ptr<Scope>;

#define ALLTYPES 1
#define ALLCOMPOUNDTYPE 2
#define ALLFUNCTION 3
#define ALLUPPERBOUND 5
#define ANYTYPE 6

struct Definition {
  std::string name;
  TYPEID type;
  ORDERID order_id;
};

// Inside one scope.
class SymbolTable {
 public:
  void AddDefinition(int type, const std::string &var_name, ORDERID id);
  void AddDefinition(Definition def);
  void SetScopeId(int scope_id) { scope_id_ = scope_id; }
  int GetScopeId() const { return scope_id_; }
  std::optional<Definition> GetDefinition(std::string_view var_name) const;
  const std::map<TYPEID, std::vector<Definition>> &GetTable() const {
    return m_table_;
  }

 private:
  int scope_id_;
  std::map<TYPEID, std::vector<Definition>> m_table_;
};

class Scope {
 public:
  Scope(int scope_id, ScopeType scope_type)
      : scope_id_(scope_id), scope_type_(scope_type) {}
  ~Scope() {}
  // TODO: Avoid using raw pointer
  // std::vector<IR*> v_ir_set_;  // all the irs in this scope;
  std::map<int, std::vector<IRPtr>> m_define_ir_;
  int scope_id_;
  std::map<int, std::shared_ptr<Scope>> children_;
  std::weak_ptr<Scope> parent_;
  ScopeType scope_type_;  // for what type of scope

  // map<TYPEID, std::vector<Definition>> definitions_;
  SymbolTable definitions_;
  std::set<std::string> s_defined_variable_names_;
  void add_definition(int type, const std::string &var_name, unsigned long id,
                      ScopeType stype);
  void add_definition(int type, const std::string &var_name, unsigned long id);
  void add_definition(int type, IRPtr ir);
};

class VarType {
 public:
  TYPEID type_id_;
  std::string type_name_;
  std::vector<std::shared_ptr<VarType>> base_type_;
  std::vector<std::weak_ptr<VarType>> derived_type_;
  TYPEID get_type_id() const;
  virtual bool is_pointer_type() { return false; }
  virtual bool is_compound_type() { return false; };
  virtual bool is_function_type() { return false; };
};

class FunctionType : public VarType {
 public:
  // pair<TYPEID, std::string> return_value_;
  std::vector<IRPtr> return_value_ir_;
  IRPtr return_definition_ir_;
  TYPEID return_type_;
  // map<int, std::vector<std::string>> arguments_; // Should be IR*?
  // std::vector<pair<TYPEID, std::string>> v_arguments_;
  std::vector<IRPtr> v_arguments_;
  std::vector<TYPEID> v_arg_types_;
  int arg_num();
  std::string get_arg_by_order(int);
  std::string get_arg_by_type(TYPEID);
  virtual bool is_pointer_type() { return false; }
  virtual bool is_compound_type() { return false; };
  virtual bool is_function_type() { return true; };
};

class CompoundType : public VarType {
 public:
  std::vector<TYPEID> parent_class_;
  std::map<TYPEID, std::vector<std::string>> v_members_;
  std::set<IRPtr> can_be_fixed_ir_;
  // IRPtr define_root_;

  std::string get_member_by_type(TYPEID type);
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
  std::map<TYPEID, std::vector<std::string>> &GetBuiltinSimpleVarTypes();
  std::map<TYPEID, std::vector<std::string>> &GetBuiltinCompoundTypes();
  std::map<TYPEID, std::vector<std::string>> &GetBuiltinFunctionTypes();
  bool IsBuiltin(TYPEID type_id);

  void init_convert_chain();
  bool is_derived_type(TYPEID dtype, TYPEID btype);

  void init_basic_types();
  set<int> get_all_types_from_compound_type(int compound_type, set<int> &visit);
  void forward_add_compound_type(std::string &structure_name);
  // std::shared_ptr<Scope> get_scope_by_id(int);
  std::shared_ptr<CompoundType> make_compound_type_by_scope(
      std::shared_ptr<Scope> scope, std::string structure_name);
  std::shared_ptr<FunctionType> make_function_type_by_scope(
      std::shared_ptr<Scope> scope);
  std::shared_ptr<FunctionType> make_function_type(std::string &function_name,
                                                   TYPEID return_type,
                                                   std::vector<TYPEID> &args);
  std::shared_ptr<VarType> get_type_by_type_id(TYPEID type_id);
  std::shared_ptr<CompoundType> get_compound_type_by_type_id(TYPEID type_id);
  std::shared_ptr<FunctionType> get_function_type_by_type_id(TYPEID type_id);
  std::shared_ptr<FunctionType> get_function_type_by_return_type_id(
      TYPEID type_id);
  void make_basic_type_add_map(TYPEID id, const std::string &s);
  std::shared_ptr<VarType> make_basic_type(TYPEID id, const std::string &s);
  bool is_basic_type(TYPEID type_id);
  bool is_compound_type(TYPEID type_id);
  bool is_function_type(TYPEID type_id);
  bool is_basic_type(const std::string &s);
  TYPEID get_basic_type_id_by_string(const std::string &s);
  TYPEID get_type_id_by_string(const std::string &s);
  TYPEID get_compound_type_id_by_string(const std::string &s);
  int gen_type_id();
  std::string get_type_name_by_id(TYPEID type_id);
  void debug_scope_tree(std::shared_ptr<Scope> cur);
  std::set<int> get_all_class();
  TYPEID convert_to_real_type_id(TYPEID, TYPEID);
  TYPEID least_upper_common_type(TYPEID, TYPEID);
  void clear_type_map();
  // for pointer
  int generate_pointer_type(int original_type, int pointer_level);
  int get_or_create_pointer_type(int type);
  void debug_pointer_type(std::shared_ptr<PointerType> &p);
  bool is_pointer_type(int type);
  void clear_definition_all();
  std::shared_ptr<PointerType> get_pointer_type_by_type_id(TYPEID type_id);
  void init_internal_type();
  TYPEID get_basic_typeid_by_string(const string &s);
  static bool IsInternalObjectSetup() { return is_internal_obj_setup; }
  void SetInClass(bool in_class) { is_in_class = in_class; }
  bool GetInClass() { return is_in_class; }

 private:
  std::set<int> all_compound_types_;
  set<int> all_functions;
  // for internal type
  std::set<int> all_internal_compound_types;
  std::set<int> all_internal_functions;
  std::map<TYPEID, std::shared_ptr<VarType>> internal_type_map;
  map<TYPEID, map<int, TYPEID>> pointer_map;  // original_type:<level: typeid>
  bool is_in_class;
  map<TYPEID, shared_ptr<VarType>> type_map;
  static map<string, shared_ptr<VarType>> basic_types;
  set<TYPEID> basic_types_set;  // For fast lookup
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
  ScopeID GetCurrentScopeId() { return g_scope_current_->scope_id_; }

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
#endif
