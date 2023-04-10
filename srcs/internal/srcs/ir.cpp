#include "ir.h"

#include <cassert>
#include <set>

#include "absl/strings/str_cat.h"
//#include "config_misc.h"
#include "define.h"
#include "utils.h"
//#include "typesystem.h"
//#include "utils.h"
//#include "var_definition.h"

static bool scope_tranlation = false;

static unsigned long id_counter;
// name_ = gen_id_name();
#define GEN_NAME() id_ = id_counter++;

// TODO: FIX THE SCOPE ID.
/*
#define STORE_IR_SCOPE()                          \
  if (scope_tranlation) {                         \
    if (g_scope_current == nullptr) return;       \
    this->scope_id_ = g_scope_current->scope_id_; \
  }
*/

IR::IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
       DATATYPE data_type)
    : type_(type),
      op(op),
      left_child(left),
      right_child(right),
      operand_num_((!!right) + (!!left)),
      data_type(data_type) {
  GEN_NAME();
}

IR::IR(IRTYPE type, string str_val, DATATYPE data_type, ScopeType scope,
       DATAFLAG flag)
    : type_(type),
      str_val_(str_val),
      op(nullptr),
      left_child(nullptr),
      right_child(nullptr),
      operand_num_(0),
      data_type(data_type),
      scope_type(scope),
      data_flag(flag) {
  GEN_NAME();
}

IR::IR(IRTYPE type, const char *str_val, DATATYPE data_type, ScopeType scope,
       DATAFLAG flag)
    : type_(type),
      str_val_(str_val),
      op(nullptr),
      left_child(nullptr),
      right_child(nullptr),
      operand_num_(0),
      data_type(data_type),
      scope_type(scope),
      data_flag(flag) {
  GEN_NAME();
}

IR::IR(IRTYPE type, int int_val, DATATYPE data_type, ScopeType scope,
       DATAFLAG flag)
    : type_(type),
      int_val(int_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      operand_num_(0),
      data_type(kDataWhatever),
      scope_type(scope),
      data_flag(flag) {
  GEN_NAME();
}

IR::IR(IRTYPE type, double f_val, DATATYPE data_type, ScopeType scope,
       DATAFLAG flag)
    : type_(type),
      float_val(f_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      operand_num_(0),
      data_type(kDataWhatever),
      scope_type(scope),
      data_flag(flag) {
  GEN_NAME();
}

IR::IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
       std::optional<double> f_val, std::optional<string> str_val,
       unsigned int mutated_times, ScopeType scope, DATAFLAG flag)
    : type_(type),
      op(op),
      left_child(left),
      right_child(right),
      operand_num_((!!right) + (!!left)),
      str_val_(str_val),
      float_val(f_val),
      mutated_times_(mutated_times),
      data_type(kDataWhatever),
      scope_type(scope),
      data_flag(flag) {}

IR::IR(const IRPtr ir, IRPtr left, IRPtr right) {
  // STORE_IR_SCOPE();
  this->type_ = ir->type_;
  if (ir->op != nullptr)
    this->op = OP3(ir->op->prefix, ir->op->middle, ir->op->suffix);
  else {
    this->op = OP0();
  }
  this->left_child = left;
  this->right_child = right;
  this->str_val_ = ir->str_val_;
  this->int_val = ir->int_val;
  this->float_val = ir->float_val;
  this->data_type = ir->data_type;
  this->scope_type = ir->scope_type;
  this->data_flag = ir->data_flag;
  this->operand_num_ = ir->operand_num_;
  this->mutated_times_ = ir->mutated_times_;
}

IRPtr deep_copy(const IRPtr root) {
  IRPtr left = nullptr, right = nullptr, copy_res;

  if (root->left_child)
    left = deep_copy(
        root->left_child);  // do you have a second version for
                            // deep_copy that accept only one argument?
  if (root->right_child)
    right = deep_copy(root->right_child);  // no I forget to update here

  copy_res = std::make_shared<IR>(root, left, right);

  return copy_res;
}

string IR::to_string() {
  std::string res;
  to_string_core(res);
  trim_string(res);
  return res;
}

void IR::to_string_core(std::string &res) {
  if (float_val.has_value()) {
    absl::StrAppend(&res, float_val.value());
  } else if (int_val.has_value()) {
    absl::StrAppend(&res, int_val.value());
  } else if (str_val_.has_value()) {
    absl::StrAppend(&res, str_val_.value());
  } else {
    if (op != nullptr) {
      absl::StrAppend(&res, op->prefix, " ");
    }
    if (left_child != nullptr) {
      left_child->to_string_core(res);
      absl::StrAppend(&res, " ");
    }
    if (op != nullptr) {
      absl::StrAppend(&res, op->middle, " ");
    }
    if (right_child != nullptr) {
      right_child->to_string_core(res);
      absl::StrAppend(&res, " ");
    }
    if (op != nullptr) {
      absl::StrAppend(&res, op->suffix);
    }
  }
}

void IR::collect_children_impl(std::vector<IRPtr> &res) {
  if (left_child != nullptr) {
    left_child->collect_children_impl(res);
    res.push_back(left_child);
  }
  if (right_child != nullptr) {
    right_child->collect_children_impl(res);
    res.push_back(right_child);
  }
}

std::vector<IRPtr> IR::collect_children() {
  std::vector<IRPtr> res;
  collect_children_impl(res);
  return res;
}

std::vector<IRPtr> collect_all_ir(IRPtr root) {
  auto res = root->collect_children();
  res.push_back(root);
  return res;
}

static int cal_list_num_dfs(IRPtr ir, IRTYPE type) {
  int res = 0;

  if (ir->type_ == type) res++;

  if (ir->left_child) res += cal_list_num_dfs(ir->left_child, type);
  if (ir->right_child) res += cal_list_num_dfs(ir->right_child, type);

  return res;
}

void trim_list_to_num(IRPtr ir, int num) { return; }

int cal_list_num(IRPtr ir) { return cal_list_num_dfs(ir, ir->type_); }

IRPtr locate_parent(IRPtr root, IRPtr old_ir) {
  if (root->left_child == old_ir || root->right_child == old_ir) return root;

  if (root->left_child != nullptr)
    if (auto res = locate_parent(root->left_child, old_ir)) return res;
  if (root->right_child != nullptr)
    if (auto res = locate_parent(root->right_child, old_ir)) return res;

  return nullptr;
}

IRPtr locate_define_top_ir(IRPtr root, IRPtr ir) {
  static std::set<IRTYPE> define_top_set;
  static bool is_init = false;

  /* FIXME
  if(is_init == false){
      __INIT_TOP_DEFINE_SET__
  }
  */
  while (auto parent = locate_parent(root, ir)) {
    if (define_top_set.find(parent->type_) != define_top_set.end()) {
      return parent;
    }
    ir = parent;
  }
  cout << "root: " << root->to_string() << endl;
  cout << "find: " << ir->to_string() << endl;
  assert(0);
  return nullptr;
}

void set_scope_translation_flag(bool flag) {
  scope_tranlation = flag;
  if (flag == false) {
    id_counter = 0;
  }
}
bool get_scope_translation_flag() { return scope_tranlation; }

unsigned int calc_node_num(IRPtr root) {
  unsigned int res = 0;
  if (root->left_child) res += calc_node_num(root->left_child);
  if (root->right_child) res += calc_node_num(root->right_child);

  return res + 1;
}

bool contain_fixme(IRPtr ir) {
  bool res = false;
  if (ir->left_child || ir->right_child) {
    if (ir->left_child) {
      res = res || contain_fixme(ir->left_child);
    }
    if (ir->right_child) {
      res = res || contain_fixme(ir->right_child);
    }
    return res;
  }

  if (ir->str_val_.has_value() && ir->str_val_ == "FIXME") {
    return true;
  }

  return false;
}
