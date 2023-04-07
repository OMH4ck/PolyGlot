#ifndef __IR_TRANSLATER_H__
#define __IR_TRANSLATER_H__

#include "antlr4-runtime.h"
#include "ast.h"
#include "ir.h"

#include <string>

using IRTYPE = unsigned int;
namespace antlr4{
IRPtr TranslateToIR(std::string input);

std::string_view GetIRTypeStr(IRTYPE type);
IRTYPE GetIRTypeByStr(std::string_view type);
constexpr IRTYPE kUnknown = 0xdeadbeef;
}

#endif
