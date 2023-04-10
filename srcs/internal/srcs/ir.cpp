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

static unsigned long id_counter;
#define GEN_NAME() id = id_counter++;

IR::IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right)
    : type(type), op(op), left_child(left), right_child(right) {
  GEN_NAME();
}

IR::IR(IRTYPE type, string str_val)
    : type(type),
      str_val(str_val),
      op(nullptr),
      left_child(nullptr),
      right_child(nullptr) {
  GEN_NAME();
}

IR::IR(IRTYPE type, int int_val)
    : type(type),
      int_val(int_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      data_type(kDataWhatever) {
  GEN_NAME();
}

IR::IR(IRTYPE type, double f_val, DATATYPE data_type, ScopeType scope,
       DATAFLAG flag)
    : type(type),
      float_val(f_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      data_type(kDataWhatever),
      scope_type(scope),
      data_flag(flag) {
  GEN_NAME();
}

/*
IR::IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
       std::optional<double> f_val, std::optional<string> str_val,
       ScopeType scope, DATAFLAG flag)
    : type(type),
      op(op),
      left_child(left),
      right_child(right),
      str_val(str_val),
      float_val(f_val),
      data_type(kDataWhatever),
      scope_type(scope),
      data_flag(flag) {}
*/

IR::IR(const IRPtr ir, IRPtr left, IRPtr right) {
  // STORE_IR_SCOPE();
  this->type = ir->type;
  if (ir->op != nullptr)
    this->op = OP3(ir->op->prefix, ir->op->middle, ir->op->suffix);
  else {
    this->op = OP0();
  }
  this->left_child = left;
  this->right_child = right;
  this->str_val = ir->str_val;
  this->int_val = ir->int_val;
  this->float_val = ir->float_val;
  this->data_type = ir->data_type;
  this->scope_type = ir->scope_type;
  this->data_flag = ir->data_flag;
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
  } else if (str_val.has_value()) {
    absl::StrAppend(&res, str_val.value());
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

  if (ir->type == type) res++;

  if (ir->left_child) res += cal_list_num_dfs(ir->left_child, type);
  if (ir->right_child) res += cal_list_num_dfs(ir->right_child, type);

  return res;
}

void trim_list_to_num(IRPtr ir, int num) { return; }

int cal_list_num(IRPtr ir) { return cal_list_num_dfs(ir, ir->type); }

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
    if (define_top_set.find(parent->type) != define_top_set.end()) {
      return parent;
    }
    ir = parent;
  }
  cout << "root: " << root->to_string() << endl;
  cout << "find: " << ir->to_string() << endl;
  assert(0);
  return nullptr;
}

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

  if (ir->str_val.has_value() && ir->str_val == "FIXME") {
    return true;
  }

  return false;
}
