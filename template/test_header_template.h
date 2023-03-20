#ifndef __TEST__
#define __TEST__

#include "ast.h"
#include <map>
#include <memory>
#include <set>
#include <vector>

bool IsWeakType();
IRTYPE GetFixIRType();
std::set<NODETYPE> GetFunctionArgNodeType();

std::set<IRTYPE> GetBasicUnits();

std::string GetBuiltInObjectFilePath();

std::vector<string> GetOpRules();

typedef int TYPEID;
bool HandleBasicType(
    IRTYPE ir_type,
    std::shared_ptr<std::map<TYPEID, std::vector<std::pair<TYPEID, TYPEID>>>>
        &cur_type);

std::vector<std::pair<std::string, std::string>> GetConvertableTypes();

std::vector<std::pair<std::string, std::string>> GetConvertChain();

std::vector<std::string> GetBasicTypeStr();

// std::string LiteralTypeToString(NODETYPE type);

bool IsFloatLiteral(NODETYPE type);
bool IsIntLiteral(NODETYPE type);
bool IsStringLiteral(NODETYPE type);
// bool IsIdentifier(NODETYPE type);

std::string GetInitDirPath();
#endif
