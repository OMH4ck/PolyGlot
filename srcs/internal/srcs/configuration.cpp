// Copyright (c) 2023 OMH4ck
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "configuration.h"

#include <cassert>
#include <filesystem>
#include <set>
#include <string>

#include "absl/strings/str_join.h"
#include "frontend.h"
#include "spdlog/spdlog.h"
#include "typesystem.h"
#include "var_definition.h"
#include "yaml-cpp/yaml.h"

namespace {
bool IsNodeBool(const YAML::Node &node) {
  return node.IsScalar() &&
         (!node.Scalar().compare("true") || !node.Scalar().compare("false"));
}
}  // namespace
namespace polyglot {

namespace config {

bool ConfigFileValidate(std::string_view config_file_path) {
  YAML::Node config;

  try {
    config = YAML::LoadFile(config_file_path.data());
  } catch (YAML::BadFile &e) {
    SPDLOG_ERROR("Config file {} not found or invalid", config_file_path);
    return false;
  }

  // If weaktype is not bool
  if (!config["IsWeakType"] || !IsNodeBool(config["IsWeakType"])) {
    SPDLOG_ERROR("Config file {} is missing IsWeakType", config_file_path);
    return false;
  }

  // If InitFileDir is not string
  if (!config["InitFileDir"] || !config["InitFileDir"].IsScalar()) {
    SPDLOG_ERROR("Config file {} has invalid InitFileDir", config_file_path);
    return false;
  }

  // If InitFileDir not a valid path
  if (!std::filesystem::exists(config["InitFileDir"].as<std::string>())) {
    SPDLOG_ERROR("Init file dir {} is not a valid path",
                 config["InitFileDir"].as<std::string>());
    return false;
  }

  // Check whether BasicTypes is valid
  if (!config["BasicTypes"] || !config["BasicTypes"].IsSequence()) {
    SPDLOG_ERROR("Config file {} has invalid BasicTypes", config_file_path);
    return false;
  }

  return true;
}

const Configuration &Configuration::GetInstance() {
  auto &instance = GetInstanceImpl();
  assert(instance.IsInit() && "Configuration is not initialized");
  return instance;
}

bool Configuration::Initialize(std::string_view config_file_path) {
  return GetInstanceImpl().Init(config_file_path);
}

bool Configuration::Init(std::string_view config_file_path) {
  try {
    YAML::Node config = YAML::LoadFile(config_file_path.data());
    if (!ConfigFileValidate(config_file_path)) {
      return false;
    }
    // TODO: Fix this.
    frontend_ = std::make_unique<AntlrFrontend>();
    is_weak_type_ = config["IsWeakType"].as<bool>();
    /*
    if (config["FixIRType"]) {
      fix_ir_type_ =
          frontend_->GetIRTypeByStr(config["FixIRType"].as<std::string>());
      assert(fix_ir_type_ != frontend_->GetUnknownType() &&
             "FixIRType is not valid");
    } else {
      if (!is_weak_type_) {
        assert(false);
      }
    }
    */
    init_dir_path_ = config["InitFileDir"].as<std::string>();

    /*
    if (config["FunctionArgumentUnit"]) {
      function_arg_node_type_.insert(frontend_->GetIRTypeByStr(
          config["FunctionArgumentUnit"].as<std::string>()));
      assert(function_arg_node_type_.find(frontend_->GetUnknownType()) ==
                 function_arg_node_type_.end() &&
             "FunctionArgumentUnit is not valid");
    } else {
      if (!is_weak_type_) {
        assert(false);
      }
      function_arg_node_type_.insert(frontend_->GetUnknownType());
    }
    */
    /*
    if (config["StringLiteralType"]) {
      // Ensure it is an array
      assert(config["StringLiteralType"].IsSequence() &&
             "StringLiteralType is not an array");
      // Iterate through the array
      for (const auto &type : config["StringLiteralType"]) {
        string_literal_type_.insert(
            frontend_->GetIRTypeByStr(type.as<std::string>()));
      }
    } else {
      // TODO: Fix the hardcoded string literal type
      string_literal_type_.insert(frontend_->GetStringLiteralType());
      string_literal_type_.insert(frontend_->GetIdentifierType());
    }
    if (config["FloatLiteralType"]) {
      // Ensure it is an array
      assert(config["FloatLiteralType"].IsSequence() &&
             "FloatLiteralType is not an array");
      // Iterate through the array
      for (const auto &type : config["FloatLiteralType"]) {
        float_literal_type_.insert(
            frontend_->GetIRTypeByStr(type.as<std::string>()));
      }
    } else {
      float_literal_type_.insert(frontend_->GetFloatLiteralType());
    }
    if (config["IntLiteralType"]) {
      // Ensure it is an array
      assert(config["IntLiteralType"].IsSequence() &&
             "IntLiteralType is not an array");
      // Iterate through the array
      for (const auto &type : config["IntLiteralType"]) {
        int_literal_type_.insert(
            frontend_->GetIRTypeByStr(type.as<std::string>()));
      }
    } else {
      int_literal_type_.insert(frontend_->GetIntLiteralType());
    }
    if (config["BasicUnits"]) {
      // Ensure it is an array
      assert(config["BasicUnits"].IsSequence() && "BasicUnit is not an array");
      // Iterate through the array
      for (const auto &type : config["BasicUnits"]) {
        basic_units_.insert(frontend_->GetIRTypeByStr(type.as<std::string>()));
      }
    } else {
      assert(false);
      return false;
    }
    */

    // This is optional.
    if (config["BuiltinObjFile"]) {
      built_in_object_file_path_ = config["BuiltinObjFile"].as<std::string>();
    } else {
      assert(false);
    }
    if (config["SyntaxOnly"]) {
      syntax_only_ = config["SyntaxOnly"].as<bool>();
    } else {
      syntax_only_ = false;
    }

    for (const auto &type : config["BasicTypes"]) {
      basic_types_.push_back(type.as<std::string>());
    }

    /*
    if (config["ConvertableTypes"]) {
      // Ensure it is an array
      assert(config["ConvertableTypes"].IsSequence() &&
             "ConvertableTypes is not an array");
      // Iterate through the array
      for (const auto &type : config["ConvertableTypes"]) {
        assert(type["from"].IsDefined() && "From is not defined");
        assert(type["to"].IsDefined() && "To is not defined");
        convertable_type_map_.push_back(
            {type["from"].as<std::string>(), type["to"].as<std::string>()});
      }
    } else {
      // TODO: skip for now. Should fix it later.
      // assert(false);
    }
    if (config["ConvertChain"]) {
      // Ensure it is an array
      assert(config["ConvertChain"].IsSequence() &&
             "ConvertChain is not an array");
      // Iterate through the array
      for (const auto &type : config["ConvertChain"]) {
        assert(type["from"].IsDefined() && "From is not defined");
        assert(type["to"].IsDefined() && "To is not defined");
        convert_chain_.push_back(
            {type["from"].as<std::string>(), type["to"].as<std::string>()});
      }
    } else {
      assert(false);
    }
    */
    /*
    if (config["OPRules"]) {
      // Ensure it is an array
      assert(config["OPRules"].IsSequence() && "OPRules is not an array");
      // Iterate through the array
      for (const auto &type : config["OPRules"]) {
        std::vector<std::string> all_components;
        assert(type["OperandNum"].IsDefined() && "OperandNum is not defined");
        all_components.push_back(type["OperandNum"].as<std::string>());
        assert(type["Operator"].IsDefined() && "Operator is not defined");
        for (const auto &op : type["Operator"]) {
          all_components.push_back(op.as<std::string>());
        }
        assert(type["OperandLeftType"].IsDefined() &&
               "OperandLeftType is not defined");
        all_components.push_back(type["OperandLeftType"].as<std::string>());
        if (type["OperandNum"].as<int>() == 2) {
          assert(type["OperandRightType"].IsDefined() &&
                 "OperandRightType is not defined");
          all_components.push_back(type["OperandRightType"].as<std::string>());
        }
        assert(type["ResultType"].IsDefined() && "ResultType is not defined");
        all_components.push_back(type["ResultType"].as<std::string>());
        assert(type["InferDirection"].IsDefined() &&
               "InferDirection is not defined");
        all_components.push_back(type["InferDirection"].as<std::string>());
        for (auto &property : type["Property"]) {
          all_components.push_back(property.as<std::string>());
        }
        op_rules_.push_back(absl::StrJoin(all_components, " # "));
      }
    } else {
      assert(false);
    }
    for (const auto &op_rule : op_rules_) {
      std::cout << "\"" << op_rule << "\", " << std::endl;
    }
    */

    return is_init_ = true;
  } catch (YAML::BadFile &e) {
    std::cerr << "Cannot find config file: " << config_file_path << std::endl;
    return false;
  }
}

bool Configuration::IsWeakType() const { return is_weak_type_; }

/*
IRTYPE Configuration::GetFixIRType() const { return fix_ir_type_; }
std::set<IRTYPE> Configuration::GetFunctionArgNodeType() const {
  return function_arg_node_type_;
}

std::set<IRTYPE> Configuration::GetBasicUnits() const { return basic_units_; }

std::string Configuration::GetBuiltInObjectFilePath() const {
  return built_in_object_file_path_;
}

std::vector<string> Configuration::GetOpRules() const { return op_rules_; }

std::vector<std::pair<std::string, std::string>>
Configuration::GetConvertableTypes() const {
  return convertable_type_map_;
}

std::vector<std::pair<std::string, std::string>>
Configuration::GetConvertChain() const {
  return convert_chain_;
}
*/

std::vector<std::string> Configuration::GetBasicTypeStr() const {
  return basic_types_;
}

/*
bool Configuration::IsFloatLiteral(IRTYPE type) const {
  return float_literal_type_.find(type) != float_literal_type_.end();
}

bool Configuration::IsIntLiteral(IRTYPE type) const {
  return int_literal_type_.find(type) != int_literal_type_.end();
}

bool Configuration::IsStringLiteral(IRTYPE type) const {
  return string_literal_type_.find(type) != string_literal_type_.end();
}
*/

std::string Configuration::GetInitDirPath() const { return init_dir_path_; }
/*
bool IsIdentifier(NODETYPE type){
  __IDENTIFIERCASE__
  return false;
}
*/

}  // namespace config
}  // namespace polyglot
