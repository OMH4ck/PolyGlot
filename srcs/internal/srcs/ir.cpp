#include "ir.h"

#include <cassert>

#include "absl/strings/str_cat.h"
#include "config_misc.h"
#include "define.h"
//#include "typesystem.h"
//#include "utils.h"
#include "var_definition.h"

static bool scope_tranlation = false;

static unsigned long id_counter;
// name_ = gen_id_name();
#define GEN_NAME() id_ = id_counter++;

// TODO: Put this back to STORE_IR_SCOPE()
// g_scope_current->v_ir_set_.push_back(this);   \

#define STORE_IR_SCOPE()                          \
  if (scope_tranlation) {                         \
    if (g_scope_current == nullptr) return;       \
    this->scope_id_ = g_scope_current->scope_id_; \
  }

IR::IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
       DATATYPE data_type)
    : type_(type),
      op_(op),
      left_(left),
      right_(right),
      operand_num_((!!right) + (!!left)),
      data_type_(data_type) {
  GEN_NAME();
  STORE_IR_SCOPE();
}

IR::IR(IRTYPE type, string str_val, DATATYPE data_type, int scope,
       DATAFLAG flag)
    : type_(type),
      str_val_(str_val),
      op_(nullptr),
      left_(nullptr),
      right_(nullptr),
      operand_num_(0),
      data_type_(data_type),
      scope_(scope),
      data_flag_(flag) {
  GEN_NAME();
  STORE_IR_SCOPE();
}

IR::IR(IRTYPE type, const char *str_val, DATATYPE data_type, int scope,
       DATAFLAG flag)
    : type_(type),
      str_val_(str_val),
      op_(nullptr),
      left_(nullptr),
      right_(nullptr),
      operand_num_(0),
      data_type_(data_type),
      scope_(scope),
      data_flag_(flag) {
  GEN_NAME();
  STORE_IR_SCOPE();
}

IR::IR(IRTYPE type, bool b_val, DATATYPE data_type, int scope, DATAFLAG flag)
    : type_(type),
      bool_val_(b_val),
      left_(nullptr),
      op_(nullptr),
      right_(nullptr),
      operand_num_(0),
      data_type_(kDataWhatever),
      scope_(scope),
      data_flag_(flag) {
  GEN_NAME();
  STORE_IR_SCOPE();
}

IR::IR(IRTYPE type, unsigned long long_val, DATATYPE data_type, int scope,
       DATAFLAG flag)
    : type_(type),
      long_val_(long_val),
      left_(nullptr),
      op_(nullptr),
      right_(nullptr),
      operand_num_(0),
      data_type_(kDataWhatever),
      scope_(scope),
      data_flag_(flag) {
  GEN_NAME();
  STORE_IR_SCOPE();
}

IR::IR(IRTYPE type, int int_val, DATATYPE data_type, int scope, DATAFLAG flag)
    : type_(type),
      int_val_(int_val),
      left_(nullptr),
      op_(nullptr),
      right_(nullptr),
      operand_num_(0),
      data_type_(kDataWhatever),
      scope_(scope),
      data_flag_(flag) {
  GEN_NAME();
  STORE_IR_SCOPE();
}

IR::IR(IRTYPE type, double f_val, DATATYPE data_type, int scope, DATAFLAG flag)
    : type_(type),
      float_val_(f_val),
      left_(nullptr),
      op_(nullptr),
      right_(nullptr),
      operand_num_(0),
      data_type_(kDataWhatever),
      scope_(scope),
      data_flag_(flag) {
  GEN_NAME();
  STORE_IR_SCOPE();
}

IR::IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
       double f_val, string str_val, string name, unsigned int mutated_times,
       int scope, DATAFLAG flag)
    : type_(type),
      op_(op),
      left_(left),
      right_(right),
      operand_num_((!!right) + (!!left)),
      name_(name),
      str_val_(str_val),
      float_val_(f_val),
      mutated_times_(mutated_times),
      data_type_(kDataWhatever),
      scope_(scope),
      data_flag_(flag) {
  STORE_IR_SCOPE();
}

IR::IR(const IRPtr ir, IRPtr left, IRPtr right) {
  // STORE_IR_SCOPE();
  this->type_ = ir->type_;
  if (ir->op_ != nullptr)
    this->op_ = OP3(ir->op_->prefix_, ir->op_->middle_, ir->op_->suffix_);
  else {
    this->op_ = OP0();
  }
  this->left_ = left;
  this->right_ = right;
  this->str_val_ = ir->str_val_;
  this->long_val_ = ir->long_val_;
  this->data_type_ = ir->data_type_;
  this->scope_ = ir->scope_;
  this->data_flag_ = ir->data_flag_;
  this->name_ = ir->name_;
  this->operand_num_ = ir->operand_num_;
  this->mutated_times_ = ir->mutated_times_;
}

IRPtr deep_copy(const IRPtr root) {
  IRPtr left = nullptr, right = nullptr, copy_res;

  if (root->left_)
    left = deep_copy(root->left_);  // do you have a second version for
                                    // deep_copy that accept only one argument?
  if (root->right_)
    right = deep_copy(root->right_);  // no I forget to update here

  copy_res = std::make_shared<IR>(root, left, right);

  return copy_res;
}

string IR::print() {
  string res;
  res = this->name_ + " = ";
  if (!this->str_val_.empty()) {
    res += "str(" + this->str_val_ + ")";
    return res;
  } else if (this->int_val_) {
    res += "int(" + std::to_string(this->int_val_) + ")";
    return res;
  }
  if (this->op_) res += this->op_->prefix_;
  if (this->left_) res += this->left_->name_;
  if (this->op_) res += this->op_->middle_;
  if (this->right_) res += this->right_->name_;
  if (this->op_) res += this->op_->suffix_;

  return res;
}

string IR::to_string() {
  std::string res;
  to_string_core(res);
  trim_string(res);
  return res;
}

void IR::to_string_core(std::string &res) {
  if (polyglot::gen::Configuration::GetInstance().IsFloatLiteral(type_)) {
    absl::StrAppend(&res, float_val_);
  } else if (polyglot::gen::Configuration::GetInstance().IsIntLiteral(type_)) {
    absl::StrAppend(&res, int_val_);
  } else if (polyglot::gen::Configuration::GetInstance().IsStringLiteral(
                 type_)) {
    absl::StrAppend(&res, str_val_);
  } else {
    if (op_ != nullptr) {
      absl::StrAppend(&res, op_->prefix_, " ");
    }
    if (left_ != nullptr) {
      left_->to_string_core(res);
      absl::StrAppend(&res, " ");
    }
    if (op_ != nullptr) {
      absl::StrAppend(&res, op_->middle_, " ");
    }
    if (right_ != nullptr) {
      right_->to_string_core(res);
      absl::StrAppend(&res, " ");
    }
    if (op_ != nullptr) {
      absl::StrAppend(&res, op_->suffix_);
    }
  }
}

void IR::collect_children_impl(std::vector<IRPtr> &res) {
  if (left_ != nullptr) {
    left_->collect_children_impl(res);
    res.push_back(left_);
  }
  if (right_ != nullptr) {
    right_->collect_children_impl(res);
    res.push_back(right_);
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

  if (ir->left_) res += cal_list_num_dfs(ir->left_, type);
  if (ir->right_) res += cal_list_num_dfs(ir->right_, type);

  return res;
}

void trim_list_to_num(IRPtr ir, int num) { return; }

int cal_list_num(IRPtr ir) { return cal_list_num_dfs(ir, ir->type_); }

IRPtr locate_parent(IRPtr root, IRPtr old_ir) {
  if (root->left_ == old_ir || root->right_ == old_ir) return root;

  if (root->left_ != nullptr)
    if (auto res = locate_parent(root->left_, old_ir)) return res;
  if (root->right_ != nullptr)
    if (auto res = locate_parent(root->right_, old_ir)) return res;

  return nullptr;
}

IRPtr locate_define_top_ir(IRPtr root, IRPtr ir) {
  static set<IRTYPE> define_top_set;
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
  if (root->left_) res += calc_node_num(root->left_);
  if (root->right_) res += calc_node_num(root->right_);

  return res + 1;
}

bool contain_fixme(IRPtr ir) {
  bool res = false;
  if (ir->left_ || ir->right_) {
    if (ir->left_) {
      res = res || contain_fixme(ir->left_);
    }
    if (ir->right_) {
      res = res || contain_fixme(ir->right_);
    }
    return res;
  }

  if (!ir->str_val_.empty() && ir->str_val_ == "FIXME") {
    return true;
  }

  return false;
}
