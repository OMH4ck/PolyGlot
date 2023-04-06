#include "polyglot.h"

#include "ast.h"
#include "config_misc.h"
#include "define.h"
#include "utils.h"
#include "var_definition.h"

std::string_view PolyGlotMutator::get_next_test_case() {
  assert(!save_test_cases_.empty());
  current_input_ = save_test_cases_.back();
  save_test_cases_.pop_back();
  return current_input_;
}

void PolyGlotMutator::add_to_library(const char *mem) {
  if (auto ir = g_frontend->TranslateToIR(mem)) {
    g_mutator.add_ir_to_library(ir);
  }
}

size_t PolyGlotMutator::generate(const char *test_case) {
  vector<IRPtr> mutated_tree;
  auto root = g_frontend->TranslateToIR(test_case);
  if (root == nullptr) {
    return 0;
  }
  std::vector<IRPtr> ir_set = collect_all_ir(root);

  mutated_tree = g_mutator.mutate_all(ir_set);
  ;

  for (auto &ir : mutated_tree) {
    if (g_typesystem.validate(ir)) {
      save_test_cases_.push_back(ir->to_string());
    };
  }

  return save_test_cases_.size();
}

void PolyGlotMutator::do_libary_initialize() {
  vector<IRPtr> ir_set;

  std::string init_file_path = polyglot::gen::GetInitDirPath();
  vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());

  for (auto &f : file_list) {
    cerr << "init filename: " << f << endl;
    g_mutator.init_ir_library_from_a_file(f);
  }
  g_typesystem.init();
}
