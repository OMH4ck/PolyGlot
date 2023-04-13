#include "ir.h"

#include <cassert>
#include <set>

#include "absl/strings/str_cat.h"
// #include "config_misc.h"
//  #include "define.h"
#include "utils.h"
// #include "typesystem.h"
// #include "utils.h"
// #include "var_definition.h"

static unsigned long id_counter;
#define GEN_NAME() statement_id_ = id_counter++;

namespace polyglot {

IR::IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right)
    : type_(type), op(op), left_child(left), right_child(right) {
  GEN_NAME();
}

IR::IR(IRTYPE type, string str_val)
    : type_(type),
      data_(str_val),
      op(nullptr),
      left_child(nullptr),
      right_child(nullptr) {
  GEN_NAME();
}

IR::IR(IRTYPE type, int int_val)
    : type_(type),
      data_(int_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      data_type_(kDataWhatever) {
  GEN_NAME();
}

IR::IR(IRTYPE type, double f_val)
    : type_(type),
      data_(f_val),
      left_child(nullptr),
      op(nullptr),
      right_child(nullptr),
      data_type_(kDataWhatever) {
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
  this->type_ = ir->type_;
  if (ir->op != nullptr)
    this->op = std::make_shared<IROperator>(ir->op->prefix, ir->op->middle,
                                            ir->op->suffix);
  else {
    this->op = std::make_shared<IROperator>();
  }
  this->left_child = left;
  this->right_child = right;
  this->data_ = ir->data_;
  this->data_type_ = ir->data_type_;
  this->scope_type_ = ir->scope_type_;
  this->data_flag_ = ir->data_flag_;
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

string IR::ToString() const {
  std::string res;
  ToStringImpl(res);
  trim_string(res);
  return res;
}

void IR::ToStringImpl(std::string &res) const {
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
      left_child->ToStringImpl(res);
      absl::StrAppend(&res, " ");
    }
    if (op != nullptr) {
      absl::StrAppend(&res, op->middle, " ");
    }
    if (right_child != nullptr) {
      right_child->ToStringImpl(res);
      absl::StrAppend(&res, " ");
    }
    if (op != nullptr) {
      absl::StrAppend(&res, op->suffix);
    }
  }
}

std::vector<IRPtr> IR::GetAllChildren() const {
  std::vector<IRPtr> res;
  if (left_child != nullptr) {
    auto left_res = left_child->GetAllChildren();
    res.insert(res.end(), left_res.begin(), left_res.end());
    res.push_back(left_child);
  }
  if (right_child != nullptr) {
    auto right_res = right_child->GetAllChildren();
    res.insert(res.end(), right_res.begin(), right_res.end());
    res.push_back(right_child);
  }
  return res;
}

bool IR::ContainData() const {
  return !std::holds_alternative<std::monostate>(data_);
}
bool IR::ContainString() const {
  return std::holds_alternative<std::string>(data_);
}
bool IR::ContainInt() const { return std::holds_alternative<int>(data_); }
bool IR::ContainFloat() const { return std::holds_alternative<double>(data_); }

std::string IR::GetString() const { return std::get<std::string>(data_); }
int IR::GetInt() const { return std::get<int>(data_); }
double IR::GetFloat() const { return std::get<double>(data_); }
void IR::SetString(const std::string &str) { data_ = str; }
void IR::SetInt(int i) { data_ = i; }
void IR::SetFloat(double f) { data_ = f; }

void IR::SetScopeType(ScopeType type) { scope_type_ = type; }
ScopeType IR::GetScopeType() const { return scope_type_; }
void IR::SetDataFlag(DataFlag flag) { data_flag_ = flag; }
DataFlag IR::GetDataFlag() const { return data_flag_; }
void IR::SetDataType(DataType type) { data_type_ = type; }
DataType IR::GetDataType() const { return data_type_; }
void IR::SetScopeID(ScopeID id) { scope_id_ = id; }
ScopeID IR::GetScopeID() const { return scope_id_; }
IRTYPE IR::Type() const { return type_; }
void IR::SetStatementID(StatementID sid) { this->statement_id_ = sid; }
StatementID IR::GetStatementID() const { return statement_id_; }

std::vector<IRPtr> CollectAllIRs(IRPtr root) {
  auto res = root->GetAllChildren();
  res.push_back(root);
  return res;
}

void trim_list_to_num(IRPtr ir, int num) { return; }

IRPtr locate_parent(IRPtr root, IRPtr old_ir) {
  if (root->left_child == old_ir || root->right_child == old_ir) return root;

  if (root->left_child != nullptr)
    if (auto res = locate_parent(root->left_child, old_ir)) return res;
  if (root->right_child != nullptr)
    if (auto res = locate_parent(root->right_child, old_ir)) return res;

  return nullptr;
}

size_t GetChildNum(IRPtr root) {
  unsigned int res = 0;
  if (root->left_child) res += GetChildNum(root->left_child);
  if (root->right_child) res += GetChildNum(root->right_child);

  return res + 1;
}

bool NeedFixing(const IRPtr &ir) {
  bool res = false;
  if (ir->left_child || ir->right_child) {
    if (ir->left_child) {
      res = res || NeedFixing(ir->left_child);
    }
    if (ir->right_child) {
      res = res || NeedFixing(ir->right_child);
    }
    return res;
  }

  if (ir->ContainString() && ir->GetString() == "FIXME") {
    return true;
  }

  return false;
}
}  // namespace polyglot
