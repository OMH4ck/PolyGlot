/*
 * Copyright (c) 2023 OMH4ck
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __IR_H__
#define __IR_H__

#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <variant>
#include <vector>

using namespace std;
namespace polyglot {

constexpr std::string_view FIXMETAG = "FIXME";
using IRTYPE = unsigned int;
using StatementID = unsigned long;
using ScopeID = unsigned long;

enum DataType {
  kDataDefault,
  kFunctionDefinition,
  kFunctionName,
  kFunctionArgument,
  kFunctionReturnType,
  kFunctionBody,
  kClassDefinition,
  kClassName,
  kClassBody,
  kVariableDefinition,
  kVariableName,
  kVariableType,
  kPointer,
  kFixUnit
};

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
  DataType data_type_ = kDataDefault;
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
