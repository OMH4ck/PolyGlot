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

#ifndef __TEST__
#define __TEST__

#include <map>
#include <memory>
#include <set>
#include <unordered_set>
#include <vector>

#include "ir.h"

namespace polyglot {

class Frontend;

namespace config {
bool ConfigFileValidate(std::string_view config_file_path);

class Configuration {
 public:
  // This is a singleton class
  static bool Initialize(std::string_view config_file_path);
  static const Configuration& GetInstance();

  bool IsWeakType() const;
  // IRTYPE GetFixIRType() const;
  // std::set<IRTYPE> GetFunctionArgNodeType() const;
  // std::set<IRTYPE> GetBasicUnits() const;

  std::string GetBuiltInObjectFilePath() const;

  // std::vector<string> GetOpRules() const;

  // std::vector<std::pair<std::string, std::string>> GetConvertableTypes()
  // const;

  // std::vector<std::pair<std::string, std::string>> GetConvertChain() const;

  std::vector<std::string> GetBasicTypeStr() const;

  // std::string LiteralTypeToString(IRTYPE type);

  /*
  bool IsFloatLiteral(IRTYPE type) const;
  bool IsIntLiteral(IRTYPE type) const;
  bool IsStringLiteral(IRTYPE type) const;
  */
  // bool IsIdentifier(IRTYPE type);

  std::string GetInitDirPath() const;
  bool SyntaxOnly() const { return syntax_only_; }

 private:
  static Configuration& GetInstanceImpl() {
    static Configuration instance;
    return instance;
  }

  bool Init(std::string_view config_file_path);
  bool IsInit() const { return is_init_; }
  Configuration() {}
  Configuration(const Configuration&) = delete;
  Configuration& operator=(const Configuration&) = delete;

  bool is_init_;
  bool syntax_only_;
  bool is_weak_type_;
  IRTYPE fix_ir_type_;
  std::string init_dir_path_;
  std::set<IRTYPE> function_arg_node_type_;
  std::unordered_set<IRTYPE> float_literal_type_;
  std::unordered_set<IRTYPE> int_literal_type_;
  std::unordered_set<IRTYPE> string_literal_type_;
  std::set<IRTYPE> basic_units_;
  std::string built_in_object_file_path_;
  std::vector<std::string> basic_types_;
  std::vector<std::pair<std::string, std::string>> convertable_type_map_;
  std::vector<std::pair<std::string, std::string>> convert_chain_;
  std::vector<string> op_rules_;
  std::shared_ptr<Frontend> frontend_;
};
}  // namespace config
}  // namespace polyglot
#endif
