#ifndef __IR_H__
#define __IR_H__

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <variant>
#include <vector>

using namespace std;
namespace polyglot {

using IRTYPE = unsigned int;
using StatementID = unsigned long;
using ScopeID = unsigned long;

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
typedef std::shared_ptr<IR> IRPtr;
typedef std::shared_ptr<IR const> IRCPtr;

class IR {
 public:
  IR(IRTYPE type, std::shared_ptr<IROperator> op, IRPtr left, IRPtr right);
  IR(IRTYPE type, std::string str_val);
  IR(IRTYPE type, int int_val);
  IR(IRTYPE type, double f_val);
  IR(IRPtr ir, IRPtr left, IRPtr right);
  IR(const IR& ir) = default;

  bool HasLeftChild() const;
  bool HasRightChild() const;
  bool HasOP() const;
  IRPtr& LeftChild();
  IRPtr& RightChild();
  void SetLeftChild(IRPtr left);
  void SetRightChild(IRPtr right);
  std::shared_ptr<IROperator>& OP();

  // Utils.
  std::vector<IRPtr> GetAllChildren() const;
  std::string ToString() const;

  // Data related.
  bool ContainData() const;
  bool ContainString() const;
  bool ContainInt() const;
  bool ContainFloat() const;
  const std::string& GetString() const;
  void SetString(const std::string& str);
  int GetInt() const;
  void SetInt(int i);
  double GetFloat() const;
  void SetFloat(double f);

  // Semantic related.
  void SetScopeType(ScopeType type);
  ScopeType GetScopeType() const;
  void SetScopeID(ScopeID id);
  ScopeID GetScopeID() const;
  void SetDataFlag(DataFlag flag);
  DataFlag GetDataFlag() const;
  void SetDataType(DataType type);
  DataType GetDataType() const;
  IRTYPE Type() const;  // IRTYPE should not be changed.
  StatementID GetStatementID() const;
  void SetStatementID(StatementID id);

 private:
  std::shared_ptr<IROperator> op = nullptr;
  IRPtr left_child = nullptr;
  IRPtr right_child = nullptr;

  ScopeType scope_type_ = kScopeDefault;
  ScopeID scope_id_;
  DataFlag data_flag_ = kUse;
  DataType data_type_ = kDataWhatever;
  IRTYPE type_;
  StatementID statement_id_;
  std::variant<std::monostate, std::string, int, double> data_;
  void ToStringImpl(std::string& str) const;
};

std::vector<IRPtr> CollectAllIRs(IRPtr root);
size_t GetChildNum(IRPtr root);
bool NeedFixing(const IRPtr&);

[[deprecated("Avoid as many as we can.")]] IRPtr deep_copy(const IRPtr root);
[[deprecated("Should be not needed.")]] IRPtr locate_parent(IRPtr root,
                                                            IRPtr old_ir);

}  // namespace polyglot

#endif
