#ifndef __CUS__H__
#define __CUS__H__
#include "antlr4-runtime.h"

#include "ir.h"
#include "var_definition.h"
#include <variant>

using namespace polyglot;
class CustomRuleContext : public antlr4::ParserRuleContext {
public:
    CustomRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState)
        : antlr4::ParserRuleContext(parent, invokingState) {}
        CustomRuleContext() : antlr4::ParserRuleContext() {} // Add this default constructor

    int customAttribute = 0;

    bool isStringLiteral = false;
    bool isFloatLiteral = false;
    bool isIntLiteral = false;
    void setCustomAttribute(int value) {
        customAttribute = value;
    }

    void updateCustomAttribute() {
        // Add your custom logic to update the custom attribute here
    }

    void SetDataFlag(DataFlag flag) {
        data_flag = flag;
    }

    DataFlag GetDataFlag() {
        return data_flag;
    }

    DataType GetDataType() {
        return data_type;
    }

    void SetDataType(DataType type) {
        data_type = type;
    }

    void SetScopeType(ScopeType type) {
        scope_type = type;
    }

    ScopeType GetScopeType() {
        return scope_type;
    }

    DataFlag data_flag = kUse;
    DataType data_type = kDataDefault;
    ScopeType scope_type = kScopeDefault;
};

#endif
