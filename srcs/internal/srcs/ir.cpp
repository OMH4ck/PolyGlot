#include "ir.h"

#include <cassert>
#include <set>

#include "absl/strings/str_cat.h"
//#include "config_misc.h"
// #include "define.h"
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
      data(str_val),
      op(nullptr),
      left_child(nullptr),
      right_child(nullptr) {
  GEN_NAME();
}

IR::IR(IRTYPE type, int int_val)
    : type(type),
      data(int_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      data_type(kDataWhatever) {
  GEN_NAME();
}

IR::IR(IRTYPE type, double f_val)
    : type(type),
      data(f_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      data_type(kDataWhatever) {
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
    this->op = std::make_shared<IROperator>(ir->op->prefix, ir->op->middle,
                                            ir->op->suffix);
  else {
    this->op = std::make_shared<IROperator>();
  }
  this->left_child = left;
  this->right_child = right;
  this->data = ir->data;
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
  if (ContainData()) {
    if (ContainFloat()) {
      absl::StrAppend(&res, GetFloat());
    } else if (ContainInt()) {
      absl::StrAppend(&res, GetInt());
    } else if (ContainString()) {
      absl::StrAppend(&res, GetString());
    }
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

  if (ir->ContainString() && ir->GetString() == "FIXME") {
    return true;
  }

  return false;
}
