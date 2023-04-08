#include "ir_translater.h"

#include "generated_header.h"
#include "antlr4-runtime.h"
// #include "cus.h"
#include <iostream>
#include <optional>
#include <stack>
#include <string_view>
#include <variant>
//#include "absl/container/flat_hash_map.h"

//#include "ast.h"
#include "custom_rule_context.h"
#include "define.h"
#include "ir.h"
//#include "var_definition.h"

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

namespace antlr4 {
IRPtr TranslateNode(tree::ParseTree* node, PolyGlotGrammarParser* parser) {
  assert(node->getTreeType() == antlr4::tree::ParseTreeType::RULE);

  std::stack<IM> stk;
  CustomRuleContext* ctx = dynamic_cast<CustomRuleContext*>(node);
  if (ctx->isStringLiteral) {
    //std::cout << "literal: " << ctx->getText() << "\n";
    stk.push(std::make_shared<IR>((IRTYPE)ctx->getRuleIndex(), ctx->getText()));
  } else if(ctx->isIntLiteral) {
    stk.push(std::make_shared<IR>((IRTYPE)ctx->getRuleIndex(), std::stoi(ctx->getText())));
  } else {
    std::stack<IM> tmp_stk;
    for (auto iter = node->children.begin(); iter != node->children.end();
         ++iter) {
      if ((*iter)->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
        //std::cout << "terminal: " << (*iter)->getText() << "\n";
        tmp_stk.push((*iter)->getText());
      } else {
        tmp_stk.push(TranslateNode(*iter, parser));
      }
    }
    while(!tmp_stk.empty()){
      stk.push(tmp_stk.top());
      tmp_stk.pop();
    }
    //std::cout << "Visiting node: " << node->toStringTree(parser) << std::endl;
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


      //std::cout << "op_prefix: " << op_prefix << "\n";
      //std::cout << "op_middle: " << op_middle << "\n";
      //std::cout << "op_suffix: " << op_suffix << "\n";
      if(left){
      //std::cout << "left: " << left->to_string() << "\n";
      }
      if(right){
      //cout << "right: " << right->to_string() << "\n";
      }
      assert(right == nullptr || left != nullptr);
      if (stk.empty()) {
        stk.push(
            IRPtr(new IR(static_cast<IRTYPE>(ctx->getRuleIndex()),
                         OP3(op_prefix, op_middle, op_suffix), left, right)));
      } else {
        stk.push(IRPtr(new IR(kUnknown, OP3(op_prefix, op_middle, op_suffix),
                              left, right)));
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
    new_ir->data_flag_ = ctx->GetDataFlag();
    new_ir->data_type_ = ctx->GetDataType();
  }else{
    new_ir->data_type_ = kDataDefault;
  }
  if (ctx->GetScopeType() != kScopeDefault) {
    new_ir->scope_ = ctx->GetScopeType();
  }
  return new_ir;
}

IRPtr TranslateToIR(std::string input_program) {
  ANTLRInputStream input(input_program);
  PolyGlotGrammarLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();

  PolyGlotGrammarParser parser(&tokens);
  tree::ParseTree* tree = parser.program();
  if (parser.getNumberOfSyntaxErrors() > 0) {
    return nullptr;
  }
  IRPtr ir = TranslateNode(tree, &parser);
  // std::cout << ir->to_string() << std::endl;
  return ir;
}

std::string_view GetIRTypeStr(IRTYPE type){
  static PolyGlotGrammarParser parser(nullptr);

  assert(parser.getRuleNames().size() > type);
  return parser.getRuleNames()[type];
}

IRTYPE GetIRTypeByStr(std::string_view type){
  // TODO: Fix this ugly code.
  static bool init = false;
  static std::map<std::string, IRTYPE> type_map;
  std::string type_str(type);
  if(!init){
    init = true;
    PolyGlotGrammarParser parser(nullptr);
    for(int i = 0; i < parser.getRuleNames().size(); ++i){
      std::string rule_name = parser.getRuleNames()[i];
      type_map[rule_name] = static_cast<IRTYPE>(i);
    }
  }
  assert(type_map.find(type_str) != type_map.end());
  return type_map[type_str];
}
}  // namespace antlr4
