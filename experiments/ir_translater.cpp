#include "ir_translater.h"

#include "SimpleLangBaseVisitor.h"
#include "SimpleLangLexer.h"
#include "SimpleLangParser.h"
#include "antlr4-runtime.h"
// #include "cus.h"
#include <iostream>
#include <optional>
#include <stack>
#include <variant>

#include "ast.h"
#include "custom_rule_context.h"
#include "define.h"
#include "gen_ir.h"
#include "ir.h"

using namespace antlrcpptest;

using IM = std::variant<std::nullopt_t, std::string, IRPtr>;

struct OneIR {
  IM op_prefix = std::nullopt;
  IM op_middle = std::nullopt;
  IM op_suffix = std::nullopt;
  IM left = std::nullopt;
  IM right = std::nullopt;
};

// Fill the OneIR struct with the information from the stack
// The order is, if it is a string, then it is either the prefix or the suffix
// or the middle, otherwise it is the left or the right
OneIR ExtractOneIR(std::stack<IM>& stk) {
  OneIR one_ir;
  while (!stk.empty()) {
    auto im = stk.top();
    stk.pop();
    if (std::holds_alternative<std::string>(im)) {
      if (std::holds_alternative<std::nullopt_t>(one_ir.left) &&
          std::holds_alternative<std::nullopt_t>(one_ir.op_prefix)) {
        one_ir.op_prefix = im;
      } else if (std::holds_alternative<std::nullopt_t>(one_ir.op_middle)) {
        one_ir.op_middle = im;
      } else if (std::holds_alternative<std::nullopt_t>(one_ir.op_suffix)) {
        one_ir.op_suffix = im;
      } else {
        stk.push(im);
        break;
      }
    } else if (std::holds_alternative<IRPtr>(im)) {
      if (std::holds_alternative<std::nullopt_t>(one_ir.left)) {
        one_ir.left = im;
      } else if (std::holds_alternative<std::nullopt_t>(one_ir.right)) {
        one_ir.right = im;
      } else {
        stk.push(im);
        break;
      }
    }
  }
  return one_ir;
}

namespace antlr4{
IRPtr TranslateNode(tree::ParseTree* node, SimpleLangParser* parser) {
  assert(node->getTreeType() == antlr4::tree::ParseTreeType::RULE);

  std::stack<IM> stk;
  CustomRuleContext* ctx = dynamic_cast<CustomRuleContext*>(node);
  for (auto iter = node->children.rbegin(); iter != node->children.rend();
       ++iter) {
    if ((*iter)->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
      stk.push((*iter)->getText());
    } else {
      stk.push(TranslateNode(*iter, parser));
    }
  }
  assert(!stk.empty());
  do {
    OneIR one_ir = ExtractOneIR(stk);
    std::string op_prefix =
        std::holds_alternative<std::string>(one_ir.op_prefix)
            ? std::get<std::string>(one_ir.op_prefix)
            : "";
    std::string op_middle =
        std::holds_alternative<std::string>(one_ir.op_middle)
            ? std::get<std::string>(one_ir.op_middle)
            : "";
    std::string op_suffix =
        std::holds_alternative<std::string>(one_ir.op_suffix)
            ? std::get<std::string>(one_ir.op_suffix)
            : "";
    IRPtr left = std::holds_alternative<IRPtr>(one_ir.left)
                     ? std::get<IRPtr>(one_ir.left)
                     : nullptr;
    IRPtr right = std::holds_alternative<IRPtr>(one_ir.right)
                      ? std::get<IRPtr>(one_ir.right)
                      : nullptr;

    assert(right == nullptr || left != nullptr);
    if (stk.empty()) {
      stk.push(
          IRPtr(new IR(static_cast<IRTYPE>(node->getTreeType()),
                       OP3(op_prefix, op_middle, op_suffix), left, right)));
    } else {
      stk.push(IRPtr(
          new IR(kUnknown, OP3(op_prefix, op_middle, op_suffix), left, right)));
    }
  } while (stk.size() > 1);
  std::cout << "Visiting node: " << node->toStringTree(parser) << std::endl;
  assert(stk.size() == 1);
  std::cout << stk.top().index() << std::endl;
  assert(std::holds_alternative<IRPtr>(stk.top()));
  return std::get<IRPtr>(stk.top());
}


IRPtr TranslateToIR(std::string input_program){
  ANTLRInputStream input(input_program);
  SimpleLangLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  SimpleLangParser parser(&tokens);
  tree::ParseTree* tree = parser.program();
  if(parser.getNumberOfSyntaxErrors() > 0){
    return nullptr;
  }
  IRPtr ir = TranslateNode(tree, &parser);
  std::cout << ir->to_string() << std::endl;
  return ir;
}
}
