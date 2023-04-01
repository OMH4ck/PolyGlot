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
  vector<IR *> ir_set;
  auto p_strip_sql = parser(mem);
  if (p_strip_sql) {
    auto root_ir = p_strip_sql->translate(ir_set);
    p_strip_sql->deep_delete();
    g_mutator.add_ir_to_library(root_ir);
    deep_delete(root_ir);
  }
}

size_t PolyGlotMutator::generate(const char *test_case) {
  Program *program_root;
  vector<IR *> ir_set, mutated_tree;
  program_root = parser(test_case);
  if (program_root == NULL) {
    return 0;
  }

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

  mutated_tree = g_mutator.mutate_all(ir_set);
  deep_delete(ir_set[ir_set.size() - 1]);

  for (auto &ir : mutated_tree) {
    if (polyglot::typesystem::TypeSystem::validate(ir)) {
      save_test_cases_.push_back(ir->to_string());
    }
    deep_delete(ir);
  }

  return save_test_cases_.size();
}

void PolyGlotMutator::do_libary_initialize() {
  vector<IR *> ir_set;

  std::string init_file_path = polyglot::gen::GetInitDirPath();
  vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());

  for (auto &f : file_list) {
    cerr << "init filename: " << init_file_path + f << endl;
    g_mutator.init_ir_library_from_a_file(init_file_path + f);
  }
  g_typesystem.init();
}