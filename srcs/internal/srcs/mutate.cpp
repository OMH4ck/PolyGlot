// #include <queue>
#include <assert.h>
#include <fcntl.h>

#include <algorithm>
#include <cfloat>
#include <climits>
#include <cstdio>
#include <deque>
#include <fstream>
#include <iterator>
#include <map>
#include <unordered_set>
using namespace std;

// #include "ast.h"
#include "config_misc.h"
#include "define.h"
#include "mutate.h"
#include "spdlog/spdlog.h"
#include "utils.h"
using namespace polyglot;

#define _NON_REPLACE_

// #define MUTATE_UNKNOWN

#define MUTATE_DBG 0

static inline bool not_unknown(IR *r) { return r->type_ != kUnknown; }

static inline bool is_leaf(IR *r) {
  return r->left_ == NULL && r->right_ == NULL;
}

Mutator::Mutator() {
  srand(time(nullptr));
  float_types_.insert(kFloatLiteral);
  int_types_.insert(kIntLiteral);
  string_types_.insert(kStringLiteral);
  init_convertable_ir_type_map();
}
// Need No fix
IR *Mutator::deep_copy_with_record(const IR *root, const IR *record) {
  IR *left = NULL, *right = NULL, *copy_res;

  if (root->left_)
    left = deep_copy_with_record(
        root->left_, record);  // do you have a second version for deep_copy
                               // that accept only one argument?
  if (root->right_)
    right = deep_copy_with_record(root->right_,
                                  record);  // no I forget to update here

  if (root->op_ != NULL)
    copy_res =
        new IR(root->type_,
               OP3(root->op_->prefix_, root->op_->middle_, root->op_->suffix_),
               left, right, root->float_val_, root->str_val_, root->name_,
               root->mutated_times_, root->scope_, root->data_flag_);
  else
    copy_res = new IR(root->type_, NULL, left, right, root->float_val_,
                      root->str_val_, root->name_, root->mutated_times_,
                      root->scope_, root->data_flag_);

  copy_res->data_type_ = root->data_type_;

  if (root == record && record != NULL) {
    this->record_ = copy_res;
  }

  return copy_res;
}

bool Mutator::should_mutate(IR *cur) {
  if (cur->type_ == kUnknown) return false;
  if (not_mutatable_types_.find(cur->type_) != not_mutatable_types_.end())
    return false;
  if (is_leaf(cur)) return false;
  if (!can_be_mutated(cur)) return false;
  return true;
}

vector<IR *> Mutator::mutate_all(vector<IR *> &irs_to_mutate) {
  vector<IR *> res;
  std::unordered_set<unsigned long> res_hash;
  IR *root = irs_to_mutate[irs_to_mutate.size() - 1];

  auto tmp_str = root->to_string();
  res_hash.insert(hash(tmp_str));
  for (IR *ir : irs_to_mutate) {
    if (ir == root || !should_mutate(ir)) continue;

    spdlog::debug("Mutating type: {}", get_string_by_nodetype(ir->type_));
    vector<IR *> new_variants = mutate(ir);

    for (IR *i : new_variants) {
      IR *new_ir_tree = deep_copy_with_record(root, ir);
      spdlog::debug("NEW type: {}", get_string_by_nodetype(i->type_));

      replace(new_ir_tree, this->record_, i);

      IR *backup = deep_copy(new_ir_tree);
      extract_struct(new_ir_tree);
      string tmp = new_ir_tree->to_string();
      unsigned tmp_hash = hash(tmp);
      if (res_hash.find(tmp_hash) != res_hash.end()) {
        deep_delete(new_ir_tree);
        deep_delete(backup);
        continue;
      }

      res_hash.insert(tmp_hash);
      deep_delete(new_ir_tree);

      res.push_back(backup);
    }
  }

  return res;
}

void Mutator::add_ir_to_library(IR *cur) {
  extract_struct(cur);

  add_ir_to_library_limited(cur);
  return;
}

void Mutator::add_ir_to_library_limited(IR *cur) {
  auto type = cur->type_;
  auto h = hash(cur);

  if (ir_library_hash_[type].find(h) != ir_library_hash_[type].end()) {
    return;
  }

  constexpr unsigned kMaxIRNumForOneType = 0x200;
  if (ir_library_[type].size() >= kMaxIRNumForOneType) {
    auto rand_idx = get_rand_int(ir_library_[type].size());
    auto removed_ir = ir_library_[type][rand_idx];
    ir_library_[type][rand_idx] = ir_library_[type].back();
    ir_library_[type].pop_back();
    auto removed_h = hash(removed_ir);
    deep_delete(removed_ir);
    ir_library_hash_[type].erase(removed_h);
  }

  ir_library_[type].push_back(deep_copy(cur));
  ir_library_hash_[type].insert(h);

  if (cur->left_) add_ir_to_library_limited(cur->left_);
  if (cur->right_) add_ir_to_library_limited(cur->right_);
}

void Mutator::init_convertable_ir_type_map() {
  for (auto &p : gen::GetConvertableTypes()) {
    m_convertable_map_[get_nodetype_by_string(p.first)].insert(
        get_nodetype_by_string(p.second));
  }
}

void Mutator::init_ir_library_from_a_file(string filename) {
  char content[0x4000] = {0};
  auto fd = open(filename.c_str(), 0);

  read(fd, content, 0x3fff);
  close(fd);

  auto p = parser(content);
  if (p == NULL) {
    cout << "init " << filename << " failed" << endl;
    return;
  }
  // cout << filename << endl;
  vector<IR *> v_ir;
  auto res = p->translate(v_ir);
  p->deep_delete();
  p = NULL;

  add_ir_to_library(res);
  deep_delete(res);
  cout << "init " << filename << " success" << endl;
  return;
}

vector<IR *> Mutator::mutate(IR *input) {
  vector<IR *> res;

  if (!lucky_enough_to_be_mutated(input->mutated_times_)) {
    // TODO: Why this is not triggered?
    assert(0);
    return res;  // return a empty set if the IR is not mutated
  }

  constexpr size_t kConstraintReplaceTimes = 0x6;
  for (int i = 0; i < kConstraintReplaceTimes; i++) {
    if (IR *tmp = strategy_replace_with_constraint(input)) {
      res.push_back(tmp);
    }
  }

  // if (IR *tmp = strategy_insert(input)) {
  //   res.push_back(tmp);
  //  }

  if (IR *tmp = strategy_replace(input)) {
    res.push_back(tmp);
  }

  input->mutated_times_ += res.size();
  for (IR *i : res) {
    assert(i != NULL && "should not be null");
    i->mutated_times_ = input->mutated_times_;
  }
  return res;
}

bool Mutator::replace(IR *root, IR *old_ir, IR *new_ir) {
  auto parent_ir = locate_parent(root, old_ir);
  assert(parent_ir);
  /*
  if(parent_ir == NULL){
      return false;
  }
  */
  if (parent_ir->left_ == old_ir) {
    deep_delete(old_ir);
    parent_ir->left_ = new_ir;
    return true;
  } else if (parent_ir->right_ == old_ir) {
    deep_delete(old_ir);
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

IR *Mutator::strategy_replace_with_constraint(IR *cur) {
  assert(cur);
  // if(!can_be_mutated(cur)) return NULL;

  if (cur->op_ == NULL ||
      (cur->op_->prefix_.empty() && cur->op_->middle_.empty() &&
       cur->op_->suffix_.empty())) {
    return NULL;
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
    // deep_delete(res);
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return NULL;
  }

  if (res->left_ &&
      !is_ir_type_connvertable(res->left_->type_, cur->left_->type_)) {
    // deep_delete(res);
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return NULL;
  }

  if (res->right_ &&
      !is_ir_type_connvertable(res->right_->type_, cur->right_->type_)) {
    // deep_delete(res);
    // if(cur->type_ == kIterationStatement) cout << "failed" << endl;
    return NULL;
  }

  auto save_res_left = res->left_;
  auto save_res_right = res->right_;
  auto save_res = res;
  res->left_ = NULL;
  res->right_ = NULL;

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

IR *Mutator::strategy_replace(IR *cur) {
  assert(cur);

  IR *res = NULL;
  auto randint = get_rand_int(3);
  switch (randint) {
    case 0:
      if (cur->left_ != NULL && not_unknown(cur->left_)) {
        res = deep_copy(cur);
        auto new_node = get_ir_from_library(res->left_->type_);
        deep_delete(res->left_);
        res->left_ = deep_copy(new_node);
      }
      break;

    case 1:
      if (cur->right_ != NULL && not_unknown(cur->right_)) {
        res = deep_copy(cur);
        auto new_node = get_ir_from_library(res->right_->type_);
        deep_delete(res->right_);
        res->right_ = deep_copy(new_node);
      }
      break;

    case 2:
      if (cur->left_ != NULL && cur->right_ != NULL &&
          not_unknown(cur->left_) && not_unknown(cur->right_)) {
        res = deep_copy(cur);

        auto new_left = get_ir_from_library(res->left_->type_);
        auto new_right = get_ir_from_library(res->right_->type_);
        deep_delete(res->right_);
        res->right_ = deep_copy(new_right);

        deep_delete(res->left_);
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
IR *Mutator::get_ir_from_library(IRTYPE type) {
  static IR *empty_ir = new IR(kStringLiteral, "");
  if (ir_library_[type].empty()) return empty_ir;
  return vector_rand_ele(ir_library_[type]);
}

unsigned long Mutator::hash(string &sql) {
  return ducking_hash(sql.c_str(), sql.size());
}

unsigned long Mutator::hash(IR *root) {
  auto tmp_str = root->to_string();
  return this->hash(tmp_str);
}

// Need No Fix
void Mutator::debug(IR *root) {
  // cout << get_string_by_type(root->type_) << endl;
  cout << ir_library_.size() << endl;
  for (auto &i : ir_library_) {
    cout << get_string_by_nodetype(i.first) << ": " << i.second.size() << endl;
  }
}

void Mutator::extract_struct(IR *root) {
  static unsigned long iid = 0;
  auto type = root->type_;

#ifndef SYNTAX_ONLY
  if (root->left_) {
    if (root->left_->data_type_ == kDataFixUnit) {
      deep_delete(root->left_);
      root->left_ = new IR(kStringLiteral, "FIXME");
    } else {
      extract_struct(root->left_);
    }
  }
  if (root->right_) {
    if (root->right_->data_type_ == kDataFixUnit) {
      deep_delete(root->right_);
      root->right_ = new IR(kStringLiteral, "FIXME");
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
  if (root->data_type_ != kDataWhatever) {
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

unsigned int calc_node_num(IR *root) {
  unsigned int res = 0;
  if (root->left_) res += calc_node_num(root->left_);
  if (root->right_) res += calc_node_num(root->right_);

  return res + 1;
}

bool Mutator::can_be_mutated(IR *cur) {
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

bool contain_fixme(IR *ir) {
  bool res = false;
  if (ir->left_ || ir->right_) {
    if (ir->left_) {
      res = res || contain_fixme(ir->left_);
    }
    if (ir->right_) {
      res = res || contain_fixme(ir->right_);
    }
    return res;
  }

  if (!ir->str_val_.empty() && ir->str_val_ == "FIXME") {
    return true;
  }

  return false;
}