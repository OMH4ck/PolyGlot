#include "test.h"
#include <set>

bool IsWeakType() { return __IS_WEAK_TYPE__; }

IRTYPE GetFixIRType() { return __FIX_IR_TYPE__; }
std::set<NODETYPE> GetFunctionArgNodeType() {
  return {__FUNCTION_ARGUMENT_UNIT__};
}
