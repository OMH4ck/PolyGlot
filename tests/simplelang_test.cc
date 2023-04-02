#include <gtest/gtest.h>

#include <string_view>

#include "mutate.h"
#include "utils.h"

class ParserTest : public ::testing::TestWithParam<std::string_view> {};

TEST_P(ParserTest, ParseValidTestCaseReturnNotNull) {
  std::string_view test_case = GetParam();

  Program* program_root = parser(test_case.data());
  ASSERT_TRUE(program_root != nullptr);
  program_root->deep_delete();
  /*
  try {
    program_root->translate(ir_set);
  } catch (...) {
    for (auto ir : ir_set) {
      delete ir;
    }
    program_root->deep_delete();
    return 0;
  }
  program_root->deep_delete();
  */
}

TEST_P(ParserTest, ValidTestCaseCanTranslate) {
  std::string_view test_case = GetParam();

  Program* program_root = parser(test_case.data());
  ASSERT_TRUE(program_root != nullptr);

  std::vector<IR*> ir_set;
  auto root = program_root->translate(ir_set);
  program_root->deep_delete();

  ASSERT_FALSE(ir_set.empty());
  deep_delete(root);
}

INSTANTIATE_TEST_SUITE_P(ValidTestCase, ParserTest,
                         ::testing::Values(
                             R"V0G0N(
    int a = 1;
  )V0G0N",
                             R"V0G0N(
    int a = 1;
    FOR(1){
      int c = 1;
    }
    int b = 2;)V0G0N"));