#include <gtest/gtest.h>

#include "mutate.h"
#include "utils.h"

TEST(MutatorTest, ParseTest) {
  const char* kTestCase = R"V0G0N(
    int a = 1;
  )V0G0N";

  Program* program_root = parser(kTestCase);
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