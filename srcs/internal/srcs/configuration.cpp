#include <cassert>
#include <set>
#include <string>

#include "absl/strings/str_join.h"
#include "config_misc.h"
#include "gen_ir.h"
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
    if (config["IsWeakType"]) {
      is_weak_type_ = config["IsWeakType"].as<bool>();
    } else {
      assert(false);
      return false;
    }
    if (config["FixIRType"]) {
      fix_ir_type_ =
          get_nodetype_by_string(config["FixIRType"].as<std::string>());
      assert(fix_ir_type_ != kUnknown && "FixIRType is not valid");
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
      function_arg_node_type_.insert(get_nodetype_by_string(
          config["FunctionArgumentUnit"].as<std::string>()));
      assert(function_arg_node_type_.find(kUnknown) ==
                 function_arg_node_type_.end() &&
             "FunctionArgumentUnit is not valid");
    } else {
      if (!is_weak_type_) {
        assert(false);
      }
      function_arg_node_type_.insert(kUnknown);
    }
    if (config["StringLiteralType"]) {
      // Ensure it is an array
      assert(config["StringLiteralType"].IsSequence() &&
             "StringLiteralType is not an array");
      // Iterate through the array
      for (const auto &type : config["StringLiteralType"]) {
        string_literal_type_.insert(
            get_nodetype_by_string(type.as<std::string>()));
      }
    } else {
      // TODO: Fix the hardcoded string literal type
      string_literal_type_.insert(kStringLiteral);
      string_literal_type_.insert(kIdentifier);
    }
    if (config["FloatLiteralType"]) {
      // Ensure it is an array
      assert(config["FloatLiteralType"].IsSequence() &&
             "FloatLiteralType is not an array");
      // Iterate through the array
      for (const auto &type : config["FloatLiteralType"]) {
        float_literal_type_.insert(
            get_nodetype_by_string(type.as<std::string>()));
      }
    } else {
      float_literal_type_.insert(kFloatLiteral);
    }
    if (config["IntLiteralType"]) {
      // Ensure it is an array
      assert(config["IntLiteralType"].IsSequence() &&
             "IntLiteralType is not an array");
      // Iterate through the array
      for (const auto &type : config["IntLiteralType"]) {
        int_literal_type_.insert(
            get_nodetype_by_string(type.as<std::string>()));
      }
    } else {
      int_literal_type_.insert(kIntLiteral);
    }
    if (config["BasicUnits"]) {
      // Ensure it is an array
      assert(config["BasicUnits"].IsSequence() && "BasicUnit is not an array");
      // Iterate through the array
      for (const auto &type : config["BasicUnits"]) {
        basic_units_.insert(get_nodetype_by_string(type.as<std::string>()));
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
std::set<NODETYPE> Configuration::GetFunctionArgNodeType() const {
  return function_arg_node_type_;
}

std::set<IRTYPE> Configuration::GetBasicUnits() const { return basic_units_; }

std::string Configuration::GetBuiltInObjectFilePath() const {
  return built_in_object_file_path_;
}

std::vector<string> Configuration::GetOpRules() const { return op_rules_; }

// constexpr int NOTEXIST = 0;
// TOFIX: this is a hack, should be fixed
bool Configuration::HandleBasicType(
    IRTYPE ir_type,
    std::shared_ptr<typesystem::TypeSystem::CandidateTypes> &cur_type) const {
  int res_type = NOTEXIST;
  switch (ir_type) {
    case kStringLiteral:
      res_type = get_type_id_by_string("ANYTYPE");
      cur_type->AddCandidate(res_type, 0, 0);
      // cache_inference_map_[cur] = cur_type;
      return true;
    case kIntLiteral:
      res_type = get_type_id_by_string("ANYTYPE");
      cur_type->AddCandidate(res_type, 0, 0);
      // cache_inference_map_[cur] = cur_type;
      return true;
    case kFloatLiteral:
      res_type = get_type_id_by_string("ANYTYPE");
      cur_type->AddCandidate(res_type, 0, 0);
      // cache_inference_map_[cur] = cur_type;
      return true;
    default:
      return false;
  }
}

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

bool Configuration::IsFloatLiteral(NODETYPE type) const {
  return float_literal_type_.find(type) != float_literal_type_.end();
}

bool Configuration::IsIntLiteral(NODETYPE type) const {
  return int_literal_type_.find(type) != int_literal_type_.end();
}

bool Configuration::IsStringLiteral(NODETYPE type) const {
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
