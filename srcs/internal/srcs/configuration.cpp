#include <cassert>
#include <set>
#include <string>

#include "absl/strings/str_join.h"
#include "config_misc.h"
#include "frontend.h"
#include "typesystem.h"
#include "var_definition.h"
#include "yaml-cpp/yaml.h"

namespace polyglot {

namespace gen {

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
    if (config["Frontend"]) {
      std::string frontend_name = config["Frontend"].as<std::string>();
      if (frontend_name == "bison") {
        frontend_ = std::make_unique<BisonFrontend>();
      } else if (frontend_name == "antlr") {
        frontend_ = std::make_unique<AntlrFrontend>();
      } else {
        assert(false);
        return false;
      }
    } else {
      // TODO: By default use bison. Should fix after migration.
      frontend_ = std::make_unique<BisonFrontend>();
    }
    if (config["IsWeakType"]) {
      is_weak_type_ = config["IsWeakType"].as<bool>();
    } else {
      assert(false);
      return false;
    }
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
    if (config["InitFileDir"]) {
      init_dir_path_ = config["InitFileDir"].as<std::string>();
    } else {
      assert(false);
      return false;
    }
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

    // This is optional.
    if (config["BuiltinObjFile"]) {
      built_in_object_file_path_ = config["BuiltinObjFile"].as<std::string>();
    } else {
      assert(false);
    }

    if (config["BasicTypes"]) {
      // Ensure it is an array
      assert(config["BasicTypes"].IsSequence() && "BasicTypes is not an array");
      // Iterate through the array
      for (const auto &type : config["BasicTypes"]) {
        basic_types_.push_back(type.as<std::string>());
      }
    } else {
      assert(false);
    }

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

    return is_init_ = true;
  } catch (YAML::BadFile &e) {
    std::cerr << "Cannot find config file: " << config_file_path << std::endl;
    return false;
  }
}

bool Configuration::IsWeakType() const { return is_weak_type_; }

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

std::vector<std::string> Configuration::GetBasicTypeStr() const {
  return basic_types_;
}

bool Configuration::IsFloatLiteral(IRTYPE type) const {
  return float_literal_type_.find(type) != float_literal_type_.end();
}

bool Configuration::IsIntLiteral(IRTYPE type) const {
  return int_literal_type_.find(type) != int_literal_type_.end();
}

bool Configuration::IsStringLiteral(IRTYPE type) const {
  return string_literal_type_.find(type) != string_literal_type_.end();
}

std::string Configuration::GetInitDirPath() const { return init_dir_path_; }
/*
bool IsIdentifier(NODETYPE type){
  __IDENTIFIERCASE__
  return false;
}
*/

}  // namespace gen
}  // namespace polyglot
