#ifndef __MUTATOR_H__
#define __MUTATOR_H__

// #include <queue>
#include <map>
#include <set>

#include "ir.h"

namespace polyglot {

namespace mutation {

using std::map;
using std::set;

class Mutator {
 public:
  Mutator();
  ~Mutator() {
    for (auto &k : ir_library_) {
      for (auto ir : k.second) {
        deep_delete(ir);
      }
    }
  }

  vector<IR *> mutate_all(vector<IR *> &v_ir_collector);
  vector<IR *> mutate(IR *input);
  void add_ir_to_library(IR *);
  bool init_ir_library_from_a_file(string filename);
  void extract_struct(IR *);  // Done

 private:
  bool should_mutate(IR *cur);
  void init_convertable_ir_type_map();
  IR *deep_copy_with_record(const IR *root, const IR *record);
  unsigned long hash(IR *);
  unsigned long hash(string &);

  // Delete and insert seems useless.
  // IR *strategy_delete(IR *cur);   // Done
  // IR *strategy_insert(IR *cur);   // Done
  IR *strategy_replace(IR *cur);  // done
  IR *strategy_replace_with_constraint(IR *cur);
  bool lucky_enough_to_be_mutated(unsigned int mutated_times);  // done

  bool replace(IR *root, IR *old_ir, IR *new_ir);  // done

  void add_ir_to_library_limited(IR *);  // DONE

  IR *get_ir_from_library(IRTYPE);  // DONE

  bool is_ir_type_connvertable(IRTYPE a, IRTYPE b);
  void debug(IR *root);
  bool can_be_mutated(IR *);

  IR *record_ = nullptr;
  map<IRTYPE, vector<IR *>> ir_library_;
  map<IRTYPE, set<unsigned long>> ir_library_hash_;

  set<IRTYPE> not_mutatable_types_;
  set<IRTYPE> string_types_;
  set<IRTYPE> int_types_;
  set<IRTYPE> float_types_;

  map<IRTYPE, set<IRTYPE>> m_convertable_map_;
};

}  // namespace mutation
}  // namespace polyglot
#endif
