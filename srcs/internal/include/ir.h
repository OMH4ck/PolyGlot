#ifndef __IR_H__
#define __IR_H__

#include <concepts>
#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <vector>

#include "ast.h"
#include "define.h"

using namespace std;
// HEADER_BEGIN

#define DONTGENNAME 1

enum ScopeType {
  kScopeDefault,
  kScopeGlobal,
  kScopeFunction,
  kScopeStatement,
  kScopeClass,
};

using IRTYPE = unsigned int;
struct IROperator {
  std::string prefix;
  std::string middle;
  std::string suffix;

  IROperator(const std::string& prefix, const std::string& middle,
             const std::string& suffix)
      : prefix(prefix), middle(middle), suffix(suffix) {}
  IROperator() = default;
};

class IR;
typedef shared_ptr<IR> IRPtr;
typedef shared_ptr<const IR> IRCPtr;

class IR {
 public:
  IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left = nullptr,
     IRPtr right = nullptr, DATATYPE data_type = kDataWhatever);

  IR(IRTYPE type, string str_val, DATATYPE data_type = kDataWhatever,
     ScopeType scope = kScopeDefault, DATAFLAG flag = kUse);
  IR(IRTYPE type, const char* str_val, DATATYPE data_type = kDataWhatever,
     ScopeType scope = kScopeDefault, DATAFLAG flag = kUse);

  IR(IRTYPE type, bool b_val, DATATYPE data_type = kDataWhatever,
     ScopeType scope = kScopeDefault, DATAFLAG flag = kUse);

  IR(IRTYPE type, unsigned long long_val, DATATYPE data_type = kDataWhatever,
     ScopeType scope = kScopeDefault, DATAFLAG flag = kUse);

  IR(IRTYPE type, int int_val, DATATYPE data_type = kDataWhatever,
     ScopeType scope = kScopeDefault, DATAFLAG flag = kUse);

  IR(IRTYPE type, double f_val, DATATYPE data_type = kDataWhatever,
     ScopeType scope = kScopeDefault, DATAFLAG flag = kUse);

  IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
     std::optional<double> f_val, std::optional<string> str_val,
     unsigned int mutated_times, ScopeType scope, DATAFLAG flag);

  IR(const IRPtr ir, IRPtr left, IRPtr right);

  std::vector<IRPtr> collect_children();

  std::optional<double> float_val;
  std::optional<int> int_val;

  ScopeType scope_type;
  unsigned long scope_id;
  DATAFLAG data_flag = kUse;
  DATATYPE data_type = kDataWhatever;
  int value_type_ = 0;
  IRTYPE type_;

  std::optional<string> str_val_;

  std::shared_ptr<IROperator> op = nullptr;
  IRPtr left_child = nullptr;
  IRPtr right_child = nullptr;
  int operand_num_;
  unsigned int mutated_times_ = 0;

  unsigned long id_;
  string to_string();
  string print();

 private:
  void collect_children_impl(std::vector<IRPtr>& children);
  void to_string_core(string& str);
};

IRPtr deep_copy(const IRPtr root);

std::vector<IRPtr> collect_all_ir(IRPtr root);
int cal_list_num(IRPtr);

IRPtr locate_define_top_ir(IRPtr, IRPtr);
IRPtr locate_parent(IRPtr root, IRPtr old_ir);

unsigned int calc_node_num(IRPtr root);
bool contain_fixme(IRPtr);

#endif
