/*
 * Copyright (c) 2023 OMH4ck
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __POLYGLOT_RULE_CONTEXT__H__
#define __POLYGLOT_RULE_CONTEXT__H__
#include <variant>

#include "antlr4-runtime.h"
#include "ir.h"
#include "var_definition.h"

using namespace polyglot;
class PolyGlotRuleContext : public antlr4::ParserRuleContext {
 public:
  PolyGlotRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState)
      : antlr4::ParserRuleContext(parent, invokingState) {}
  PolyGlotRuleContext()
      : antlr4::ParserRuleContext() {}  // Add this default constructor

  int customAttribute = 0;

  bool isStringLiteral = false;
  bool isFloatLiteral = false;
  bool isIntLiteral = false;
  void setCustomAttribute(int value) { customAttribute = value; }

  void updateCustomAttribute() {
    // Add your custom logic to update the custom attribute here
  }

  DataType GetDataType() { return data_type; }

  void SetDataType(DataType type) { data_type = type; }

  void SetScopeType(ScopeType type) { scope_type = type; }

  ScopeType GetScopeType() { return scope_type; }

  DataType data_type = kDataDefault;
  ScopeType scope_type = kScopeDefault;
};

#endif
