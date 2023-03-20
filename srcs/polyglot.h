#ifndef __POLYGLOT_H__
#define __POLYGLOT_H__
#include "mutate.h"
#include "typesystem.h"

#include <string>
#include <string_view>
#include <vector>

class PolyGlotMutator {
public:
  void do_libary_initialize();
  void add_to_library(const char *mem);
  size_t generate(const char *test_case);
  std::string_view get_next_test_case();
  // const std::string &current_input() const { return current_input_; }

private:
  Mutator g_mutator;
  std::string current_input_;
  TypeSystem g_typesystem;
  char *g_libary_path;
  char *g_current_input = NULL;
  std::vector<std::string> save_test_cases_;
};

#endif