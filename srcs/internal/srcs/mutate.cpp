// #include <queue>
#include <algorithm>
#include <assert.h>
#include <cfloat>
#include <climits>
#include <cstdio>
#include <deque>
#include <fcntl.h>
#include <fstream>
#include <iterator>
#include <map>
#include <set>
using namespace std;

// #include "ast.h"
#include "config_misc.h"
#include "define.h"
#include "mutate.h"
#include "utils.h"

#define _NON_REPLACE_

// #define MUTATE_UNKNOWN

#define MUTATE_DBG 0

static inline bool not_unknown(IR *r) { return r->type_ != kUnknown; }

static inline bool is_leaf(IR *r) {
  return r->left_ == NULL && r->right_ == NULL;
}

// Need No fix
IR *Mutator::deep_copy_with_record(const IR *root, const IR *record) {
  IR *left = NULL, *right = NULL, *copy_res;

  if (root->left_)
    left = deep_copy_with_record(
        root->left_, record); // do you have a second version for deep_copy that
                              // accept only one argument?
  if (root->right_)
    right = deep_copy_with_record(root->right_,
                                  record); // no I forget to update here

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

// Need No fix
/*
bool Mutator::check_node_num(IR * root, unsigned int limit) const{

    auto v_statements = extract_statement(root);
    bool is_good = true;

    for(auto stmt: v_statements){
        if(calc_node(stmt) > limit){
            is_good = false;
            break;
        }
    }

    return is_good;
}
*/

// Need Minor Fix
vector<IR *> Mutator::mutate_all(vector<IR *> &v_ir_collector) {
  vector<IR *> res;
  set<unsigned long> res_hash;
  IR *root = v_ir_collector[v_ir_collector.size() - 1];

  mutated_root_ = root;
  auto tmp_str = root->to_string();
  res_hash.insert(hash(tmp_str));
  for (auto ir : v_ir_collector) {
    if (ir == root)
      continue;
// cout << "Checking: " << ir->to_string() << endl;
#ifdef MUTATE_UNKNOWN
    if (not_mutatable_types_.find(ir->type_) != not_mutatable_types_.end() ||
        !can_be_mutated(ir))
      continue;
#else
    if (ir->type_ == kUnknown ||
        not_mutatable_types_.find(ir->type_) != not_mutatable_types_.end() ||
        is_leaf(ir) || !can_be_mutated(ir))
      continue;
#endif

    // cout << "Yes" << endl;
    if (MUTATE_DBG)
      cout << "Mutating type: " << get_string_by_nodetype(ir->type_) << endl;
    vector<IR *> v_mutated_ir = mutate(ir);
    // cout << "this size: " << v_mutated_ir.size() << endl;

    for (auto i : v_mutated_ir) {
      IR *new_ir_tree = deep_copy_with_record(root, ir);
      if (MUTATE_DBG)
        cout << "NEW type: " << get_string_by_nodetype(i->type_) << endl;

#ifndef SYNTAX_ONLY
// remove_definition(i);
#endif

      replace(new_ir_tree, this->record_, i);

      // extract_struct_after_mutation(new_ir_tree);
      IR *backup = deep_copy(new_ir_tree);
      extract_struct(new_ir_tree);
      string tmp = new_ir_tree->to_string();
      // cout << "Mutated: " << backup->to_string();
      // cout << "Strip:" << tmp << endl;
      unsigned tmp_hash = hash(tmp);
      if (res_hash.find(tmp_hash) != res_hash.end()) {
        deep_delete(new_ir_tree);
        deep_delete(backup);
        continue;
      }

      res_hash.insert(tmp_hash);
      deep_delete(new_ir_tree);

      // extract_struct_after_mutation(backup);
      res.push_back(backup);
    }
  }

  return res;
}

void Mutator::add_ir_to_library(IR *cur) {
  extract_struct(cur);

  // #ifdef SYNTAX_ONLY
  add_ir_to_library_limited(cur);
  // #else
  // cur = deep_copy(cur);
  // add_ir_to_library_no_deepcopy(cur);
  // #endif
  return;
}

void Mutator::add_ir_to_library_limited(IR *cur) {
  auto type = cur->type_;
  auto h = hash(cur);

  if (ir_library_hash_[type].find(h) != ir_library_hash_[type].end()) {
    return;
  }

  if (ir_library_[type].size() >= max_ir_library_size_) {
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

  if (cur->left_)
    add_ir_to_library_limited(cur->left_);
  if (cur->right_)
    add_ir_to_library_limited(cur->right_);
}

void Mutator::init_convertable_ir_type_map() {
  for (auto &p : GetConvertableTypes()) {
    m_convertable_map_[get_nodetype_by_string(p.first)].insert(
        get_nodetype_by_string(p.second));
  }
}

void Mutator::init_common_string(string filename) {
  common_string_library_.push_back("DO_NOT_BE_EMPTY");
  if (filename != "") {
    ifstream input_string(filename);
    string s;

    while (getline(input_string, s)) {
      common_string_library_.push_back(s);
    }
  }
}

void Mutator::init_data_library_2d(string filename) {
  ifstream input_file(filename);
  string s;

  cout << "[*] init data_library_2d: " << filename << endl;
  while (getline(input_file, s)) {
    vector<string> v_strbuf;
    auto prev_pos = -1;
    for (int i = 0; i < 3; i++) {
      auto pos = s.find(" ", prev_pos + 1);
      v_strbuf.push_back(s.substr(prev_pos + 1, pos - prev_pos - 1));
      prev_pos = pos;
    }
    v_strbuf.push_back(s.substr(prev_pos + 1, s.size() - prev_pos - 1));

    auto data_type1 = get_datatype_by_string(v_strbuf[0]);
    auto data_type2 = get_datatype_by_string(v_strbuf[2]);
    // cout << "g_data_library_2d_[" << data_type1 << "][" << v_strbuf[1] <<
    // "][" << data_type2 <<"].push_back(" << v_strbuf[3] <<")" << endl;
    g_data_library_2d_[data_type1][v_strbuf[1]][data_type2].push_back(
        v_strbuf[3]);
  }

  return;
}

void Mutator::init_data_library(string filename) {
  ifstream input_file(filename);
  string s;

  cout << "[*] init data_library: " << filename << endl;
  while (getline(input_file, s)) {
    auto pos = s.find(" ");
    if (pos == string::npos)
      continue;
    auto data_type = get_datatype_by_string(s.substr(0, pos));
    auto v = s.substr(pos + 1, s.size() - pos - 1);
    g_data_library_[data_type].push_back(v);
  }

  return;
}

void Mutator::init_value_library() {
  vector<unsigned long> value_lib_init = {0,
                                          (unsigned long)LONG_MAX,
                                          (unsigned long)ULONG_MAX,
                                          (unsigned long)CHAR_BIT,
                                          (unsigned long)SCHAR_MIN,
                                          (unsigned long)SCHAR_MAX,
                                          (unsigned long)UCHAR_MAX,
                                          (unsigned long)CHAR_MIN,
                                          (unsigned long)CHAR_MAX,
                                          (unsigned long)MB_LEN_MAX,
                                          (unsigned long)SHRT_MIN,
                                          (unsigned long)INT_MIN,
                                          (unsigned long)INT_MAX,
                                          (unsigned long)SCHAR_MIN,
                                          (unsigned long)SCHAR_MIN,
                                          (unsigned long)UINT_MAX,
                                          (unsigned long)FLT_MAX,
                                          (unsigned long)DBL_MAX,
                                          (unsigned long)LDBL_MAX,
                                          (unsigned long)FLT_MIN,
                                          (unsigned long)DBL_MIN,
                                          (unsigned long)LDBL_MIN};

  value_library_.insert(value_library_.begin(), value_lib_init.begin(),
                        value_lib_init.end());

  return;
}

void Mutator::init_ir_library(string filename) {
  ifstream input_file(filename);
  string line;

  cout << "[*] init ir_library: " << filename << endl;
  while (getline(input_file, line)) {
    if (line.empty())
      continue;
    // cout << "parsing " << line << endl;
    auto p = parser(line);
    if (p == NULL)
      continue;

    vector<IR *> v_ir;
    auto res = p->translate(v_ir);
    p->deep_delete();
    p = NULL;

    // string strip_sql = extract_struct(res);
    // extract_struct(res);

    add_ir_to_library(res);
    deep_delete(res);
  }
  return;
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

void Mutator::init_safe_generate_type(string filename) {
  ifstream input_file(filename);
  string line;

  cout << "[*] init safe generate type: " << filename << endl;
  while (getline(input_file, line)) {
    if (line.empty())
      continue;
    auto node_type = get_nodetype_by_string("k" + line);
    safe_generate_type_.insert(node_type);
  }
}

// Need Minor fix
void Mutator::init(string f_testcase, string f_common_string, string file2d,
                   string file1d, string f_gen_type) {

  // init lib from multiple sql
  if (!f_testcase.empty())
    init_ir_library(f_testcase);

  // Keep
  // init value_library_
  init_value_library();

  // init common_string_library
  if (!f_common_string.empty())
    init_common_string(f_common_string);

  // Fix Here
  // init data_library_2d
  if (!file2d.empty())
    init_data_library_2d(file2d); // NEEDFIX

  if (!file1d.empty())
    init_data_library(file1d);
  if (!f_gen_type.empty())
    init_safe_generate_type(f_gen_type);
  // Fix here
  /*
  relationmap[id_column_name] = id_top_table_name;
  relationmap[id_table_name] = id_top_table_name;
  relationmap[id_create_column_name] = id_create_table_name;
  relationmap[id_pragma_value] = id_pragma_name;
  cross_map[id_top_table_name] = id_create_table_name;
  */
  float_types_.insert({kFloatLiteral});
  int_types_.insert(kIntLiteral);
  string_types_.insert(kStringLiteral);

  /*
  relationmap_[kDataColumnName][kDataTableName] = kRelationSubtype;
  relationmap_[kDataPragmaValue][kDataPragmaKey] = kRelationSubtype;
  relationmap_[kDataTableName][kDataTableName] = kRelationElement;
  relationmap_[kDataColumnName][kDataColumnName] = kRelationElement;
  */

  // split_stmt_types_.insert(kStmt);
  // split_substmt_types_.insert({kStmt, kSelectClause, kSelectStmt});

  // not_mutatable_types_.insert({kProgram, kStmtlist, kStmt, kCreateStmt,
  // kDropStmt, kCreateTableStmt, kCreateIndexStmt, kCreateTriggerStmt,
  // kCreateViewStmt, kCreateFunctionStmt, kDropIndexStmt, kDropTableStmt,
  // kDropTriggerStmt, kDropViewStmt, kSelectStmt, kUpdateStmt, kInsertStmt,
  // kAlterStmt, kReindexStmt}); not_mutatable_types_.insert({kProgram});

  init_convertable_ir_type_map();

  return;
}

// Need No Fix
vector<IR *> Mutator::mutate(IR *input) {
  vector<IR *> res;

  if (!lucky_enough_to_be_mutated(input->mutated_times_)) {
    assert(0);
    return res; // return a empty set if the IR is not mutated
  }

  for (int i = 0; i < 0x6; i++) {
    auto tmp = strategy_replace_with_constraint(input);
    if (tmp != NULL) {
      res.push_back(tmp);
    }
  }

  IR *tmp = NULL;
  /*
  tmp = strategy_delete(input);
  if(tmp != NULL){
      res.push_back(tmp);
  }
  */

  tmp = strategy_insert(input);
  if (tmp != NULL) {
    res.push_back(tmp);
  }

  tmp = strategy_replace(input);
  if (tmp != NULL) {
    res.push_back(tmp);
    if (MUTATE_DBG) {
      cout << "Replacing " << input->to_string() << endl;
      cout << "With " << tmp->to_string() << endl;
      getchar();
    }
  }

  input->mutated_times_ += res.size();
  for (auto i : res) {
    if (i == NULL)
      continue;
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
  assert(0);
  return false;
}

// Need No Fix
IR *Mutator::strategy_delete(IR *cur) {
  assert(cur);
  // if(!can_be_mutated(cur)) return NULL;
  // cout << "enter strategy_delete" << endl;
  MUTATESTART

  DOLEFT
  res = deep_copy(cur);
#ifdef MUTATE_UNKNOWN
  if (res->left_ != NULL)
#else
  if (res->left_ != NULL && res->left_->type_ != kUnknown)
#endif
    deep_delete(res->left_);
  res->left_ = NULL; // memory leak

  DORIGHT
  res = deep_copy(cur);
#ifdef MUTATE_UNKNOWN
  if (res->right_ != NULL)
#else
  if (res->right_ != NULL && res->right_->type_ != kUnknown)
#endif
    deep_delete(res->right_);
  res->right_ = NULL;

  DOBOTH
  res = deep_copy(cur);
#ifdef MUTATE_UNKNOWN
  if (res->left_ != NULL)
#else
  if (res->left_ != NULL && res->left_->type_ != kUnknown)
#endif
    deep_delete(res->left_);

#ifdef MUTATE_UNKNOWN
  if (res->right_ != NULL)
#else
  if (res->right_ != NULL && res->right_->type_ != kUnknown)
#endif
    deep_delete(res->right_);
  res->left_ = res->right_ = NULL;

  MUTATEEND
}

IR *Mutator::strategy_insert(IR *cur) {
  // cout << "enter strategy_insert" << endl;
  assert(cur);
  // if(!can_be_mutated(cur)) return NULL;

  IR *res = NULL;
  // auto res = deep_copy(cur);
  auto parent_type = cur->type_;

#ifdef MUTATE_UNKNOWN
  if (cur->right_ == NULL && cur->left_ != NULL) {
#else
  if (cur->right_ == NULL && cur->left_ != NULL && not_unknown(cur->left_)) {
#endif
    auto left_type = cur->left_->type_;
    for (int k = 0; k < 4; k++) {
      auto fetch_ir = get_ir_from_library(parent_type);
      if (fetch_ir->left_ != NULL && fetch_ir->left_->type_ == left_type &&
          fetch_ir->right_ != NULL) {
        res = deep_copy(cur);
        res->right_ = deep_copy(fetch_ir->right_);
        return res;
      }
    }
  }
#ifdef MUTATE_UNKNOWN
  else if (cur->right_ != NULL && cur->left_ == NULL) {
#else
  else if (cur->right_ != NULL && cur->left_ == NULL &&
           not_unknown(cur->right_)) {
#endif
    auto right_type = cur->left_->type_;
    for (int k = 0; k < 4; k++) {
      auto fetch_ir = get_ir_from_library(parent_type);
      if (fetch_ir->right_ != NULL && fetch_ir->right_->type_ == right_type &&
          fetch_ir->left_ != NULL) {
        res = deep_copy(cur);
        res->left_ = deep_copy(fetch_ir->left_);
        return res;
      }
    }
  } else if (cur->left_ == NULL && cur->right_ == NULL) {
    for (int k = 0; k < 4; k++) {
      auto fetch_ir = get_ir_from_library(parent_type);
      if (fetch_ir->right_ != NULL && fetch_ir->left_ != NULL) {
        res = deep_copy(cur);
        res->left_ = deep_copy(fetch_ir->left_);
        res->right_ = deep_copy(fetch_ir->right_);
        return res;
      }
    }
  }

  return res;
}

bool Mutator::is_ir_type_connvertable(IRTYPE a, IRTYPE b) {
  if (a == b)
    return true;
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
  // if(res->left_) deep_delete(res->left_);
  // if(res->right_) deep_delete(res->right_);

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

  MUTATESTART

  DOLEFT
#ifdef MUTATE_UNKOWN
  if (cur->left_ != NULL) {
#else
  if (cur->left_ != NULL && not_unknown(cur->left_)) {
#endif
    res = deep_copy(cur);

    auto new_node = get_ir_from_library(res->left_->type_);
    // new_node->data_type_ = res->left_->data_type_;
    deep_delete(res->left_);
    if (MUTATE_DBG) {
      cout << "Replacing left: " << cur->left_->to_string() << endl;
      cout << "With: " << new_node->to_string() << endl;
      cout << "Type: " << get_string_by_nodetype(new_node->type_) << endl;
    }
    res->left_ = deep_copy(new_node);
  }

  DORIGHT
#ifdef MUTATE_UNKNOWN
  if (cur->right_ != NULL) {
#else
  if (cur->right_ != NULL && not_unknown(cur->right_)) {
#endif
    res = deep_copy(cur);

    auto new_node = get_ir_from_library(res->right_->type_);
    // new_node->data_type_ = res->right_->data_type_;
    if (MUTATE_DBG) {
      cout << "Replacing right: " << cur->right_->to_string() << endl;
      cout << "With: " << new_node->to_string() << endl;
      cout << "Type: " << get_string_by_nodetype(new_node->type_) << endl;
    }
    deep_delete(res->right_);
    res->right_ = deep_copy(new_node);
  }

  DOBOTH
#ifdef MUTATE_UNKNOWN
  if (cur->left_ != NULL && cur->right_ != NULL) {
#else
  if (cur->left_ != NULL && cur->right_ != NULL && not_unknown(cur->left_) &&
      not_unknown(cur->right_)) {
#endif
    res = deep_copy(cur);

    auto new_left = get_ir_from_library(res->left_->type_);
    auto new_right = get_ir_from_library(res->right_->type_);
    // new_left->data_type_ = res->left_->data_type_;
    // new_right->data_type_ = res->right_->data_type_;
    deep_delete(res->right_);
    res->right_ = deep_copy(new_right);

    deep_delete(res->left_);
    res->left_ = deep_copy(new_left);
    if (MUTATE_DBG) {
      cout << "Replacing both: " << cur->to_string() << endl;
      cout << "Left: " << (new_left->to_string()) << endl;
      cout << "Right: " << (new_right->to_string()) << endl;
      cout << "ORiLeft type: " << get_string_by_nodetype(cur->left_->type_)
           << endl;
      cout << "ORIRight type: " << get_string_by_nodetype(cur->right_->type_)
           << endl;
      cout << "Left type: " << get_string_by_nodetype(new_left->type_) << endl;
      cout << "Right type: " << get_string_by_nodetype(new_right->type_)
           << endl;
    }
  }

  MUTATEEND

  return res;
}

// Need No Fix
bool Mutator::lucky_enough_to_be_mutated(unsigned int mutated_times) {
  if (get_rand_int(mutated_times + 1) < LUCKY_NUMBER) {
    return true;
  }
  return false;
}

IR *Mutator::generate_ir_by_type(IRTYPE type) {
  auto ast_node = generate_ast_node_by_type(type);
  ast_node->generate();
  vector<IR *> tmp_vector;
  ast_node->translate(tmp_vector);
  // ast_node->deep_delete();
  assert(tmp_vector.size());
  return tmp_vector[tmp_vector.size() - 1];
}

// Fix, if no item, generate from scratch
IR *Mutator::get_ir_from_library(IRTYPE type) {

  const int generate_prop = 1;
  const int threshold = 0;
  static IR *empty_ir = new IR(kStringLiteral, "");
  // static IR* empty_ir = NULL;//new IR(kStringLiteral, "");
#ifdef USEGENERATE
  if (ir_library_[type].empty() == true ||
      (get_rand_int(400) == 0 && type != kUnknown)) {
    auto ir = generate_ir_by_type(type);
    add_ir_to_library_no_deepcopy(ir);
    return ir;
  }
#endif
  /*
  if(type != kUnknown && (get_rand_int(10) == 0) &&
  safe_generate_type_.find(type) != safe_generate_type_.end()){ auto ir =
  generate_ir_by_type(type); add_ir_to_library_no_deepcopy(ir); return ir;
  }
  */
  // cout << "TRIGGER generate" << endl;
  if (ir_library_[type].empty())
    return empty_ir;
  return vector_rand_ele(ir_library_[type]);
}

// Need No Fix
unsigned long Mutator::hash(string &sql) {
  return fucking_hash(sql.c_str(), sql.size());
}

// Need No Fix
unsigned long Mutator::hash(IR *root) {
  auto tmp_str = std::move(root->to_string());
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

void extract_struct_after_mutation(IR *root) {

  if (root->left_) {
    if (root->left_->data_type_ == kDataFixUnit) {
      if (contain_fixme(root->left_)) {
        // auto save_ir_type = root->left_->type_;
        auto save_ir_id = root->left_->id_;
        auto save_scope = root->left_->scope_id_;
        deep_delete(root->left_);
        root->left_ = new IR(kStringLiteral, "FIXME");
        // root->left_->type_ = save_ir_type;
        root->left_->scope_id_ = save_scope;
        root->left_->id_ = save_ir_id;
      }
    } else {
      extract_struct_after_mutation(root->left_);
    }
  }
  if (root->right_) {
    if (root->right_->data_type_ == kDataFixUnit) {
      if (contain_fixme(root->right_)) {
        auto save_ir_id = root->right_->id_;
        // auto save_ir_type = root->right_->type_;
        auto save_scope = root->right_->scope_id_;
        deep_delete(root->right_);
        root->right_ = new IR(kStringLiteral, "FIXME");
        // root->right_->type_ = save_ir_type;
        root->right_->scope_id_ = save_scope;
        root->right_->id_ = save_ir_id;
      }
    } else {
      extract_struct_after_mutation(root->right_);
    }
  }
  return;
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

  if (root->left_ || root->right_)
    return;

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

/*
void Mutator::reset_data_library() {
  data_library_.clear();
  data_library_2d_.clear();
}
*/

unsigned int calc_node(IR *root) {
  unsigned int res = 0;
  if (root->left_)
    res += calc_node(root->left_);
  if (root->right_)
    res += calc_node(root->right_);

  return res + 1;
}

/*
vector<IR *> Mutator::split_to_stmt(IR *root, map<IR **, IR *> &m_save,
                                    set<IRTYPE> &split_set) {
  vector<IR *> res;
  deque<IR *> bfs = {root};

  while (!bfs.empty()) {
    auto node = bfs.front();
    bfs.pop_front();

    if (node && node->left_)
      bfs.push_back(node->left_);
    if (node && node->right_)
      bfs.push_back(node->right_);

    if (node->left_ && find(split_set.begin(), split_set.end(),
                            node->left_->type_) != split_set.end()) {
      res.push_back(node->left_);
      m_save[&node->left_] = node->left_;
      node->left_ = NULL;
    }
    if (node->right_ && find(split_set.begin(), split_set.end(),
                             node->right_->type_) != split_set.end()) {
      res.push_back(node->right_);
      m_save[&node->right_] = node->right_;
      node->right_ = NULL;
    }
  }

  if (find(split_set.begin(), split_set.end(), root->type_) != split_set.end())
    res.push_back(root);

  // reverse(res.begin(), res.end());
  return res;
}

bool Mutator::connect_back(map<IR **, IR *> &m_save) {
  for (auto &iter : m_save) {
    *(iter.first) = iter.second;
  }
  return true;
}
*/

/*
static set<IR *> visited;

bool Mutator::fix_one(IR *stmt_root,
                      map<int, map<DATATYPE, vector<IR *>>> &scope_library) {
  visited.clear();
  analyze_scope(stmt_root);
  auto graph = build_graph(stmt_root, scope_library);

#ifdef GRAPHLOG
  for (auto &iter : graph) {
    cout << "Node: " << iter.first->to_string() << " connected with:" << endl;
    for (auto &k : iter.second) {
      cout << k->to_string() << endl;
    }
    cout << "--------" << endl;
  }
  cout << "OUTPUT END" << endl;
#endif
  // exit(0);
  return fill_stmt_graph(graph);
}
*/

#define has_element(a, b) (find(a.begin(), a.end(), b) != (a).end())
#define has_key(a, b) ((a).find(b) != (a).end())

static IR *search_mapped_ir(IR *ir, DATATYPE type) {
  vector<IR *> to_search;
  vector<IR *> backup;
  to_search.push_back(ir);
  while (!to_search.empty()) {
    for (auto i : to_search) {
      if (i->data_type_ == type) {
        return i;
      }
      if (i->left_) {
        backup.push_back(i->left_);
      }
      if (i->right_) {
        backup.push_back(i->right_);
      }
    }
    to_search = move(backup);
    backup.clear();
  }
  return NULL;
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
  if (cur->left_)
    res = res && can_be_mutated(cur->left_);
  if (cur->right_)
    res = res && can_be_mutated(cur->right_);
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

void remove_definition(IR *&ir) {

  if (ir->data_type_ == kDataVarDefine) {
    deep_delete(ir);
    ir = NULL;
    return;
  }

  if (ir->left_) {
    if (ir->left_->data_type_ == kDataVarDefine) {
      deep_delete(ir->left_);
      ir->left_ = NULL;
    } else {
      remove_definition(ir->left_);
    }
  }
  if (ir->right_) {
    if (ir->right_->data_type_ == kDataVarDefine) {
      deep_delete(ir->right_);
      ir->right_ = NULL;
    } else {
      remove_definition(ir->right_);
    }
  }
}
