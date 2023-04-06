#include "frontend.h"

#include "ast.h"
#include "ir.h"
#include "ir_translater.h"
#include "utils.h"

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

bool AntlrFrontend::Parsable(std::string input) { return true; }

IRPtr AntlrFrontend::TranslateToIR(std::string input) {
  return antlr4::TranslateToIR(input);
}
}  // namespace polyglot
