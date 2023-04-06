#ifndef __IR_TRANSLATER_H__
#define __IR_TRANSLATER_H__

#include "antlr4-runtime.h"
#include "ir.h"

#include <string>

namespace antlr4{
IRPtr TranslateToIR(std::string input);
}

#endif
