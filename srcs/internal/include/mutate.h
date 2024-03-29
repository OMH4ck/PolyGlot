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

#ifndef __MUTATOR_H__
#define __MUTATOR_H__

// #include <queue>
#include <map>
#include <memory>
#include <set>

#include "frontend.h"
#include "ir.h"

namespace polyglot {

namespace mutation {

using std::map;
using std::set;

// TODO: Define how we do the mutation.
class MutationStrategy {};

class IRLibrary {
 public:
  void SaveIRRecursive(IRPtr ir);
  IRPtr GetRandomIR(IRTYPE type);

 private:
  std::map<IRTYPE, std::vector<IRPtr>> ir_library_;
  std::map<IRTYPE, std::set<unsigned long>> ir_library_hash_;
};

class Mutator {
 public:
  Mutator(std::shared_ptr<Frontend> frontend);
  std::vector<IRPtr> MutateIRs(std::vector<IRPtr> &v_ir_collector);
  std::vector<IRPtr> MutateIR(IRPtr input);
  void AddIRToLibrary(IRPtr);

  void ExtractStructure(IRPtr &);

 private:
  std::shared_ptr<Frontend> frontend_;
  bool should_mutate(IRPtr cur);
  void init_convertable_ir_type_map();
  IRPtr deep_copy_with_record(const IRPtr root, const IRPtr record);
  bool not_unknown(IRPtr r);

  // Delete and insert seems useless.
  // IRPtr strategy_delete(IRPtr cur);   // Done
  // IRPtr strategy_insert(IRPtr cur);   // Done
  IRPtr strategy_replace(IRPtr cur);  // done
  IRPtr strategy_replace_with_constraint(IRPtr cur);
  bool lucky_enough_to_be_mutated(unsigned int mutated_times);  // done

  bool replace(IRPtr root, IRPtr old_ir, IRPtr new_ir);  // done

  // void add_ir_to_library_limited(IRPtr);  // DONE

  // IRPtr get_ir_from_library(IRTYPE);  // DONE

  bool is_ir_type_connvertable(IRTYPE a, IRTYPE b);
  void debug(IRPtr root);
  bool can_be_mutated(IRPtr);

  IRPtr record_ = nullptr;

  set<IRTYPE> not_mutatable_types_;
  set<IRTYPE> string_types_;
  set<IRTYPE> int_types_;
  set<IRTYPE> float_types_;

  map<IRTYPE, set<IRTYPE>> m_convertable_map_;
  IRLibrary ir_library_;
};

}  // namespace mutation
}  // namespace polyglot
#endif
