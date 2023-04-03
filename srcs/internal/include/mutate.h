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

  vector<IRPtr> mutate_all(vector<IRPtr> &v_ir_collector);
  vector<IRPtr> mutate(IRPtr input);
  void add_ir_to_library(IRPtr);
  bool init_ir_library_from_a_file(string filename);
  void extract_struct(IRPtr);  // Done

 private:
  bool should_mutate(IRPtr cur);
  void init_convertable_ir_type_map();
  IRPtr deep_copy_with_record(const IRPtr root, const IRPtr record);
  unsigned long hash(IRPtr);
  unsigned long hash(string &);

  // Delete and insert seems useless.
  // IRPtr strategy_delete(IRPtr cur);   // Done
  // IRPtr strategy_insert(IRPtr cur);   // Done
  IRPtr strategy_replace(IRPtr cur);  // done
  IRPtr strategy_replace_with_constraint(IRPtr cur);
  bool lucky_enough_to_be_mutated(unsigned int mutated_times);  // done

  bool replace(IRPtr root, IRPtr old_ir, IRPtr new_ir);  // done

  void add_ir_to_library_limited(IRPtr);  // DONE

  IRPtr get_ir_from_library(IRTYPE);  // DONE

  bool is_ir_type_connvertable(IRTYPE a, IRTYPE b);
  void debug(IRPtr root);
  bool can_be_mutated(IRPtr);

  IRPtr record_ = nullptr;
  map<IRTYPE, vector<IRPtr>> ir_library_;
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
