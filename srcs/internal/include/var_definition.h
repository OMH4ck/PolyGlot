#ifndef __VAR_DEFINITION_H__
#define __VAR_DEFINITION_H__

#include <cassert>
#include <map>
#include <memory>
#include <optional>
#include <set>
#include <vector>

#include "define.h"
#include "ir.h"
#include "utils.h"

using TYPEID = int;
using ORDERID = unsigned long;
using ScopeID = int;

class IR;
class Scope;
using IRPtr = std::shared_ptr<IR>;
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

class ScopeTree {
 public:
  ScopePtr GetScopeById(ScopeID id);
  ScopePtr GetScopeRoot();
  void EnterScope(ScopeType scope_type);
  void ExitScope();
  ScopePtr GenScope(ScopeType scope_type);
  ScopePtr GetCurrentScope() { return g_scope_current_; }
  ScopeID GetCurrentScopeId() { return g_scope_current_->scope_id_; }

 private:
  int g_scope_id_counter_ = 0;
  // TODO: I think this should be the static scope, where we save all the
  // built-in types and definition.
  ScopePtr g_scope_root_;
  std::shared_ptr<Scope> g_scope_current_;
  std::map<ScopeID, ScopePtr> scope_id_map_;
};

// extern std::shared_ptr<Scope> g_scope_root;
// std::shared_ptr<Scope> get_scope_root();
// extern map<int, std::shared_ptr<Scope>> scope_id_map;
// extern map<TYPEID, std::shared_ptr<VarType>> type_map;
// extern map<std::string, int> basic_types;
extern std::set<int> all_compound_types;
// extern std::set<int> all_functions;
extern bool is_internal_obj_setup;
extern bool is_in_class;

// for internal type
extern std::set<int> all_internal_compound_types;
extern std::set<int> all_internal_functions;
extern std::map<TYPEID, std::shared_ptr<VarType>> internal_type_map;
std::map<TYPEID, std::vector<std::string>> &get_all_builtin_simple_var_types();
std::map<TYPEID, std::vector<std::string>> &get_all_builtin_compound_types();
std::map<TYPEID, std::vector<std::string>> &get_all_builtin_function_types();
bool is_builtin_type(TYPEID type_id);

void init_convert_chain();
bool is_derived_type(TYPEID dtype, TYPEID btype);

void init_basic_types();
void forward_add_compound_type(std::string &structure_name);
// std::shared_ptr<Scope> get_scope_by_id(int);
std::shared_ptr<CompoundType> make_compound_type_by_scope(
    std::shared_ptr<Scope> scope, std::string &structure_name);
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

// for pointer
int generate_pointer_type(int original_type, int pointer_level);
int get_or_create_pointer_type(int type);
void debug_pointer_type(std::shared_ptr<PointerType> &p);
bool is_pointer_type(int type);
std::shared_ptr<PointerType> get_pointer_type_by_type_id(TYPEID type_id);

void reset_scope();
void clear_definition_all();
void init_internal_type();

std::shared_ptr<ScopeTree> BuildScopeTree(IRPtr root);
#endif
