#include "config_misc.h"
#include "var_definition.h"
#include <set>

bool IsWeakType() { return __IS_WEAK_TYPE__; }

IRTYPE GetFixIRType() { return __FIX_IR_TYPE__; }
std::set<NODETYPE> GetFunctionArgNodeType() {
  return {__FUNCTION_ARGUMENT_UNIT__};
}

std::set<IRTYPE> GetBasicUnits() { return {__SEMANTIC_BASIC_UNIT__}; }

std::string GetBuiltInObjectFilePath() { return __SEMANTIC_BUILTIN_OBJ__; }

std::vector<string> GetOpRules() { return {__SEMANTIC_OP_RULE__}; }

constexpr int NOTEXIST = 0;
// TOFIX: this is a hack, should be fixed
bool HandleBasicType(
    IRTYPE ir_type,
    std::shared_ptr<std::map<TYPEID, std::vector<std::pair<TYPEID, TYPEID>>>>
        &cur_type) {
  int res_type = NOTEXIST;
  switch (ir_type) {
  case kStringLiteral:
    res_type = get_type_id_by_string("ANYTYPE");
    (*cur_type)[res_type].push_back(make_pair(0, 0));
    // cache_inference_map_[cur] = cur_type;
    return true;
  case kIntLiteral:
    res_type = get_type_id_by_string("ANYTYPE");
    (*cur_type)[res_type].push_back(make_pair(0, 0));
    // cache_inference_map_[cur] = cur_type;
    return true;
  case kFloatLiteral:
    res_type = get_type_id_by_string("ANYTYPE");
    (*cur_type)[res_type].push_back(make_pair(0, 0));
    // cache_inference_map_[cur] = cur_type;
    return true;
  default:
    return false;
  }
}

std::vector<std::pair<std::string, std::string>> GetConvertableTypes() {
  return {__INIT_CONVERTABLE_TYPE_MAP__};
}

std::vector<std::pair<std::string, std::string>> GetConvertChain() {
  return {__SEMANTIC_CONVERT_CHAIN__};
}

std::vector<std::string> GetBasicTypeStr() {
  return {__SEMANTIC_BASIC_TYPES__};
}

/*
std::string LiteralTypeToString(NODETYPE type){
  __TOSTRINGCASE__

  return "";
}
*/

bool IsFloatLiteral(NODETYPE type) {
  __FLOATLITERALCASE__
  return false;
}

bool IsIntLiteral(NODETYPE type) {
  __INTLITERALCASE__
  return false;
}

bool IsStringLiteral(NODETYPE type) {
  __STRINGLITERALCASE__
  return false;
}

std::string GetInitDirPath() { return "__INIT_FILE_DIR__"; }
/*
bool IsIdentifier(NODETYPE type){
  __IDENTIFIERCASE__
  return false;
}
*/