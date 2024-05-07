/*
 * Copyright (c) 2023 OMH4ck
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

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
  void AddToIRLibrary(const char *mem);
  size_t Mutate(const char *test_case);
  std::string_view GetNextMutatedTestCase();
  bool HasMutatedTextCase() const { return !save_test_cases_.empty(); }
  // const std::string &current_input() const { return current_input_; }

  static PolyGlotMutator *CreateInstance(std::string_view config);

 private:
  PolyGlotMutator(std::shared_ptr<polyglot::Frontend> frontend)
      : g_frontend(frontend), g_mutator(frontend), g_validator(frontend) {};
  void Initialize(std::string_view);
  std::shared_ptr<polyglot::Frontend> g_frontend;
  polyglot::mutation::Mutator g_mutator;
  std::string current_input_;
  polyglot::validation::SemanticValidator g_validator;
  char *g_libary_path;
  char *g_current_input = nullptr;
  std::vector<std::string> save_test_cases_;
};

#endif
