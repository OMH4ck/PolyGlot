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

#include "polyglot.h"

#include <memory>

#include "configuration.h"
// #include "define.h"
#include "frontend.h"
#include "ir.h"
#include "typesystem.h"
#include "utils.h"
#include "var_definition.h"

std::string_view PolyGlotMutator::GetNextMutatedTestCase() {
  assert(!save_test_cases_.empty());
  current_input_ = save_test_cases_.back();
  save_test_cases_.pop_back();
  return current_input_;
}

void PolyGlotMutator::AddToIRLibrary(const char *mem) {
  if (auto ir = g_frontend->TranslateToIR(mem)) {
    g_mutator.AddIRToLibrary(ir);
  }
}

size_t PolyGlotMutator::Mutate(const char *test_case) {
  vector<polyglot::IRPtr> mutated_tree;
  auto root = g_frontend->TranslateToIR(test_case);
  if (root == nullptr) {
    return 0;
  }
  std::vector<polyglot::IRPtr> ir_set = CollectAllIRs(root);
  if (ir_set.size() > 1500) {
    return 0;
  }

  mutated_tree = g_mutator.MutateIRs(ir_set);
  ;

  for (auto &ir : mutated_tree) {
    if (polyglot::config::Configuration::GetInstance().SyntaxOnly()) {
      // TODO: Replace this with a validator!
      if (GetChildNum(ir) > 1500) {
        continue;
      }
      std::string ir_str = ir->ToString();
      if (g_frontend->Parsable(ir_str)) {
        save_test_cases_.push_back(ir_str);
      } else {
        // std::cout << "not parsable: " << ir_str << std::endl;
        // std::cout << "Before: " << test_case << std::endl;
        // TODO: Make sure everything is parsable.
        // assert(0);
        continue;
      }
    } else {
      if (g_validator.Validate(ir) ==
          polyglot::validation::ValidationError::kSuccess) {
        save_test_cases_.push_back(ir->ToString());
      }
    }
  }

  return save_test_cases_.size();
}

PolyGlotMutator *PolyGlotMutator::CreateInstance(std::string_view config) {
  std::shared_ptr<polyglot::Frontend> frontend =
      std::make_shared<polyglot::AntlrFrontend>();

  assert(polyglot::config::Configuration::Initialize(config) &&
         "config file contains some errors!");

  PolyGlotMutator *mutator = new PolyGlotMutator(frontend);
  mutator->Initialize(config);
  return mutator;
}

void PolyGlotMutator::Initialize(std::string_view config_path) {
  vector<polyglot::IRPtr> ir_set;

  std::string init_file_path =
      polyglot::config::Configuration::GetInstance().GetInitDirPath();
  vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());

  for (auto &f : file_list) {
    std::string content = ReadFileIntoString(f);
    if (polyglot::IRPtr root = g_frontend->TranslateToIR(content)) {
      std::cerr << "init filename: " << f << " Success" << endl;
      g_mutator.AddIRToLibrary(root);
    } else {
      std::cerr << "init filename: " << f << " Failed" << endl;
    }
  }
}
