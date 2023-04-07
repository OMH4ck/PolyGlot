#include "frontend.h"

#include "ast.h"
#include "bison_parser.h"
#include "flex_lexer.h"
#include "gen_ir.h"
#include "ir.h"
#include "ir_translater.h"
#include "utils.h"
#include "var_definition.h"

namespace {
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
}  // namespace
namespace polyglot {
bool BisonFrontend::Parsable(std::string input) {
  return parser(input) != nullptr;
}

IRPtr BisonFrontend::TranslateToIR(std::string input) {
  auto ast = parser(input);
  if (ast == nullptr) {
    return nullptr;
  }
  std::vector<IRPtr> ir_set;
  return ast->translate(ir_set);
  ;
}
IRTYPE BisonFrontend::GetIRTypeByStr(std::string_view type) {
  return get_nodetype_by_string(std::string(type));
}

std::string_view BisonFrontend::GetIRTypeStr(IRTYPE type) {
  return get_string_by_nodetype(type);
}

bool AntlrFrontend::Parsable(std::string input) { return true; }

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

IRTYPE BisonFrontend::GetStringLiteralType() { return kStringLiteral; }
IRTYPE BisonFrontend::GetIntLiteralType() { return kIntLiteral; }

IRTYPE BisonFrontend::GetFloatLiteralType() { return kFloatLiteral; }

IRTYPE BisonFrontend::GetUnknownType() { return kUnknown; }

IRTYPE BisonFrontend::GetIdentifierType() { return kIdentifier; }
}  // namespace polyglot
