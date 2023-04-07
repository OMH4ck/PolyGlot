#ifndef __TYPESYSTEM_H__
#define __TYPESYSTEM_H__

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <iterator>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#include "ast.h"
#include "frontend.h"
#include "ir.h"

namespace polyglot {

namespace typesystem {

using std::map;
using std::set;
using std::shared_ptr;
using std::string;
using std::vector;
#define NOTEXIST 0
typedef int VALUETYPE;
typedef int OPTYPE;
class Scope;

// extern unsigned long type_fix_framework_fail_counter;
// extern unsigned long top_fix_fail_counter;
// extern unsigned long top_fix_success_counter;

enum FIXORDER {
  LEFT_TO_RIGHT = 0,
  RIGHT_TO_LEFT,
  DEFAULT,
};

enum OPRuleProperty {
  OP_PROP_Default,
  OP_PROP_FunctionCall,
  OP_PROP_Dereference,
  OP_PROP_Reference
};

class OPRule {
 public:
  OPRule(int op_id, int result, int left)
      : op_id_(op_id),
        result_(result),
        left_(left),
        right_(0),
        operand_num_(1) {}
  OPRule(int op_id, int result, int left, int right)
      : op_id_(op_id),
        result_(result),
        left_(left),
        right_(right),
        operand_num_(2) {}
  int left_, right_, result_;
  int op_id_;
  int operand_num_;
  FIXORDER fix_order_;
  bool is_op1();
  bool is_op2();
  int apply(int, int = 0);
  void add_property(const string &s);
  // more properties to add;

  OPRuleProperty property_ = OP_PROP_Default;
};

class TypeSystem {
 private:
  std::shared_ptr<Frontend> frontend_;
  map<string, map<string, map<string, int>>> op_id_map_;
  map<int, vector<OPRule>> op_rules_;
  // map<string, int> basic_types_;
  int current_scope_id_;
  shared_ptr<Scope> current_scope_ptr_;
  bool contain_used_;
  set<IRTYPE> s_basic_unit_;

 public:
  enum class ValidationError {
    kSuccess,
    kUnparseable,
    kNoSymbolToUse,
  };

  TypeSystem(std::shared_ptr<Frontend> frontend = nullptr);
  // TODO: Return ValidationError instead of bool
  bool validate(IRPtr &root);
  void init();

 private:
  // map<IR*, map<int, vector<pair<int,int>>>> cache_inference_map_;
  map<IRPtr, shared_ptr<map<int, vector<pair<int, int>>>>> cache_inference_map_;
  // void init_basic_types();

  int gen_id();
  void init_type_dict();

  void split_to_basic_unit(IRPtr root, std::queue<IRPtr> &q,
                           map<IRPtr *, IRPtr> &m_save,
                           set<IRTYPE> &s_basic_unit_ptr);
  void split_to_basic_unit(IRPtr root, std::queue<IRPtr> &q,
                           map<IRPtr *, IRPtr> &m_save);

  void connect_back(map<IRPtr *, IRPtr> &m_save);

  FIXORDER get_fix_order(int type);  // need to finish

  bool create_symbol_table(IRPtr root);

  int get_op_value(std::shared_ptr<IROperator> op);

  bool is_op_null(std::shared_ptr<IROperator> op);

  // new
  bool type_inference_new(IRPtr cur, int scope_type = NOTEXIST);
  set<int> collect_usable_type(IRPtr cur);
  int locate_defined_variable_by_name(const string &var_name, int scope_id);
  string get_class_member_by_type(int type, int target_type);
  string get_class_member_by_type_no_duplicate(int type, int target_type,
                                               set<int> &visit);
  string get_class_member(int type_id);
  vector<string> get_op_by_optype(OPTYPE op_type);
  pair<OPTYPE, vector<int>> collect_sat_op_by_result_type(
      int type, map<int, vector<set<int>>> &a,
      map<int, vector<string>> &function_map,
      map<int, vector<string>> &compound_var_map);

  DATATYPE find_define_type(IRPtr cur);

  void collect_structure_definition(IRPtr cur, IRPtr root);
  void collect_function_definition(IRPtr cur);

  void collect_simple_variable_defintion_wt(IRPtr cur);
  void collect_function_definition_wt(IRPtr cur);
  void collect_structure_definition_wt(IRPtr cur, IRPtr root);

  bool is_contain_definition(IRPtr cur);
  bool collect_definition(IRPtr cur);
  string generate_expression_by_type(int type, IRPtr ir);
  string generate_expression_by_type_core(int type, IRPtr ir);
  vector<map<int, vector<string>>> collect_all_var_definition_by_type(
      IRPtr cur);

  bool simple_fix(IRPtr ir, int type);
  bool validate_syntax_only(IRPtr root);
  bool top_fix(IRPtr root);
  IRPtr locate_mutated_ir(IRPtr root);

  string generate_definition(string &var_name, int type);
  string generate_definition(vector<string> &var_name, int type);
  // bool insert_definition();

  bool filter_compound_type(map<int, vector<string>> &compound_var_map,
                            int type);
  bool filter_function_type(map<int, vector<string>> &function_map,
                            const map<int, vector<string>> &compound_var_map,
                            const map<int, vector<string>> &simple_type,
                            int type);
  set<int> calc_satisfiable_functions(const set<int> &function_type_set,
                                      const set<int> &available_types);
  map<int, vector<set<int>>> collect_satisfiable_types(
      IRPtr ir, map<int, vector<string>> &simple_var_map,
      map<int, vector<string>> &compound_var_map,
      map<int, vector<string>> &function_map);
  set<int> calc_possible_types_from_structure(int structure_type);
  string function_call_gen_handler(map<int, vector<string>> &function_map,
                                   IRPtr ir);
  string structure_member_gen_handler(
      map<int, vector<string>> &compound_var_map, int member_type);
  void update_pointer_var(map<int, vector<string>> &pointer_var_map,
                          map<int, vector<string>> &simple_var_map,
                          map<int, vector<string>> &compound_var_map);

  string expression_gen_handler(
      int type, map<int, vector<set<int>>> &all_satisfiable_types,
      map<int, vector<string>> &function_map,
      map<int, vector<string>> &compound_var_map, IRPtr ir);
  OPRule parse_op_rule(string s);
  // OPRule* get_op_rule_by_op_id(int);
  bool is_op1(int);
  bool is_op2(int);
  int query_result_type(int op, int, int = 0);
  int get_op_property(int op_id);
  int gen_counter_, function_gen_counter_, current_fix_scope_;

  // bool insert_definition(int scope_id, int type_id, string var_name);

  // set up internal object
  void init_internal_obj(string dir_name);
  void init_one_internal_obj(string filename);
  void debug();
};

void extract_struct_after_mutation(IRPtr);
}  // namespace typesystem
}  // namespace polyglot

#endif
