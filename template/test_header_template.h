#ifndef __TEST__
#define __TEST__

#include "ast.h"
#include <set>
#include <vector>
#include <memory>
#include <map>

bool IsWeakType();
IRTYPE GetFixIRType();
std::set<NODETYPE> GetFunctionArgNodeType();

std::set<IRTYPE> GetBasicUnits();

std::string GetBuiltInObjectFilePath();

std::vector<string> GetOpRules();

typedef int TYPEID;
bool HandleBasicType(IRTYPE ir_type, std::shared_ptr<std::map<TYPEID, std::vector<std::pair<TYPEID, TYPEID>>>> &cur_type);

std::vector<std::pair<std::string, std::string>> GetConvertableTypes();
#endif
