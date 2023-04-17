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

#include "ir_translater.h"

#include "antlr4-runtime.h"
#include "generated_header.h"
// #include "cus.h"
#include <iostream>
#include <memory>
#include <optional>
#include <stack>
#include <string_view>
#include <variant>
// #include "absl/container/flat_hash_map.h"

// #include "ast.h"
// #include "define.h"
#include "ir.h"
// #include "var_definition.h"

using namespace polyglot;
using namespace antlrcpptest;

using IM = std::variant<std::monostate, std::string, IRPtr>;

struct OneIR {
  IM op_prefix;
  IM op_middle;
  IM op_suffix;
  IM left;
  IM right;
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
      if (std::holds_alternative<std::monostate>(one_ir.left) &&
          std::holds_alternative<std::monostate>(one_ir.op_prefix)) {
        one_ir.op_prefix = im;
      } else if (std::holds_alternative<std::monostate>(one_ir.op_middle) &&
                 std::holds_alternative<std::monostate>(one_ir.right)) {
        one_ir.op_middle = im;
      } else if (std::holds_alternative<std::monostate>(one_ir.op_suffix)) {
        one_ir.op_suffix = im;
      } else {
        stk.push(im);
        break;
      }
    } else if (std::holds_alternative<IRPtr>(im)) {
      if (std::holds_alternative<std::monostate>(one_ir.left) &&
          std::holds_alternative<std::monostate>(one_ir.op_middle)) {
        one_ir.left = im;
      } else if (std::holds_alternative<std::monostate>(one_ir.right) &&
                 std::holds_alternative<std::monostate>(one_ir.op_suffix)) {
        one_ir.right = im;
      } else {
        stk.push(im);
        break;
      }
    }
  }
  return one_ir;
}

namespace antlr4 {
IRPtr TranslateNode(tree::ParseTree* node, PolyGlotGrammarParser* parser) {
  assert(node->getTreeType() == antlr4::tree::ParseTreeType::RULE);

  std::stack<IM> stk;
  PolyGlotRuleContext* ctx = dynamic_cast<PolyGlotRuleContext*>(node);
  if (ctx->isStringLiteral) {
    // std::cout << "literal: " << ctx->getText() << "\n";
    stk.push(std::make_shared<IR>((IRTYPE)ctx->getRuleIndex(), ctx->getText()));
  } else if (ctx->isIntLiteral) {
    stk.push(std::make_shared<IR>((IRTYPE)ctx->getRuleIndex(),
                                  std::stoi(ctx->getText())));
  } else {
    if (node->children.size() == 0) {
      return nullptr;
    }
    std::stack<IM> tmp_stk;
    for (auto iter = node->children.begin(); iter != node->children.end();
         ++iter) {
      if ((*iter)->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
        if ((*iter)->getText() != "<EOF>") {
          // std::cout << "terminal: " << (*iter)->getText() << "\n";
          tmp_stk.push((*iter)->getText());
        }
      } else {
        auto child_ir = TranslateNode(*iter, parser);
        if (child_ir) {
          tmp_stk.push(child_ir);
        }
      }
    }
    assert(!tmp_stk.empty());
    while (!tmp_stk.empty()) {
      stk.push(tmp_stk.top());
      tmp_stk.pop();
    }
    // std::cout << "Visiting node: " << node->toStringTree(parser) <<
    // std::endl;
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
      /*
      std::cout << "Internal:" << std::endl;
      std::cout << "op_prefix: " << op_prefix << "\n";
      std::cout << "op_middle: " << op_middle << "\n";
      std::cout << "op_suffix: " << op_suffix << "\n";
      if(left){
      std::cout << "left: " << left->ToString() << "\n";
      }
      if(right){
      cout << "right: " << right->ToString() << "\n";
      }
      */
      if (stk.empty()) {
        stk.push(IRPtr(new IR(
            static_cast<IRTYPE>(ctx->getRuleIndex()),
            std::make_shared<IROperator>(op_prefix, op_middle, op_suffix), left,
            right)));
      } else {
        stk.push(IRPtr(new IR(
            kUnknown,
            std::make_shared<IROperator>(op_prefix, op_middle, op_suffix), left,
            right)));
      }
    } while (stk.size() > 1);
  }
  // std::cout << "Visiting node: " << node->toStringTree(parser) << std::endl;
  assert(stk.size() == 1);
  // std::cout << stk.top().index() << std::endl;
  assert(std::holds_alternative<IRPtr>(stk.top()));
  IRPtr new_ir = std::get<IRPtr>(stk.top());
  if (ctx && ctx->GetDataType() != kDataDefault) {
    // std::cout << "IR special: " << new_ir->to_string() << std::endl;
    new_ir->SetDataFlag(ctx->GetDataFlag());
    new_ir->SetDataType(ctx->GetDataType());
  } else {
    new_ir->SetDataType(kDataDefault);
  }
  if (ctx->GetScopeType() != kScopeDefault) {
    new_ir->SetScopeType(ctx->GetScopeType());
  }
  /*
  std::cout << "visiting node: " << node->toStringTree(parser) << "\n";
  if(new_ir->left_){
    std::cout << "left: " << new_ir->left_->to_string() << "\n";
  }else {
    std::cout << "left: null\n";
  }
  if(new_ir->right_){
    std::cout << "right: " << new_ir->right_->to_string() << "\n";
  }else {
    std::cout << "right: null\n";
  }
  if(new_ir->op_){
    std::cout << "prefix" << new_ir->op_->prefix_ << "\n";
    std::cout << "middle" << new_ir->op_->middle_ << "\n";
    std::cout << "suffix" << new_ir->op_->suffix_ << "\n";
  }
  */
  return new_ir;
}

IRPtr TranslateToIR(std::string input_program) {
  static size_t s_counter = 0;
  static PolyGlotGrammarParser s_parser(nullptr);
  static atn::ParserATNSimulator* s_parser_interpreter;
  static std::vector<antlr4::dfa::DFA>* s_decision_to_dfa;
  static std::unique_ptr<antlr4::atn::PredictionContextCache> s_cache;
  static bool init = false;
  if (!init) {
    init = true;
    s_cache = std::make_unique<antlr4::atn::PredictionContextCache>();
    auto parser_interpreter =
        s_parser.getInterpreter<atn::ParserATNSimulator>();
    s_decision_to_dfa = &parser_interpreter->decisionToDFA;
    s_parser_interpreter = new atn::ParserATNSimulator(
        &s_parser, s_parser.getATN(), *s_decision_to_dfa, *s_cache);
    s_parser.setInterpreter(s_parser_interpreter);
  }
  ANTLRInputStream input(input_program);
  PolyGlotGrammarLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  tokens.fill();
  s_parser.setTokenStream(&tokens);

  tree::ParseTree* tree = s_parser.program();
  if (s_parser.getNumberOfSyntaxErrors() > 0) {
    return nullptr;
  }
  if (s_counter++ > 10000) {
    s_counter = 0;
    s_parser_interpreter->clearDFA();
    s_cache = std::make_unique<antlr4::atn::PredictionContextCache>();
    s_parser_interpreter = new atn::ParserATNSimulator(
        &s_parser, s_parser.getATN(), *s_decision_to_dfa, *s_cache);
    s_parser.setInterpreter(s_parser_interpreter);
  }
  IRPtr ir = TranslateNode(tree, &s_parser);
  // std::cout << ir->to_string() << std::endl;
  return ir;
}

std::string_view GetIRTypeStr(IRTYPE type) {
  static PolyGlotGrammarParser parser(nullptr);

  assert(parser.getRuleNames().size() > type);
  return parser.getRuleNames()[type];
}

size_t GetRuleNum() {
  return PolyGlotGrammarParser(nullptr).getRuleNames().size();
}

IRTYPE GetIRTypeByStr(std::string_view type) {
  // TODO: Fix this ugly code.
  static bool init = false;
  static std::map<std::string, IRTYPE> type_map;
  std::string type_str(type);
  if (!init) {
    init = true;
    PolyGlotGrammarParser parser(nullptr);
    for (int i = 0; i < parser.getRuleNames().size(); ++i) {
      std::string rule_name = parser.getRuleNames()[i];
      type_map[rule_name] = static_cast<IRTYPE>(i);
    }
  }
  if (type_map.find(type_str) == type_map.end()) {
    std::cerr << "type_str: " << type_str << "\n";
  }
  assert(type_map.find(type_str) != type_map.end());
  return type_map[type_str];
}
}  // namespace antlr4
