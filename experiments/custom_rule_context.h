#ifndef __CUS__H__
#define __CUS__H__
#include "antlr4-runtime.h"

class CustomRuleContext : public antlr4::ParserRuleContext {
public:
    CustomRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState)
        : antlr4::ParserRuleContext(parent, invokingState) {}
        CustomRuleContext() : antlr4::ParserRuleContext() {} // Add this default constructor

    int customAttribute = 0;


    bool isLiteral = false;
    void setCustomAttribute(int value) {
        customAttribute = value;
    }

    void updateCustomAttribute() {
        // Add your custom logic to update the custom attribute here
    }
};

#endif
