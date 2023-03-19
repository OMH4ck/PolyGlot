#ifndef __TEST__
#define __TEST__

#include "ast.h"
#include <set>

bool IsWeakType();
IRTYPE GetFixIRType();
std::set<NODETYPE> GetFunctionArgNodeType();

std::set<IRTYPE> GetBasicUnits();

#endif
