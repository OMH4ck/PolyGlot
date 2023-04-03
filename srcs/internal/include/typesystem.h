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
  static map<string, map<string, map<string, int>>> op_id_map_;
  static map<int, vector<OPRule>> op_rules_;
  // static map<string, int> basic_types_;
  static int current_scope_id_;
  static shared_ptr<Scope> current_scope_ptr_;
  static bool contain_used_;
  static set<IRTYPE> s_basic_unit_;

 public:
  // static map<IR*, map<int, vector<pair<int,int>>>> cache_inference_map_;
  static map<IRPtr, shared_ptr<map<int, vector<pair<int, int>>>>>
      cache_inference_map_;
  // void init_basic_types();

  static int gen_id();
  static void init_type_dict();

  static void split_to_basic_unit(
      IRPtr root, std::queue<IRPtr> &q, map<IRPtr *, IRPtr> &m_save,
      set<IRTYPE> &s_basic_unit_ptr = s_basic_unit_);

  static void connect_back(map<IRPtr *, IRPtr> &m_save);

  static FIXORDER get_fix_order(int type);  // need to finish

  static bool type_fix_framework(IRPtr root);

  static int get_op_value(std::shared_ptr<IROperator> op);

  static bool is_op_null(std::shared_ptr<IROperator> op);

  // new
  static bool type_inference_new(IRPtr cur, int scope_type = NOTEXIST);
  static set<int> collect_usable_type(IRPtr cur);
  static int locate_defined_variable_by_name(const string &var_name,
                                             int scope_id);
  static string get_class_member_by_type(int type, int target_type);
  static string get_class_member_by_type_no_duplicate(int type, int target_type,
                                                      set<int> &visit);
  static string get_class_member(int type_id);
  static vector<string> get_op_by_optype(OPTYPE op_type);
  static pair<OPTYPE, vector<int>> collect_sat_op_by_result_type(
      int type, map<int, vector<set<int>>> &a,
      map<int, vector<string>> &function_map,
      map<int, vector<string>> &compound_var_map);

  static DATATYPE find_define_type(IRPtr cur);

  static void collect_structure_definition(IRPtr cur, IRPtr root);
  static void collect_function_definition(IRPtr cur);

  static void collect_simple_variable_defintion_wt(IRPtr cur);
  static void collect_function_definition_wt(IRPtr cur);
  static void collect_structure_definition_wt(IRPtr cur, IRPtr root);

  static bool is_contain_definition(IRPtr cur);
  static bool collect_definition(IRPtr cur);
  static string generate_expression_by_type(int type, IRPtr ir);
  static string generate_expression_by_type_core(int type, IRPtr ir);
  static vector<map<int, vector<string>>> collect_all_var_definition_by_type(
      IRPtr cur);

  static bool simple_fix(IRPtr ir, int type);
  static bool validate(IRPtr &root);
  static bool validate_syntax_only(IRPtr root);
  static bool top_fix(IRPtr root);
  IRPtr locate_mutated_ir(IRPtr root);

  static string generate_definition(string &var_name, int type);
  static string generate_definition(vector<string> &var_name, int type);
  // static bool insert_definition();

  static bool filter_compound_type(map<int, vector<string>> &compound_var_map,
                                   int type);
  static bool filter_function_type(
      map<int, vector<string>> &function_map,
      const map<int, vector<string>> &compound_var_map,
      const map<int, vector<string>> &simple_type, int type);
  static set<int> calc_satisfiable_functions(const set<int> &function_type_set,
                                             const set<int> &available_types);
  static map<int, vector<set<int>>> collect_satisfiable_types(
      IRPtr ir, map<int, vector<string>> &simple_var_map,
      map<int, vector<string>> &compound_var_map,
      map<int, vector<string>> &function_map);
  static set<int> calc_possible_types_from_structure(int structure_type);
  static string function_call_gen_handler(
      map<int, vector<string>> &function_map, IRPtr ir);
  static string structure_member_gen_handler(
      map<int, vector<string>> &compound_var_map, int member_type);
  static void update_pointer_var(map<int, vector<string>> &pointer_var_map,
                                 map<int, vector<string>> &simple_var_map,
                                 map<int, vector<string>> &compound_var_map);

  static string expression_gen_handler(
      int type, map<int, vector<set<int>>> &all_satisfiable_types,
      map<int, vector<string>> &function_map,
      map<int, vector<string>> &compound_var_map, IRPtr ir);
  static OPRule parse_op_rule(string s);
  // static OPRule* get_op_rule_by_op_id(int);
  static bool is_op1(int);
  static bool is_op2(int);
  static int query_result_type(int op, int, int = 0);
  static int get_op_property(int op_id);
  static int gen_counter_, function_gen_counter_, current_fix_scope_;

  static bool insert_definition(int scope_id, int type_id, string var_name);

  // set up internal object
  static void init_internal_obj(string dir_name);
  static void init_one_internal_obj(string filename);
  static void init();
  static void debug();
};

void extract_struct_after_mutation(IRPtr);
}  // namespace typesystem
}  // namespace polyglot

#endif
