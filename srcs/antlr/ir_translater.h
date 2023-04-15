#ifndef __IR_TRANSLATER_H__
#define __IR_TRANSLATER_H__

#include <string>

#include "antlr4-runtime.h"
#include "ir.h"

using IRTYPE = unsigned int;
namespace antlr4 {
polyglot::IRPtr TranslateToIR(std::string input);

std::string_view GetIRTypeStr(IRTYPE type);
IRTYPE GetIRTypeByStr(std::string_view type);
constexpr IRTYPE kUnknown = 0xdeadbeef;
}  // namespace antlr4

#endif
