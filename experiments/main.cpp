/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include "SimpleLangBaseVisitor.h"
#include "SimpleLangLexer.h"
#include "SimpleLangParser.h"
#include "antlr4-runtime.h"
// #include "cus.h"
#include <iostream>
#include <optional>
#include <stack>
#include <variant>

#include "custom_rule_context.h"
#include "ir_translater.h"

using namespace antlrcpptest;
using namespace antlr4;

class CustomExprVisitor : public SimpleLangBaseVisitor {
 public:
  virtual antlrcpp::Any visitChildren(antlr4::tree::ParseTree* node) override {
    std::cout << "Child number: " << node->children.size() << std::endl;
    auto res = SimpleLangBaseVisitor::visitChildren(node);
    std::cout << "Visiting node: " << node->getText() << std::endl;
    CustomRuleContext* ctx = (CustomRuleContext*)node;
    std::cout << "Atribute: " << ctx->customAttribute << std::endl;
    std::cout << "Alt number: " << ctx->getRuleIndex() << std::endl;
    std::cout << "Child number: " << ctx->children.size() << std::endl;
    if (ctx->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
      std::cout << "Terminal node: " << std::endl;
    }
    if (auto* terminalNode = dynamic_cast<antlr4::tree::TerminalNode*>(node)) {
    }
    // Call base implementation to visit child nodes
    return res;
  }

  CustomExprVisitor(SimpleLangParser* parser) : parser_(parser) {}

 private:
  SimpleLangParser* parser_;
};

// DFS visit the parse tree
void visitParseTree(tree::ParseTree* node, antlr4::Parser* parser) {
  std::cout << "Visiting node: " << node->toStringTree(parser) << std::endl;
  CustomRuleContext* ctx = (CustomRuleContext*)node;
  if (node->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
    std::cout << antlr4::Token::MIN_USER_TOKEN_TYPE << std::endl;
    // check whether the terminal is a charset or literal
    auto token = (antlr4::tree::TerminalNode*)node;
    std::cout << token->getSymbol()->getType() << std::endl;
    std::cout << " is a terminal node." << std::endl;
    return;
  }

  if (ctx->isStringLiteral) {
    std::cout << " is a literal." << std::endl;
  }
  std::stack<tree::ParseTree*> stk;
  for (auto child : node->children) {
    std::cout << "Child: " << child->toStringTree(parser) << std::endl;
    stk.push(child);
    visitParseTree(child, parser);
  }
  std::cout << "Atribute: " << ctx->customAttribute << std::endl;
  std::cout << "Alt number: " << ctx->getRuleIndex() << std::endl;
  std::cout << "Child number: " << ctx->children.size() << std::endl;
}

int main(int, const char**) {
  std::string a = R"V0G0N(
  STRUCT c {
  INT a;
  INT b;
  INT c;
  STRUCT d e = f;
  };
  )V0G0N";
  ANTLRInputStream input(a);
  SimpleLangLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  SimpleLangParser parser(&tokens);
  tree::ParseTree* tree = parser.program();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  // CustomExprVisitor visitor(&parser);
  // visitor.visit(tree);
  visitParseTree(tree, &parser);

  std::cout << "Test translation" << std::endl;
  IRPtr ir = TranslateToIR(a);
  return 0;
}