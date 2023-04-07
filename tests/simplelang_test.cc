#include <gtest/gtest.h>
#include <unistd.h>

#include <string_view>
#include <unordered_set>

#include "config_misc.h"
#include "frontend.h"
#include "ir.h"
#include "mutate.h"
#include "typesystem.h"
#include "utils.h"

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

class ParserTest : public ::testing::TestWithParam<std::string_view> {};

TEST_P(ParserTest, ParseValidTestCaseReturnNotNull) {
  std::string_view test_case = GetParam();

  auto program_root = parser(test_case.data());
  ASSERT_TRUE(program_root != nullptr);
  // program_root->deep_delete();
}

TEST_P(ParserTest, ValidTestCaseCanTranslate) {
  std::string_view test_case = GetParam();

  auto program_root = parser(test_case.data());
  ASSERT_TRUE(program_root != nullptr);

  std::vector<IRPtr> ir_set;
  auto root = program_root->translate(ir_set);
  // program_root->deep_delete();

  ASSERT_FALSE(ir_set.empty());
}

INSTANTIATE_TEST_SUITE_P(ValidTestCase, ParserTest,
                         ::testing::Values(
                             R"V0G0N(
    INT a = 1;
  )V0G0N",
                             R"V0G0N(
    INT a = 'x';
  )V0G0N",
                             R"V0G0N(
  STRUCT c {
  INT a;
  INT b;
  INT c;
  STRUCT d e = f;
  };
  )V0G0N",
                             R"V0G0N(
    INT a = 1;
    FOR(1){
      INT c = 1;
    }
    INT b = 2;)V0G0N"));

TEST(MutatorTest, MutateInitGoodTestCasesOnly) {
  std::string_view test_case = "INT a = 1;";

  mutation::Mutator mutator;

  std::string init_file_path =
      gen::Configuration::GetInstance().GetInitDirPath();
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
    std::string init_file_path =
        gen::Configuration::GetInstance().GetInitDirPath();
    vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());
    for (auto& f : file_list) {
      mutator.init_ir_library_from_a_file(f);
    }
  }

  mutation::Mutator mutator;
};

TEST_F(MutatorTestF, MutateGenerateDifferentTestCases) {
  std::string_view test_case = "INT a = 1; FLOAT b = 1.0; c + c;";

  std::unordered_set<std::string> unique_test_cases;

  while (unique_test_cases.size() < 20) {
    // Avoid mutated_times_ too large, so we make it clean every time.
    vector<IRPtr> ir_set;
    auto program_root = parser(test_case.data());
    auto root = program_root->translate(ir_set);
    // program_root->deep_delete();

    auto mutated_irs = mutator.mutate_all(ir_set);
    for (auto& ir : mutated_irs) {
      unique_test_cases.insert(ir->to_string());
    }
  }

  ASSERT_GE(unique_test_cases.size(), 20);
}

class AntlrMutatorTestF : public testing::Test {
 protected:
  void SetUp() override {
    std::shared_ptr<Frontend> frontend = std::make_shared<AntlrFrontend>();
    mutator = std::make_unique<mutation::Mutator>(frontend);
    std::string init_file_path =
        gen::Configuration::GetInstance().GetInitDirPath();
    vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());
    for (auto& f : file_list) {
      mutator->init_ir_library_from_a_file(f);
    }
  }

  std::unique_ptr<mutation::Mutator> mutator;
};

TEST_F(AntlrMutatorTestF, AntlrParserCanGenerateMutatableTestCases) {
  std::string_view test_case = "INT a = 1;";

  std::shared_ptr<Frontend> frontend = std::make_shared<AntlrFrontend>();
  auto root = frontend->TranslateToIR(test_case.data());

  for (size_t i = 0; i < 1000; ++i) {
    auto root = frontend->TranslateToIR(test_case.data());
    ASSERT_TRUE(root != nullptr) << test_case;

    vector<IRPtr> ir_set = collect_all_ir(root);

    auto mutated_irs = mutator->mutate_all(ir_set);
    for (auto& ir : mutated_irs) {
      auto new_root = frontend->TranslateToIR(ir->to_string());
      ASSERT_TRUE(new_root != nullptr) << ir->to_string();
    }
  }
}

TEST_F(MutatorTestF, MutateGenerateParsableTestCases) {
  std::string_view test_case = "INT a = 1;";

  for (size_t i = 0; i < 1000; ++i) {
    vector<IRPtr> ir_set;
    auto program_root = parser(test_case.data());
    auto root = program_root->translate(ir_set);
    // program_root->deep_delete();

    auto mutated_irs = mutator.mutate_all(ir_set);
    for (auto& ir : mutated_irs) {
      auto new_root = parser(ir->to_string());
      ASSERT_TRUE(new_root != nullptr) << ir->to_string();
    }
  }
}

// TODO: This is a flaky test, we need to fix it.
TEST(TypeSystemTest, ValidateFixDefineUse) {
  std::string_view test_case = "INT a = 1;\n c + c;\n";
  std::string_view validated_test_case = "INT a = 1 ;\n a + a ;\n ";

  /*
  auto program_root = parser(test_case.data());
  std::vector<IRPtr> ir_set;
  auto root = program_root->translate(ir_set);
  */

  std::shared_ptr<Frontend> frontend = std::make_shared<AntlrFrontend>();
  auto root = frontend->TranslateToIR(test_case.data());
  std::cerr << "Before extract: " << root->to_string() << std::endl;
  mutation::Mutator mutator(frontend);
  mutator.extract_struct(root);

  std::cerr << "After extract: " << root->to_string() << std::endl;
  typesystem::TypeSystem ts(frontend);
  ts.init();

  ASSERT_TRUE(ts.validate(root));
  ASSERT_TRUE(root != nullptr);
  EXPECT_EQ(root->to_string(), validated_test_case);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  if (!gen::Configuration::Initialize(
          GetRootPath() + "/grammars/simplelang_grammar/semantic.yml")) {
    std::cerr << "Failed to initialize configuration.\n";
    exit(-1);
  }
  return RUN_ALL_TESTS();
}
