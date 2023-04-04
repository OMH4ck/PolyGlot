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

#include <iostream>

#include "antlr4-runtime.h"
#include "TLexer.h"
#include "TParser.h"
#include "TParserBaseVisitor.h"
//#include "cus.h"

using namespace antlrcpptest;
using namespace antlr4;


class CustomExprVisitor : public TParserBaseVisitor {
public:
    virtual antlrcpp::Any visitChildren(antlr4::tree::ParseTree *node) override {
        std::cout << "Visiting node: " << node->getText() << std::endl;
        CustomRuleContext* ctx = (CustomRuleContext*)node;
        std::cout << "Atribute: " << ctx->customAttribute << std::endl;
        std::cout << "Alt: " << ctx->getRuleIndex() << std::endl;
        // Call base implementation to visit child nodes
        return TParserVisitor::visitChildren(node);
    }

    CustomExprVisitor(TParser* parser) : parser_(parser) {}
private:
    TParser* parser_;
};

int main(int , const char **) {
  std::string a = u8"🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);";
  ANTLRInputStream input(a);
  TLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  TParser parser(&tokens);
  tree::ParseTree* tree = parser.main();

  std::cout << tree->toStringTree(&parser) << std::endl << std::endl;

  CustomExprVisitor visitor(&parser);
  visitor.visit(tree);
  return 0;
}
