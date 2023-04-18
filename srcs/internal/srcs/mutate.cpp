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

// #include <queue>
#include "mutate.h"

#include <assert.h>
#include <fcntl.h>

#include <algorithm>
#include <cfloat>
#include <climits>
#include <cstdio>
#include <deque>
#include <fstream>
#include <gsl/assert>
#include <gsl/gsl>
#include <iterator>
#include <map>
#include <unordered_set>

#include "absl/random/random.h"
#include "config_misc.h"
// #include "define.h"
#include "spdlog/spdlog.h"
#include "utils.h"

using namespace std;

namespace polyglot {

namespace {
unsigned long hash(string &sql) {
  return ducking_hash(sql.c_str(), sql.size());
}

unsigned long hash(IRPtr root) {
  auto tmp_str = root->ToString();
  return hash(tmp_str);
}
}  // namespace

namespace mutation {

#define _NON_REPLACE_

// #define MUTATE_UNKNOWN

#define MUTATE_DBG 0

bool Mutator::not_unknown(IRPtr r) {
  return r->Type() != frontend_->GetUnknownType();
}

static inline bool is_leaf(IRPtr r) {
  return !r->HasLeftChild() && !r->HasRightChild();
}

Mutator::Mutator(std::shared_ptr<Frontend> frontend) {
  srand(time(nullptr));
  frontend_ = frontend;
  float_types_.insert(frontend_->GetFloatLiteralType());
  int_types_.insert(frontend_->GetIntLiteralType());
  string_types_.insert(frontend_->GetStringLiteralType());
  init_convertable_ir_type_map();
}
// Need No fix
IRPtr Mutator::deep_copy_with_record(const IRPtr root, const IRPtr record) {
  Expects(record != nullptr);
  IRPtr left = nullptr, right = nullptr, copy_res;

  if (root->HasLeftChild())
    left = deep_copy_with_record(
        root->LeftChild(), record);  // do you have a second version for
                                     // deep_copy that accept only one argument?
  if (root->HasRightChild())
    right = deep_copy_with_record(root->RightChild(),
                                  record);  // no I forget to update here

  copy_res = std::make_shared<IR>(*root);
  copy_res->SetLeftChild(left);
  copy_res->SetRightChild(right);
  if (root == record) {
    this->record_ = copy_res;
  }

  return copy_res;
}

bool Mutator::should_mutate(IRPtr cur) {
  if (cur->Type() == frontend_->GetUnknownType()) return false;
  if (not_mutatable_types_.find(cur->Type()) != not_mutatable_types_.end())
    return false;
  if (is_leaf(cur)) return false;
  if (!can_be_mutated(cur)) return false;
  return true;
}

vector<IRPtr> Mutator::MutateIRs(vector<IRPtr> &irs_to_mutate) {
  vector<IRPtr> res;
  std::unordered_set<unsigned long> res_hash;
  IRPtr root = irs_to_mutate.back();

  auto tmp_str = root->ToString();
  res_hash.insert(hash(tmp_str));
  int counter = 0;

  /*
  if(irs_to_mutate.size() > 2000){
    std::cout << "Large test case: " << root->to_string() << std::endl;
  }
  */
  for (IRPtr ir : irs_to_mutate) {
    counter++;
    if (ir == root || !should_mutate(ir)) continue;
    // std::cout << "Mutating one, " << irs_to_mutate.size() << ", idx: " <<
    // counter << std::endl;
    SPDLOG_DEBUG("Mutating type: {}", frontend_->GetIRTypeStr(ir->Type()));
    vector<IRPtr> new_variants = MutateIR(ir);

    for (IRPtr i : new_variants) {
      IRPtr new_ir_tree = deep_copy_with_record(root, ir);
      SPDLOG_DEBUG("NEW type: {}", frontend_->GetIRTypeStr(i->Type()));

      replace(new_ir_tree, this->record_, i);

      IRPtr backup = deep_copy(new_ir_tree);
      ExtractStructure(new_ir_tree);

      string tmp = new_ir_tree->ToString();
      unsigned tmp_hash = hash(tmp);
      if (res_hash.find(tmp_hash) != res_hash.end()) {
        ;
        ;
        continue;
      }

      res_hash.insert(tmp_hash);
      ;

      res.push_back(backup);
    }
  }

  return res;
}

void Mutator::AddIRToLibrary(IRPtr cur) {
  ExtractStructure(cur);

  ir_library_.SaveIRRecursive(cur);
  return;
}

void IRLibrary::SaveIRRecursive(IRPtr cur) {
  const auto type = cur->Type();
  const auto h = hash(cur);

  if (ir_library_hash_[type].contains(h)) {
    return;
  }

  constexpr size_t kMaxIRNumForOneType = 0x200;
  auto &ir_type_library = ir_library_[type];
  if (ir_type_library.size() >= kMaxIRNumForOneType) {
    const auto rand_idx = get_rand_int(ir_type_library.size());
    std::swap(ir_type_library[rand_idx], ir_type_library.back());
    const auto removed_ir = std::move(ir_type_library.back());
    ir_type_library.pop_back();
    const auto removed_h = hash(removed_ir);
    ir_library_hash_[type].erase(removed_h);
  }

  // TODO: Don't save unknown type.
  // No need to deep copy any more since we use shared_ptr.
  ir_type_library.push_back(cur);
  ir_library_hash_[type].insert(h);

  if (cur->HasLeftChild()) {
    SaveIRRecursive(cur->LeftChild());
  }
  if (cur->HasRightChild()) {
    SaveIRRecursive(cur->RightChild());
  }
}

void Mutator::init_convertable_ir_type_map() {
  for (auto &p : gen::Configuration::GetInstance().GetConvertableTypes()) {
    m_convertable_map_[frontend_->GetIRTypeByStr(p.first)].insert(
        frontend_->GetIRTypeByStr(p.second));
  }
}

vector<IRPtr> Mutator::MutateIR(IRPtr input) {
  vector<IRPtr> res;

  constexpr size_t kConstraintReplaceTimes = 0x6;
  for (int i = 0; i < kConstraintReplaceTimes; i++) {
    if (IRPtr tmp = strategy_replace_with_constraint(input)) {
      res.push_back(tmp);
    }
  }

  // if (IRPtr tmp = strategy_insert(input)) {
  //   res.push_back(tmp);
  //  }

  if (IRPtr tmp = strategy_replace(input)) {
    res.push_back(tmp);
  }

  return res;
}

bool Mutator::replace(IRPtr root, IRPtr old_ir, IRPtr new_ir) {
  auto parent_ir = locate_parent(root, old_ir);
  assert(parent_ir);
  /*
  if(parent_ir == nullptr){
      return false;
  }
  */
  if (parent_ir->HasLeftChild() && parent_ir->LeftChild() == old_ir) {
    parent_ir->SetLeftChild(new_ir);
    return true;
  } else if (parent_ir->HasRightChild() && parent_ir->RightChild() == old_ir) {
    parent_ir->SetRightChild(new_ir);
    return true;
  }
  assert(false && "should not reach here");
}

bool Mutator::is_ir_type_connvertable(IRTYPE a, IRTYPE b) {
  if (a == b) return true;
  if (m_convertable_map_.find(a) == m_convertable_map_.end()) {
    return false;
  }
  if (m_convertable_map_[a].find(b) == m_convertable_map_[a].end()) {
    return false;
  }

  return true;
}

IRPtr Mutator::strategy_replace_with_constraint(IRPtr cur) {
  assert(cur);
  // if(!can_be_mutated(cur)) return nullptr;

  if (!cur->HasOP() ||
      (cur->OP()->prefix.empty() && cur->OP()->middle.empty() &&
       cur->OP()->suffix.empty())) {
    return nullptr;
  }

  IRTYPE replace_type = cur->Type();
  if (m_convertable_map_.find(replace_type) != m_convertable_map_.end()) {
    replace_type = *(random_pick(m_convertable_map_[cur->Type()]));
  }
  // if(cur->type_ == kIterationStatement && replace_type ==
  // kSelectionStatement) cout << "try to mutate while: ";

  auto res = ir_library_.GetRandomIR(replace_type);

  if (res->HasLeftChild() && !cur->HasLeftChild() ||
      cur->HasLeftChild() && !res->HasLeftChild() ||
      res->HasRightChild() && !cur->HasRightChild() ||
      cur->HasRightChild() && !res->HasRightChild()) {
    // ;
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return nullptr;
  }

  if (res->HasLeftChild() &&
      !is_ir_type_connvertable(res->LeftChild()->Type(),
                               cur->LeftChild()->Type())) {
    // ;
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return nullptr;
  }

  if (res->HasRightChild() &&
      !is_ir_type_connvertable(res->RightChild()->Type(),
                               cur->RightChild()->Type())) {
    // ;
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return nullptr;
  }

  IRPtr save_res_left = res->LeftChild();
  IRPtr save_res_right = res->RightChild();
  IRPtr save_res = res;
  res->SetLeftChild(nullptr);
  res->SetRightChild(nullptr);

  res = deep_copy(res);

  save_res->SetLeftChild(save_res_left);
  save_res->SetRightChild(save_res_right);

  if (cur->HasLeftChild()) {
    res->SetLeftChild(deep_copy(cur->LeftChild()));
  }
  if (cur->HasRightChild()) {
    res->SetRightChild(deep_copy(cur->RightChild()));
  }

  // if(cur->type_ == kIterationStatement) cout << "success, which becomes " <<
  // res->to_string() << endl;
  return res;
}

IRPtr Mutator::strategy_replace(IRPtr cur) {
  assert(cur);

  IRPtr res = nullptr;
  auto randint = get_rand_int(3);
  switch (randint) {
    case 0:
      if (cur->HasLeftChild() && not_unknown(cur->LeftChild())) {
        res = deep_copy(cur);
        auto new_node = ir_library_.GetRandomIR(res->LeftChild()->Type());
        res->SetLeftChild(deep_copy(new_node));
      }
      break;

    case 1:
      if (cur->HasRightChild() && not_unknown(cur->RightChild())) {
        res = deep_copy(cur);
        auto new_node = ir_library_.GetRandomIR(res->RightChild()->Type());
        res->SetRightChild(deep_copy(new_node));
      }
      break;

    case 2:
      if (cur->HasLeftChild() && cur->HasRightChild() &&
          not_unknown(cur->LeftChild()) && not_unknown(cur->RightChild())) {
        res = deep_copy(cur);

        auto new_left = ir_library_.GetRandomIR(res->LeftChild()->Type());
        auto new_right = ir_library_.GetRandomIR(res->RightChild()->Type());
        ;
        res->SetRightChild(deep_copy(new_right));

        res->SetLeftChild(deep_copy(new_left));
      }
      break;
  }
  return res;
}

constexpr size_t kMaxMutationTimes = 500;
// Need No Fix
bool Mutator::lucky_enough_to_be_mutated(unsigned int mutated_times) {
  if (get_rand_int(mutated_times + 1) < kMaxMutationTimes) {
    return true;
  }
  return false;
}

// Fix, if no item, generate from scratch
IRPtr IRLibrary::GetRandomIR(IRTYPE type) {
  // TODO: Fix the type of the empty IR.
  static IRPtr empty_ir =
      std::make_shared<IR>(0x1234567 /*Should be a random type*/, "");
  if (ir_library_[type].empty()) return empty_ir;
  return vector_rand_ele(ir_library_[type]);
}

void Mutator::ExtractStructure(IRPtr &root) {
  static unsigned long iid = 0;
  auto type = root->Type();

  if (root->HasLeftChild()) {
    if (root->LeftChild()->GetDataType() == kFixUnit) {
      ;
      root->SetLeftChild(
          std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME"));
    } else {
      ExtractStructure(root->LeftChild());
    }
  }
  if (root->HasRightChild()) {
    if (root->RightChild()->GetDataType() == kFixUnit) {
      ;
      root->SetRightChild(
          std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME"));
    } else {
      ExtractStructure(root->RightChild());
    }
  }

  if (root->HasLeftChild() || root->HasRightChild()) return;

  // TODO: Verify whether this should be == or !=.
  /*
  if (root->GetDataType() == kDataDefault) {
    root->SetString("x");
    return;
  }
  */
  // #endif
  if (string_types_.find(type) != string_types_.end()) {
    root->SetString("'x'");
  } else if (int_types_.find(type) != int_types_.end()) {
    root->SetInt(1);
  } else if (float_types_.find(type) != float_types_.end()) {
    root->SetFloat(1.1);
  }
}

bool Mutator::can_be_mutated(IRPtr cur) {
  // #ifdef SYNTAX_ONLY
  // return true;
  // #else
  bool res = true;
  if (cur->GetDataType() == kVariableDefinition ||
      cur->GetDataType() == kVariableType ||
      cur->GetDataType() == kClassDefinition) {
    return false;
  }
  if (cur->HasLeftChild()) res = res && can_be_mutated(cur->LeftChild());
  if (cur->HasRightChild()) res = res && can_be_mutated(cur->RightChild());
  return res;
  // #endif
}

}  // namespace mutation
}  // namespace polyglot
