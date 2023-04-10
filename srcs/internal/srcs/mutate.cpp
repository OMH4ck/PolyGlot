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
#include "define.h"
#include "spdlog/spdlog.h"
#include "utils.h"

using namespace std;

namespace polyglot {

namespace mutation {

#define _NON_REPLACE_

// #define MUTATE_UNKNOWN

#define MUTATE_DBG 0

bool Mutator::not_unknown(IRPtr r) {
  return r->type_ != frontend_->GetUnknownType();
}

static inline bool is_leaf(IRPtr r) {
  return r->left_ == nullptr && r->right_ == nullptr;
}

Mutator::Mutator(std::shared_ptr<Frontend> frontend) {
  srand(time(nullptr));
  if (frontend == nullptr) {
    frontend_ = std::make_shared<AntlrFrontend>();
  } else {
    frontend_ = frontend;
  }
  float_types_.insert(frontend_->GetFloatLiteralType());
  int_types_.insert(frontend_->GetIntLiteralType());
  string_types_.insert(frontend_->GetStringLiteralType());
  init_convertable_ir_type_map();
}
// Need No fix
IRPtr Mutator::deep_copy_with_record(const IRPtr root, const IRPtr record) {
  Expects(record != nullptr);
  IRPtr left = nullptr, right = nullptr, copy_res;

  if (root->left_)
    left = deep_copy_with_record(
        root->left_, record);  // do you have a second version for deep_copy
                               // that accept only one argument?
  if (root->right_)
    right = deep_copy_with_record(root->right_,
                                  record);  // no I forget to update here

  std::shared_ptr<IROperator> op = nullptr;
  if (root->op_ != nullptr) {
    op = std::make_shared<IROperator>(root->op_->prefix_, root->op_->middle_,
                                      root->op_->suffix_);
  }
  copy_res = std::make_shared<IR>(
      root->type_, op, left, right, root->float_val_, root->str_val_,
      root->name_, root->mutated_times_, root->scope_, root->data_flag_);

  copy_res->data_type_ = root->data_type_;

  if (root == record) {
    this->record_ = copy_res;
  }

  return copy_res;
}

bool Mutator::should_mutate(IRPtr cur) {
  if (cur->type_ == frontend_->GetUnknownType()) return false;
  if (not_mutatable_types_.find(cur->type_) != not_mutatable_types_.end())
    return false;
  if (is_leaf(cur)) return false;
  if (!can_be_mutated(cur)) return false;
  return true;
}

vector<IRPtr> Mutator::MutateIRs(vector<IRPtr> &irs_to_mutate) {
  vector<IRPtr> res;
  std::unordered_set<unsigned long> res_hash;
  IRPtr root = irs_to_mutate.back();

  auto tmp_str = root->to_string();
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
    spdlog::debug("Mutating type: {}", frontend_->GetIRTypeStr(ir->type_));
    vector<IRPtr> new_variants = MutateIR(ir);

    for (IRPtr i : new_variants) {
      IRPtr new_ir_tree = deep_copy_with_record(root, ir);
      spdlog::debug("NEW type: {}", frontend_->GetIRTypeStr(i->type_));

      replace(new_ir_tree, this->record_, i);

      IRPtr backup = deep_copy(new_ir_tree);
      extract_struct(new_ir_tree);
      string tmp = new_ir_tree->to_string();
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
  extract_struct(cur);

  add_ir_to_library_limited(cur);
  return;
}

void Mutator::add_ir_to_library_limited(IRPtr cur) {
  const auto type = cur->type_;
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

  ir_type_library.push_back(deep_copy(cur));
  ir_library_hash_[type].insert(h);

  if (cur->left_) {
    add_ir_to_library_limited(cur->left_);
  }
  if (cur->right_) {
    add_ir_to_library_limited(cur->right_);
  }
}

void Mutator::init_convertable_ir_type_map() {
  for (auto &p : gen::Configuration::GetInstance().GetConvertableTypes()) {
    m_convertable_map_[frontend_->GetIRTypeByStr(p.first)].insert(
        frontend_->GetIRTypeByStr(p.second));
  }
}

bool Mutator::init_ir_library_from_a_file(string filename) {
  char content[0x4000] = {0};
  auto fd = open(filename.c_str(), 0);

  assert(read(fd, content, 0x3fff) > 0);
  close(fd);

  auto res = frontend_->TranslateToIR(content);
  if (res == nullptr) {
    std::cout << "Failed to init " << filename << std::endl;
    return false;
  }

  AddIRToLibrary(res);
  cout << "init " << filename << " success" << endl;
  return true;
}

vector<IRPtr> Mutator::MutateIR(IRPtr input) {
  vector<IRPtr> res;

  if (!lucky_enough_to_be_mutated(input->mutated_times_)) {
    // TODO: Why this is not triggered?
    assert(0);
    return res;  // return a empty set if the IR is not mutated
  }

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

  input->mutated_times_ += res.size();
  for (IRPtr i : res) {
    assert(i != nullptr && "should not be null");
    i->mutated_times_ = input->mutated_times_;
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
  if (parent_ir->left_ == old_ir) {
    ;
    parent_ir->left_ = new_ir;
    return true;
  } else if (parent_ir->right_ == old_ir) {
    ;
    parent_ir->right_ = new_ir;
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

  if (cur->op_ == nullptr ||
      (cur->op_->prefix_.empty() && cur->op_->middle_.empty() &&
       cur->op_->suffix_.empty())) {
    return nullptr;
  }

  IRTYPE replace_type = cur->type_;
  if (m_convertable_map_.find(replace_type) != m_convertable_map_.end()) {
    replace_type = *(random_pick(m_convertable_map_[cur->type_]));
  }
  // if(cur->type_ == kIterationStatement && replace_type ==
  // kSelectionStatement) cout << "try to mutate while: ";

  auto res = get_ir_from_library(replace_type);

  if (res->left_ && !cur->left_ || cur->left_ && !res->left_ ||
      res->right_ && !cur->right_ || cur->right_ && !res->right_) {
    // ;
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return nullptr;
  }

  if (res->left_ &&
      !is_ir_type_connvertable(res->left_->type_, cur->left_->type_)) {
    // ;
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return nullptr;
  }

  if (res->right_ &&
      !is_ir_type_connvertable(res->right_->type_, cur->right_->type_)) {
    // ;
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return nullptr;
  }

  auto save_res_left = res->left_;
  auto save_res_right = res->right_;
  auto save_res = res;
  res->left_ = nullptr;
  res->right_ = nullptr;

  res = deep_copy(res);

  save_res->left_ = save_res_left;
  save_res->right_ = save_res_right;

  if (cur->left_) {
    res->left_ = deep_copy(cur->left_);
  }
  if (cur->right_) {
    res->right_ = deep_copy(cur->right_);
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
      if (cur->left_ != nullptr && not_unknown(cur->left_)) {
        res = deep_copy(cur);
        auto new_node = get_ir_from_library(res->left_->type_);
        res->left_ = deep_copy(new_node);
      }
      break;

    case 1:
      if (cur->right_ != nullptr && not_unknown(cur->right_)) {
        res = deep_copy(cur);
        auto new_node = get_ir_from_library(res->right_->type_);
        res->right_ = deep_copy(new_node);
      }
      break;

    case 2:
      if (cur->left_ != nullptr && cur->right_ != nullptr &&
          not_unknown(cur->left_) && not_unknown(cur->right_)) {
        res = deep_copy(cur);

        auto new_left = get_ir_from_library(res->left_->type_);
        auto new_right = get_ir_from_library(res->right_->type_);
        ;
        res->right_ = deep_copy(new_right);

        res->left_ = deep_copy(new_left);
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
IRPtr Mutator::get_ir_from_library(IRTYPE type) {
  static IRPtr empty_ir =
      std::make_shared<IR>(frontend_->GetStringLiteralType(), "");
  if (ir_library_[type].empty()) return empty_ir;
  return vector_rand_ele(ir_library_[type]);
}

unsigned long Mutator::hash(string &sql) {
  return ducking_hash(sql.c_str(), sql.size());
}

unsigned long Mutator::hash(IRPtr root) {
  auto tmp_str = root->to_string();
  return this->hash(tmp_str);
}

// Need No Fix
void Mutator::debug(IRPtr root) {
  // cout << get_string_by_type(root->type_) << endl;
  cout << ir_library_.size() << endl;
  for (auto &i : ir_library_) {
    cout << frontend_->GetIRTypeStr(i.first) << ": " << i.second.size() << endl;
  }
}

void Mutator::extract_struct(IRPtr root) {
  static unsigned long iid = 0;
  auto type = root->type_;

#ifndef SYNTAX_ONLY
  if (root->left_) {
    if (root->left_->data_type_ == kDataFixUnit) {
      ;
      root->left_ =
          std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME");
    } else {
      extract_struct(root->left_);
    }
  }
  if (root->right_) {
    if (root->right_->data_type_ == kDataFixUnit) {
      ;
      root->right_ =
          std::make_shared<IR>(frontend_->GetStringLiteralType(), "FIXME");
    } else {
      extract_struct(root->right_);
    }
  }
#else
  if (root->left_) {
    extract_struct(root->left_);
  }
  if (root->right_) {
    extract_struct(root->right_);
  }
#endif

  if (root->left_ || root->right_) return;

  /*
#ifdef SYNTAX_ONLY
  if(root->str_val_.empty() == false){
      root->str_val_ = "x" + to_string(iid++);
      return ;
  }
#else
*/
  // TODO: Verify whether this should be == or !=.
  if (root->data_type_ == kDataWhatever) {
    root->str_val_ = "x";
    return;
  }
  // #endif
  if (string_types_.find(type) != string_types_.end()) {
    root->str_val_ = "'x'";
  } else if (int_types_.find(type) != int_types_.end()) {
    root->int_val_ = 1;
  } else if (float_types_.find(type) != float_types_.end()) {
    root->float_val_ = 1.0;
  }
}

bool Mutator::can_be_mutated(IRPtr cur) {
  // #ifdef SYNTAX_ONLY
  // return true;
  // #else
  bool res = true;
  if (cur->data_type_ == kDataVarDefine || isDefine(cur->data_flag_) ||
      cur->data_type_ == kDataVarType || cur->data_type_ == kDataClassType) {
    return false;
  }
  if (cur->left_) res = res && can_be_mutated(cur->left_);
  if (cur->right_) res = res && can_be_mutated(cur->right_);
  return res;
  // #endif
}

}  // namespace mutation
}  // namespace polyglot
