#include "polyglot.h"

#include <memory>

#include "ast.h"
#include "config_misc.h"
#include "define.h"
#include "frontend.h"
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
    g_mutator.AddIRToLibrary(ir);
  }
}

size_t PolyGlotMutator::generate(const char *test_case) {
  vector<IRPtr> mutated_tree;
  auto root = g_frontend->TranslateToIR(test_case);
  if (root == nullptr) {
    return 0;
  }
  std::vector<IRPtr> ir_set = collect_all_ir(root);
  if (ir_set.size() > 1500) {
    return 0;
  }

  mutated_tree = g_mutator.MutateIRs(ir_set);
  ;

  for (auto &ir : mutated_tree) {
    if (polyglot::gen::Configuration::GetInstance().SyntaxOnly()) {
      std::string ir_str = ir->to_string();
      if (g_frontend->Parsable(ir_str)) {
        save_test_cases_.push_back(ir_str);
      } else {
        std::cout << "not parsable: " << ir_str << std::endl;
        std::cout << "Before: " << test_case << std::endl;
        assert(0);
      }
    } else {
      if (g_typesystem.validate(ir)) {
        save_test_cases_.push_back(ir->to_string());
      }
    }
  }

  return save_test_cases_.size();
}

PolyGlotMutator *PolyGlotMutator::CreateInstance(
    std::string_view config, polyglot::FrontendType frontend_type) {
  std::shared_ptr<polyglot::Frontend> frontend = nullptr;
  if (frontend_type == polyglot::FrontendType::kANTLR) {
    frontend = std::make_shared<polyglot::AntlrFrontend>();
  } else {
    assert(false && "unknown frontend type");
  }

  assert(polyglot::gen::Configuration::Initialize(config) &&
         "config file contains some errors!");

  PolyGlotMutator *mutator = new PolyGlotMutator(frontend);
  mutator->initialize(config);
  return mutator;
}

void PolyGlotMutator::initialize(std::string_view config_path) {
  vector<IRPtr> ir_set;

  std::string init_file_path =
      polyglot::gen::Configuration::GetInstance().GetInitDirPath();
  vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());

  for (auto &f : file_list) {
    cerr << "init filename: " << f << endl;
    g_mutator.init_ir_library_from_a_file(f);
  }
  g_typesystem.init();
}
