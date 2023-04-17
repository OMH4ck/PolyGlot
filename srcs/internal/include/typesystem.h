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

#ifndef __TYPESYSTEM_H__
#define __TYPESYSTEM_H__

#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <iterator>
#include <map>
#include <memory>
#include <optional>
#include <queue>
#include <set>
#include <span>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

#include "frontend.h"
#include "ir.h"
#include "var_definition.h"

namespace polyglot {
typedef int OPTYPE;

namespace validation {
// Generate expression based on the type and scope
// to replace the "FIXME".
class ExpressionGenerator {
 public:
  ExpressionGenerator(std::shared_ptr<ScopeTree> scope_tree)
      : scope_tree_(scope_tree),
        real_type_system_(scope_tree->GetRealTypeSystem()) {
    assert(real_type_system_ != nullptr);
  }
  std::string GenerateExpression(TypeID type, IRPtr &ir);

 private:
  std::shared_ptr<RealTypeSystem> real_type_system_;
  std::shared_ptr<ScopeTree> scope_tree_;
  int gen_counter_ = 0;
  int function_gen_counter_ = 0;
  int current_fix_scope_ = -1;
  // Moved from the old type system
  string generate_expression_by_type(int type, IRPtr &ir);
  string generate_expression_by_type_core(int type, IRPtr &ir);
  string expression_gen_handler(
      int type, map<int, vector<set<int>>> &all_satisfiable_types,
      map<int, vector<string>> &function_map,
      map<int, vector<string>> &compound_var_map, IRPtr ir);
  string function_call_gen_handler(map<int, vector<string>> &function_map,
                                   IRPtr ir);
  string structure_member_gen_handler(
      map<int, vector<string>> &compound_var_map, int member_type);
  void update_pointer_var(map<int, vector<string>> &pointer_var_map,
                          map<int, vector<string>> &simple_var_map,
                          map<int, vector<string>> &compound_var_map);
  string get_class_member_by_type_no_duplicate(int type, int target_type,
                                               set<int> &visit);
  string get_class_member_by_type(int type, int target_type);
  vector<map<int, vector<string>>> collect_all_var_definition_by_type(
      IRPtr cur);
  map<int, vector<set<int>>> collect_satisfiable_types(
      IRPtr ir, map<int, vector<string>> &simple_var_map,
      map<int, vector<string>> &compound_var_map,
      map<int, vector<string>> &function_map);
  set<int> calc_satisfiable_functions(const set<int> &function_type_set,
                                      const set<int> &available_types);
  set<int> calc_possible_types_from_structure(int structure_type);
};
}  // namespace validation

namespace validation {

using std::map;
using std::set;
using std::shared_ptr;
using std::string;
using std::vector;
class Scope;

enum FIXORDER {
  LEFT_TO_RIGHT = 0,
  RIGHT_TO_LEFT,
  DEFAULT,
};

enum OPRuleProperty {
  OP_PROP_Default,
  OP_PROP_FunctionCall,
  OP_PROP_Dereference,
  OP_PROP_Reference
};

class OPRule {
 public:
  OPRule(int op_id, int result, int left)
      : op_id_(op_id),
        result_(result),
        left_(left),
        right_(0),
        operand_num_(1) {}
  OPRule(int op_id, int result, int left, int right)
      : op_id_(op_id),
        result_(result),
        left_(left),
        right_(right),
        operand_num_(2) {}
  int left_, right_, result_;
  int op_id_;
  int operand_num_;
  FIXORDER fix_order_;
  bool is_op1();
  bool is_op2();
  int apply(int, int = 0);
  void add_property(const string &s);
  // more properties to add;

  OPRuleProperty property_ = OP_PROP_Default;
  static void SetRealTypeSystem(
      std::shared_ptr<RealTypeSystem> real_type_system) {
    real_type_system_ = real_type_system;
  }
  static std::shared_ptr<RealTypeSystem> real_type_system_;
};

struct InferenceRule {
  TypeID result;
  TypeID left;
  TypeID right;
};

class CandidateTypes {
 public:
  std::unordered_map<TypeID, std::vector<InferenceRule>> &GetCandidates() {
    return candidates_;
  }

  void AddCandidate(TypeID result, TypeID left, TypeID right) {
    candidates_[result].push_back({result, left, right});
  }

  void AddCandidate(InferenceRule inference_type) {
    candidates_[inference_type.result].push_back(inference_type);
  }

  bool HasCandidate() {
    for (auto &c : candidates_) {
      if (c.second.size() > 0) {
        return true;
      }
    }
    return false;
  }

  bool HasCandidate(TypeID result) {
    return candidates_.find(result) != candidates_.end();
  }

  std::vector<InferenceRule> &GetCandidates(TypeID result) {
    return candidates_[result];
  }

  TypeID GetARandomCandidateType() {
    for (auto &c : candidates_) {
      if (c.second.size() > 0) {
        return c.first;
      }
    }
    return SpecialType::kNotExist;
  }

 private:
  std::unordered_map<TypeID /* result type*/, std::vector<InferenceRule>>
      candidates_;
};

class InferenceResult {
 public:
  std::shared_ptr<const validation::CandidateTypes> GetCandidateTypes(
      const IRPtr &root) const {
    auto it = cache_inference_map_.find(root);
    return (it == cache_inference_map_.end()) ? nullptr : it->second;
  }

  std::shared_ptr<validation::CandidateTypes> GetCandidateTypes(
      const IRPtr &root) {
    auto it = cache_inference_map_.find(root);
    return (it == cache_inference_map_.end()) ? nullptr : it->second;
  }

  std::unordered_map<TypeID, std::vector<InferenceRule>> &GetCandidates(
      const IRPtr &root) {
    assert(cache_inference_map_.find(root) != cache_inference_map_.end());
    return cache_inference_map_[root]->GetCandidates();
  }

  std::vector<InferenceRule> &GetCandidatesAtType(const IRPtr &root,
                                                  TypeID result) {
    assert(cache_inference_map_.find(root) != cache_inference_map_.end());
    return cache_inference_map_[root]->GetCandidates(result);
  }

  bool HasCandidateAtType(const IRPtr &root, TypeID result) {
    return cache_inference_map_.find(root) != cache_inference_map_.end() &&
           cache_inference_map_[root]->HasCandidate(result);
  }

  void AddCandidateTypes(const IRPtr &root,
                         std::shared_ptr<validation::CandidateTypes> types) {
    cache_inference_map_[root] = types;
  }

 private:
  std::unordered_map<IRPtr, std::shared_ptr<validation::CandidateTypes>>
      cache_inference_map_;
};

class TypeInferer {
 public:
  TypeInferer(std::shared_ptr<Frontend> frontend = nullptr,
              std::shared_ptr<ScopeTree> scope_tree = nullptr)
      : frontend_(frontend),
        scope_tree_(scope_tree),
        real_type_system_(scope_tree_->GetRealTypeSystem()) {}
  std::shared_ptr<InferenceResult> Infer(
      IRPtr &root, int scope_type = SpecialType::kNotExist);

  std::shared_ptr<InferenceResult> GetResult() {
    return std::make_shared<InferenceResult>(inference_result_);
  }
  void AddCandidateType(IRPtr &root, TypeID result, TypeID left, TypeID right) {
    inference_result_.GetCandidates(root)[result].push_back(
        {result, left, right});
  }
  std::shared_ptr<CandidateTypes> GetCandidateTypes(IRPtr &root) {
    return inference_result_.GetCandidateTypes(root);
  }

  // Operator related functions, since they are configuration so they are
  // static.
  // TODO: Mark them as const if possible
  static OPRule parse_op_rule(string s);
  static bool is_op1(int);
  static bool is_op2(int);
  int query_result_type(int op, int, int = 0);
  static int get_op_property(int op_id);
  static void init_type_dict();
  static FIXORDER get_fix_order(int type);  // need to finish
  static int get_op_value(std::shared_ptr<IROperator> op);
  static bool is_op_null(std::shared_ptr<IROperator> op);
  static vector<string> get_op_by_optype(OPTYPE op_type);
  static pair<OPTYPE, vector<int>> collect_sat_op_by_result_type(
      int type, map<int, vector<set<int>>> &a,
      map<int, vector<string>> &function_map,
      map<int, vector<string>> &compound_var_map,
      std::shared_ptr<RealTypeSystem> &real_type_system);

 private:
  std::shared_ptr<Frontend> frontend_;
  std::shared_ptr<ScopeTree> scope_tree_;
  static map<string, map<string, map<string, int>>> op_id_map_;
  static map<int, vector<OPRule>> op_rules_;
  bool type_inference_new(IRPtr cur, int scope_type = SpecialType::kNotExist);
  int locate_defined_variable_by_name(const string &var_name, int scope_id);
  set<int> collect_usable_type(IRPtr cur);
  InferenceResult inference_result_;
  std::shared_ptr<RealTypeSystem> real_type_system_;
};

class TypeSystem {
 private:
  std::shared_ptr<Frontend> frontend_;
  // map<string, int> basic_types_;
  int current_scope_id_;
  shared_ptr<Scope> current_scope_ptr_;
  bool contain_used_;
  set<IRTYPE> s_basic_unit_;

  // TODO: Remove this by separating the fixme expression generation.
  std::shared_ptr<ScopeTree> scope_tree_;

 public:
  TypeSystem(std::shared_ptr<Frontend> frontend = nullptr);
  // TODO: Return ValidationError instead of bool
  // The validation consists of three steps:
  // 1. It builds the sysmbol table in each scope.
  // 2. It infers the types of the IRs that need fixing.
  // 3. Fix the IRs based on their inferred types and symbol tables.
  /*
  [[deprecated("Replaced by Validator::Validate()")]] bool validate(
      IRPtr &root);
  */
  void MarkFixMe(IRPtr);
  bool Fix(IRPtr root);

  // TODO: This is a hacky helper for now.
  void SetScopeTree(std::shared_ptr<ScopeTree> scope_tree) {
    scope_tree_ = scope_tree;
  }

  void SetRealTypeSystem(std::shared_ptr<RealTypeSystem> real_type_system) {
    real_type_system_ = real_type_system;
  }

 private:
  std::shared_ptr<RealTypeSystem> real_type_system_;
  [[deprecated("Should be removed")]] void split_to_basic_unit(
      IRPtr root, std::queue<IRPtr> &q, map<IRPtr *, IRPtr> &m_save,
      set<IRTYPE> &s_basic_unit_ptr);
  [[deprecated("Should be removed")]] void split_to_basic_unit(
      IRPtr root, std::queue<IRPtr> &q, map<IRPtr *, IRPtr> &m_save);

  [[deprecated("Should be removed")]] void connect_back(
      map<IRPtr *, IRPtr> &m_save);

  bool simple_fix(IRPtr ir, int type, InferenceResult &inferer);
  bool validate_syntax_only(IRPtr root);
  IRPtr locate_mutated_ir(IRPtr root);

  [[deprecated]] string generate_definition(string &var_name, int type);
  [[deprecated]] string generate_definition(vector<string> &var_name, int type);

  // set up internal object
  void init_internal_obj(string dir_name);
  void init_one_internal_obj(string filename);
  void debug();
  void init();
};

}  // namespace validation

namespace validation {

enum class ValidationError {
  kSuccess,
  kUnparseable,
  kNoSymbolToUse,
  // And others.
};

class TypeSystemRefactor {
 public:
  TypePtr GetTypeById(TypeID id);
  TypePtr CreateVarType(std::string name, ScopePtr scope);
  TypePtr CreateFunctionType(std::string name, std::span<TypePtr> args,
                             TypePtr ret, ScopePtr scope);
  // TODO: The signature of this function is not finalized.
  TypePtr CreateCompoundType(std::string name, std::span<TypePtr> args,
                             ScopePtr scope);
};

// Refactored interfaces
class Validator {
 public:
  // Validate the IR. Return true if the IR is valid.
  virtual ValidationError Validate(IRPtr &root) = 0;
  virtual ~Validator() = default;
};

class SemanticValidator : public Validator {
 public:
  SemanticValidator(std::shared_ptr<Frontend> frontend)
      : frontend_(frontend), old_type_system_(frontend) {}
  ValidationError Validate(IRPtr &root) override;

  struct FixDecision {
    IRPtr ir;
    IRTYPE type;
  };

  // This validation consists of three steps:
  // 1. It builds the sysmbol table in each scope, which are stored in a
  // `ScopeTree`.
  // 2. It infers the types of the IRs that need fixing, which needs the help of
  // the symbol table.
  // 3. Select a fix strategy for each IR based on its inferred type and symbol.
  // Assign a usable type to each IR.
  // 4. Fix the IRs.
  std::shared_ptr<ScopeTree> BuildScopeTreeWithSymbolTable(IRPtr &root);
  std::shared_ptr<InferenceResult> InferType(
      IRPtr &root, std::shared_ptr<ScopeTree> scope_tree);
  std::vector<FixDecision> SelectFixStrategy(
      IRPtr &root, std::shared_ptr<InferenceResult> inference_result,
      std::shared_ptr<ScopeTree> scope_tree);
  bool Fix(IRPtr &root, std::vector<FixDecision> &fix_decisions,
           std::shared_ptr<ScopeTree> scope_tree);

 private:
  std::shared_ptr<Frontend> frontend_;
  TypeSystem old_type_system_;
};
}  // namespace validation
}  // namespace polyglot

#endif
