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

using namespace std;
// HEADER_BEGIN

using IRTYPE = unsigned int;

enum DataType {
  kDataWhatever,
  kDataFunctionType,
  kDataClassType,
  kDataInitiator,
  kDataFunctionBody,
  kDataFunctionArg,
  kDataFunctionReturnValue,
  kDataFunctionName,
  kDataVarDefine,
  kDataClassName,
  kDataPointer,
  kDataStructBody,
  kDataDeclarator,
  kDataVarType,
  kDataFixUnit,
  kDataVarName,
  kDataVarScope,
  kDataDefault
};

enum DataFlag {
  kDefine = 0x1,
  kUndefine = 0x2,
  kGlobal = 0x4,
  kUse = 0x8,
  kMapToClosestOne = 0x10,
  kMapToAll = 0x20,
  kReplace = 0x40,
  kAlias = 0x80,
  kNoSplit = 0x100,
  kClassDefine = 0x200,
  kFunctionDefine = 0x400,
  kInsertable = 0x800,
};

#define isDefine(a) ((a)&kDefine)
#define isUndefine(a) ((a)&kUndefine)
#define isGlobal(a) ((a)&kGlobal)
#define isUse(a) ((a)&kUse)
#define isMapToClosestOne(a) ((a)&kMapToClosestOne)
#define isMapToAll(a) ((a)&kMapToAll)
#define isReplace(a) ((a)&kReplace)
#define isAlias(a) ((a)&kAlias)
#define isNoSplit(a) ((a)&kNoSplit)
#define isClassDefine(a) ((a)&kClassDefine)
#define isFunctionDefine(a) ((a)&kFunctionDefine)
#define isInsertable(a) ((a)&kInsertable)

enum ScopeType {
  kScopeDefault,
  kScopeGlobal,
  kScopeFunction,
  kScopeStatement,
  kScopeClass,
};

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
  IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right);

  IR(IRTYPE type, string str_val);

  IR(IRTYPE type, int int_val);

  IR(IRTYPE type, double f_val, DataType data_type, ScopeType scope,
     DataFlag flag);

  /*
  IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right,
     std::optional<double> f_val, std::optional<string> str_val,
     ScopeType scope, DATAFLAG flag);
  */

  IR(const IR& ir) = default;

  IR(const IRPtr ir, IRPtr left, IRPtr right);

  std::vector<IRPtr> collect_children();

  // TODO: Use std::variant
  std::optional<double> float_val;
  std::optional<int> int_val;
  std::optional<string> str_val;

  ScopeType scope_type = kScopeDefault;
  unsigned long scope_id;
  DataFlag data_flag = kUse;
  DataType data_type = kDataWhatever;
  IRTYPE type;

  std::shared_ptr<IROperator> op = nullptr;
  IRPtr left_child = nullptr;
  IRPtr right_child = nullptr;

  unsigned long id;
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
