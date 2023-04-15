// Copyright (c) 2023 OMH4ck
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "frontend.h"

#include "ir.h"
#include "ir_translater.h"
#include "utils.h"
#include "var_definition.h"

namespace {
/*
std::shared_ptr<TopASTNode> parser(string sql) {
yyscan_t scanner;
YY_BUFFER_STATE state;
TopASTNode *p = new TopASTNode();
reset_scope();

if (ff_lex_init(&scanner)) {
  return nullptr;
}
state = ff__scan_string(sql.c_str(), scanner);

int ret = ff_parse(p, scanner);

ff__delete_buffer(state, scanner);
ff_lex_destroy(scanner);

if (ret != 0) {
  p->deep_delete();
  return nullptr;
}

std::shared_ptr<TopASTNode> p1(p);
return p1;
}
*/
}  // namespace
namespace polyglot {
bool AntlrFrontend::Parsable(std::string input) {
  return antlr4::TranslateToIR(input) != nullptr;
}

IRPtr AntlrFrontend::TranslateToIR(std::string input) {
  return antlr4::TranslateToIR(input);
}

IRTYPE AntlrFrontend::GetIRTypeByStr(std::string_view type) {
  return antlr4::GetIRTypeByStr(type);
}
std::string_view AntlrFrontend::GetIRTypeStr(IRTYPE type) {
  return antlr4::GetIRTypeStr(type);
}
IRTYPE AntlrFrontend::GetStringLiteralType() {
  return antlr4::GetIRTypeByStr("string_literal");
}
IRTYPE AntlrFrontend::GetIntLiteralType() {
  return antlr4::GetIRTypeByStr("int_literal");
}

IRTYPE AntlrFrontend::GetFloatLiteralType() {
  return antlr4::GetIRTypeByStr("float_literal");
}

IRTYPE AntlrFrontend::GetIdentifierType() {
  return antlr4::GetIRTypeByStr("identifier");
}

IRTYPE AntlrFrontend::GetUnknownType() { return antlr4::kUnknown; }

/*
IRTYPE BisonFrontend::GetStringLiteralType() { return kStringLiteral; }
IRTYPE BisonFrontend::GetIntLiteralType() { return kIntLiteral; }

IRTYPE BisonFrontend::GetFloatLiteralType() { return kFloatLiteral; }

IRTYPE BisonFrontend::GetUnknownType() { return kUnknown; }

IRTYPE BisonFrontend::GetIdentifierType() { return kIdentifier; }
*/
}  // namespace polyglot
