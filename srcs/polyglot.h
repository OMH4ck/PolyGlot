#ifndef __POLYGLOT_H__
#define __POLYGLOT_H__
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "frontend.h"
#include "mutate.h"
#include "typesystem.h"
class PolyGlotMutator {
 public:
  void add_to_library(const char *mem);
  size_t generate(const char *test_case);
  std::string_view get_next_test_case();
  // const std::string &current_input() const { return current_input_; }

  static PolyGlotMutator *CreateInstance(std::string_view config,
                                         polyglot::FrontendType frontend_type);

 private:
  PolyGlotMutator(std::shared_ptr<polyglot::Frontend> frontend)
      : g_frontend(frontend), g_mutator(frontend){};
  void initialize(std::string_view);
  std::shared_ptr<polyglot::Frontend> g_frontend;
  polyglot::mutation::Mutator g_mutator;
  std::string current_input_;
  polyglot::typesystem::TypeSystem g_typesystem;
  char *g_libary_path;
  char *g_current_input = nullptr;
  std::vector<std::string> save_test_cases_;
};

#endif
