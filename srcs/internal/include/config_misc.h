#ifndef __TEST__
#define __TEST__

#include <map>
#include <memory>
#include <set>
#include <unordered_set>
#include <vector>

#include "ast.h"
#include "typesystem.h"

namespace polyglot {

class Frontend;
namespace typesystem {
class TypeSystem;
}

namespace gen {

class Configuration {
 public:
  // This is a singleton class
  static bool Initialize(std::string_view config_file_path);
  static const Configuration& GetInstance();

  bool IsWeakType() const;
  IRTYPE GetFixIRType() const;
  std::set<IRTYPE> GetFunctionArgNodeType() const;

  std::set<IRTYPE> GetBasicUnits() const;

  std::string GetBuiltInObjectFilePath() const;

  std::vector<string> GetOpRules() const;

  typedef int TYPEID;
  bool HandleBasicType(
      IRTYPE ir_type,
      std::shared_ptr<typesystem::TypeSystem::CandidateTypes>& cur_type) const;

  std::vector<std::pair<std::string, std::string>> GetConvertableTypes() const;

  std::vector<std::pair<std::string, std::string>> GetConvertChain() const;

  std::vector<std::string> GetBasicTypeStr() const;

  // std::string LiteralTypeToString(IRTYPE type);

  bool IsFloatLiteral(IRTYPE type) const;
  bool IsIntLiteral(IRTYPE type) const;
  bool IsStringLiteral(IRTYPE type) const;
  // bool IsIdentifier(IRTYPE type);

  std::string GetInitDirPath() const;

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
}  // namespace gen
}  // namespace polyglot
#endif
