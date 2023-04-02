#include <gtest/gtest.h>

#include <string_view>
#include <unordered_set>

#include "config_misc.h"
#include "ir.h"
#include "mutate.h"
#include "utils.h"

class ParserTest : public ::testing::TestWithParam<std::string_view> {};

TEST_P(ParserTest, ParseValidTestCaseReturnNotNull) {
  std::string_view test_case = GetParam();

  Program* program_root = parser(test_case.data());
  ASSERT_TRUE(program_root != nullptr);
  program_root->deep_delete();
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
    int a = 'x';
  )V0G0N",
                             R"V0G0N(
  STRUCT c {
  int a;
  int b;
  int c;
  STRUCT d e = f;
  };
  )V0G0N",
                             R"V0G0N(
    int a = 1;
    FOR(1){
      int c = 1;
    }
    int b = 2;)V0G0N"));

TEST(MutatorTest, MutateInitGoodTestCasesOnly) {
  std::string_view test_case = "int a = 1;";

  polyglot::mutation::Mutator mutator;

  std::string init_file_path = polyglot::gen::GetInitDirPath();
  vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());

  size_t valid_test_case_count = 0;

  for (auto& f : file_list) {
    if (mutator.init_ir_library_from_a_file(f)) {
      ++valid_test_case_count;
    }
  }

  // Put an bad test case in the init dir.
  ASSERT_EQ(valid_test_case_count, file_list.size() - 1);
}

class MutatorTestF : public testing::Test {
 protected:
  void SetUp() override {
    std::string init_file_path = polyglot::gen::GetInitDirPath();
    vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());
    for (auto& f : file_list) {
      mutator.init_ir_library_from_a_file(f);
    }
  }

  polyglot::mutation::Mutator mutator;
};

TEST_F(MutatorTestF, MutateGenerateDifferentTestCases) {
  std::string_view test_case = "int a = 1;";

  std::unordered_set<std::string> unique_test_cases;

  while (unique_test_cases.size() < 20) {
    // Avoid mutated_times_ too large, so we make it clean every time.
    vector<IR*> ir_set;
    Program* program_root = parser(test_case.data());
    auto root = program_root->translate(ir_set);
    program_root->deep_delete();

    auto mutated_irs = mutator.mutate_all(ir_set);
    for (auto& ir : mutated_irs) {
      unique_test_cases.insert(ir->to_string());
      deep_delete(ir);
    }
    deep_delete(root);
  }

  ASSERT_GE(unique_test_cases.size(), 20);
}

TEST_F(MutatorTestF, MutateGenerateParsableTestCases) {
  std::string_view test_case = "int a = 1;";

  for (size_t i = 0; i < 1000; ++i) {
    vector<IR*> ir_set;
    Program* program_root = parser(test_case.data());
    auto root = program_root->translate(ir_set);
    program_root->deep_delete();

    auto mutated_irs = mutator.mutate_all(ir_set);
    for (auto& ir : mutated_irs) {
      Program* new_root = parser(ir->to_string());
      ASSERT_TRUE(new_root != nullptr) << ir->to_string();
      new_root->deep_delete();
      deep_delete(ir);
    }
    deep_delete(root);
  }
}
