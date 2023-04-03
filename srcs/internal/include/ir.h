#ifndef __IR_H__
#define __IR_H__

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "ast.h"
#include "define.h"

using namespace std;
// HEADER_BEGIN

#define DONTGENNAME 1

enum NODETYPE : unsigned int;
typedef NODETYPE IRTYPE;

class IROperator {
 public:
  IROperator(string prefix = "", string middle = "", string suffix = "")
      : prefix_(prefix), middle_(middle), suffix_(suffix) {}

  string prefix_;
  string middle_;
  string suffix_;
};

class IR;
typedef shared_ptr<IR> IRPtr;

class IR {
 public:
  IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left = nullptr,
     IRPtr right = nullptr, DATATYPE data_type = kDataWhatever);

  IR(IRTYPE type, string str_val, DATATYPE data_type = kDataWhatever,
     int scope = -1, DATAFLAG flag = kUse);
  IR(IRTYPE type, const char *str_val, DATATYPE data_type = kDataWhatever,
     int scope = -1, DATAFLAG flag = kUse);

  IR(IRTYPE type, bool b_val, DATATYPE data_type = kDataWhatever,
     int scope = -1, DATAFLAG flag = kUse);

  IR(IRTYPE type, unsigned long long_val, DATATYPE data_type = kDataWhatever,
     int scope = -1, DATAFLAG flag = kUse);

  IR(IRTYPE type, int int_val, DATATYPE data_type = kDataWhatever,
     int scope = -1, DATAFLAG flag = kUse);

  IR(IRTYPE type, double f_val, DATATYPE data_type = kDataWhatever,
     int scope = -1, DATAFLAG flag = kUse);

  IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
     double f_val, string str_val, string name, unsigned int mutated_times,
     int scope, DATAFLAG flag);

  IR(const IRPtr ir, IRPtr left, IRPtr right);

  union {
    int int_val_;
    unsigned long long_val_ = 0;
    double float_val_;
    bool bool_val_;
  };

  int scope_;
  unsigned long scope_id_;
  DATAFLAG data_flag_ = kUse;
  DATATYPE data_type_ = kDataWhatever;
  int value_type_ = 0;
  IRTYPE type_;
  string name_;

  string str_val_;

  std::shared_ptr<IROperator> op_ = nullptr;
  IRPtr left_ = nullptr;
  IRPtr right_ = nullptr;
  int operand_num_;
  unsigned int mutated_times_ = 0;

  unsigned long id_;
  string to_string();
  string print();

 private:
  void to_string_core(string &str);
};

IRPtr deep_copy(const IRPtr root);

int cal_list_num(IRPtr);

IRPtr locate_define_top_ir(IRPtr, IRPtr);
IRPtr locate_parent(IRPtr root, IRPtr old_ir);

void deep_delete(IRPtr root);

unsigned int calc_node_num(IRPtr root);
bool contain_fixme(IRPtr);

#endif
