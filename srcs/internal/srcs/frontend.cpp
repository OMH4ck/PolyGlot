#include "frontend.h"

#include "ast.h"
#include "utils.h"

bool BisonFrontend::Parsable(std::string input) {
  return parser(input) != nullptr;
}

IRPtr BisonFrontend::TranslateToIR(std::string input) { return nullptr; }

bool AntlrFrontend::Parsable(std::string input) { return true; }

IRPtr AntlrFrontend::TranslateToIR(std::string input) { return nullptr; }
