#ifndef __MUTATOR_H__
#define __MUTATOR_H__

// #include <queue>
#include <map>
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
  Mutator(std::shared_ptr<Frontend> frontend = nullptr);
  vector<IRPtr> MutateIRs(vector<IRPtr> &v_ir_collector);
  vector<IRPtr> MutateIR(IRPtr input);
  void AddIRToLibrary(IRPtr);

  // This should be long to IR?
  void extract_struct(IRPtr);
  [[deprecated("This seems redundant, will be removed soon")]] bool
  init_ir_library_from_a_file(string filename);

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
