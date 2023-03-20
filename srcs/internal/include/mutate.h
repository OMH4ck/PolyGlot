#ifndef __MUTATOR_H__
#define __MUTATOR_H__

// #include <queue>
#include "ir.h"
#include <map>
#include <set>

#define LUCKY_NUMBER 500

using std::map;
using std::set;

enum RELATIONTYPE {
  kRelationElement,
  kRelationSubtype,
  kRelationAlias,
};

class Mutator {

public:
  Mutator() { srand(time(nullptr)); }

  ~Mutator() {
    for (auto &k : ir_library_) {
      for (auto ir : k.second) {
        deep_delete(ir);
      }
    }
  }

  IR *deep_copy_with_record(const IR *root, const IR *record);
  unsigned long hash(IR *);
  unsigned long hash(string &);

  vector<IR *> mutate_all(vector<IR *> &v_ir_collector); // done
  vector<IR *> mutate(IR *input);                        // done
  IR *strategy_delete(IR *cur);                          // Done
  IR *strategy_insert(IR *cur);                          // Done
  IR *strategy_replace(IR *cur);                         // done
  IR *strategy_replace_with_constraint(IR *cur);
  bool lucky_enough_to_be_mutated(unsigned int mutated_times); // done

  bool replace(IR *root, IR *old_ir, IR *new_ir); // done
  // IR * locate_parent(IR* root, IR * old_ir) ; //done

  // string validate(IR * root); // check the sql statement is valid

  void init(string f_testcase = "", string f_common_string = "",
            string file2d = "", string file1d = "",
            string f_gen_type = ""); // DONE

  void init_convertable_ir_type_map();
  void init_ir_library(string filename); // DONE
  void init_ir_library_from_a_file(string filename);
  void init_value_library();                     // DONE
  void init_common_string(string filename);      // DONE
  void init_data_library(string filename);       // DONE
  void init_data_library_2d(string filename);    // DONE
  void init_not_mutatable_type(string filename); // DONE
  void init_safe_generate_type(string filename);
  void add_ir_to_library(IR *);         // DONE
  void add_ir_to_library_limited(IR *); // DONE

  IR *get_ir_from_library(IRTYPE); // DONE
  IR *generate_ir_by_type(IRTYPE); // Done

  void extract_struct(IR *); // Done

  bool is_ir_type_connvertable(IRTYPE a, IRTYPE b);

  //~Mutator();
  void debug(IR *root);

  bool can_be_mutated(IR *);

  // private:

  // IR* generate_ir_by_type(IRTYPE type);

  static const unsigned max_ir_library_size_ = 0x200;
  IR *record_ = NULL;
  IR *mutated_root_ = NULL;
  map<IRTYPE, vector<IR *>> ir_library_;
  map<IRTYPE, set<unsigned long>> ir_library_hash_;

  vector<string> string_library_;
  set<unsigned long> string_library_hash_;
  vector<unsigned long> value_library_;

  map<DATATYPE, map<DATATYPE, RELATIONTYPE>> relationmap_;

  vector<string> common_string_library_;
  set<IRTYPE> not_mutatable_types_;
  set<IRTYPE> string_types_;
  set<IRTYPE> int_types_;
  set<IRTYPE> float_types_;

  set<IRTYPE> safe_generate_type_;
  set<IRTYPE> split_stmt_types_;
  set<IRTYPE> split_substmt_types_;

  map<DATATYPE, vector<string>> data_library_;
  map<DATATYPE, map<string, map<DATATYPE, vector<string>>>> data_library_2d_;

  map<DATATYPE, vector<string>> g_data_library_;
  map<DATATYPE, set<unsigned long>> g_data_library_hash_;
  map<DATATYPE, map<string, map<DATATYPE, vector<string>>>> g_data_library_2d_;
  map<DATATYPE, map<string, map<DATATYPE, vector<string>>>>
      g_data_library_2d_hash_;

  map<int, map<DATATYPE, vector<IR *>>> scope_library_;

  set<unsigned long> global_hash_;

  map<IRTYPE, set<IRTYPE>> m_convertable_map_;

  // map<IRTYPE, map<IRTYPE, map<IR*, vector<IR*>>>> scope_libary_2D_;
  // map<IRTYPE, map<IRTYPE, map<IR*, vector<IR*>>>> g_libary_2D_;
};

unsigned int calc_node(IR *root);
bool contain_fixme(IR *);
void remove_definition(IR *&);
void extract_struct_after_mutation(IR *);
#endif
