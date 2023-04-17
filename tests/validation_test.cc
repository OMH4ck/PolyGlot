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

#include <gtest/gtest.h>
#include <unistd.h>

#include <memory>
#include <string_view>
#include <unordered_set>

#include "config_misc.h"
#include "frontend.h"
#include "ir.h"
#include "mutate.h"
#include "spdlog/cfg/env.h"
#include "typesystem.h"
#include "utils.h"
#include "var_definition.h"

using namespace polyglot;

std::string GetRootPath() {
  char* p = getenv("POLYGLOT_ROOT");
  if (p != nullptr) {
    return std::string(p);
  } else {
    std::cerr << "POLYGLOT_ROOT is not set" << std::endl;
    exit(-1);
  }
}

TEST(ValidationTest, ScopeTreeBuildCorrectly) {
  std::string_view test_case = "INT a = 1;\n c + c;\n INT b = 2;";

  auto frontend = std::make_shared<AntlrFrontend>();
  auto root = frontend->TranslateToIR(test_case.data());
  // program_root->deep_delete();

  validation::SemanticValidator validator(frontend);
  auto scope_tree = validator.BuildScopeTreeWithSymbolTable(root);

  ScopePtr global_scope = scope_tree->GetScopeRoot();
  ASSERT_NE(global_scope, nullptr);
  ASSERT_EQ(global_scope->GetScopeType(), ScopeType::kScopeGlobal);

  const SymbolTable& global_symbol_table = global_scope->GetSymbolTable();
  auto def_a = global_symbol_table.GetDefinition("a");
  auto def_b = global_symbol_table.GetDefinition("b");

  ASSERT_TRUE(def_a.has_value());
  ASSERT_TRUE(def_b.has_value());
  ASSERT_LT(def_a.value().statement_id, def_b.value().statement_id);
}

/*
// TODO: This is a flaky test, we need to fix it.
TEST(TypeSystemTest, ValidateFixDefineUse) {
  std::string_view test_case = "INT a = 1;\n c + c;\n";
  std::string_view validated_test_case = "INT a = 1 ;\n a + a ;\n ";

  std::shared_ptr<Frontend> frontend = std::make_shared<AntlrFrontend>();
  auto root = frontend->TranslateToIR(test_case.data());
  std::cerr << "Before extract: " << root->ToString() << std::endl;
  mutation::Mutator mutator(frontend);
  mutator.ExtractStructure(root);

  std::cerr << "After extract: " << root->ToString() << std::endl;
  validation::SemanticValidator validator(frontend);
  ASSERT_TRUE(validator.Validate(root) ==
              validation::ValidationError::kSuccess);
  ASSERT_TRUE(root != nullptr);
  EXPECT_EQ(root->ToString(), validated_test_case);
}
*/

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  if (!gen::Configuration::Initialize(GetRootPath() +
                                      "/grammars/simplelang/semantic.yml")) {
    std::cerr << "Failed to initialize configuration.\n";
    exit(-1);
  }
  spdlog::cfg::load_env_levels();
  return RUN_ALL_TESTS();
}
