#include <cassert>
#include <fstream>
#include <iostream>
#include <memory>
#include <stack>
#include <string>

#include "afl-fuzz.h"
#include "polyglot.h"

#include <string_view>

/*
class PolyGlotMutator {
  public:
    void do_libary_initialize();
    void add_to_library(const char* mem);
    size_t generate(const char* test_case);
    std::string get_next_test_case();
    std::string current_input;

  private:
    Mutator g_mutator;
    TypeSystem g_typesystem;
    char* g_libary_path;
    char* g_current_input = NULL;
    std::vector<std::string> save_test_cases_;
};

std::string PolyGlotMutator::get_next_test_case(){
  assert(!save_test_cases_.empty());
  std::string result = save_test_cases_.back();
  save_test_cases_.pop_back();
  return result;
}

void PolyGlotMutator::add_to_library(const char* mem){
  vector<IR *> ir_set;
  auto p_strip_sql = parser(mem);
  if(p_strip_sql){
    auto root_ir = p_strip_sql->translate(ir_set);
    p_strip_sql->deep_delete();
    g_mutator.add_ir_to_library(root_ir);
    deep_delete(root_ir);
  }
}

size_t PolyGlotMutator::generate(const char* test_case){
  Program * program_root;
  vector<IR *> ir_set, mutated_tree;
  program_root = parser(test_case);
  if(program_root == NULL){
    return 0;
  }

  try{
    program_root->translate(ir_set);
  }catch(...){
    for(auto ir: ir_set){
      delete ir;
    }
    program_root->deep_delete();
    return 0;
  }
  program_root->deep_delete();

  mutated_tree = g_mutator.mutate_all(ir_set);
  deep_delete(ir_set[ir_set.size()-1]);

  for(auto &ir: mutated_tree){
    if(TypeSystem::validate(ir)){
      save_test_cases_.push_back(ir->to_string());
    }
    deep_delete(ir);
  }

  return save_test_cases_.size();
}

void PolyGlotMutator::do_libary_initialize(){
  vector<IR*> ir_set;

  g_mutator.float_types_.insert(kFloatLiteral);
  g_mutator.int_types_.insert(kIntLiteral);
  g_mutator.string_types_.insert(kStringLiteral);

  std::string init_file_path = GetInitDirPath();
  vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());

  for(auto &f : file_list){
    cerr << "init filename: " << init_file_path +f << endl;
    g_mutator.init_ir_library_from_a_file(init_file_path +f);
  }
  g_mutator.init_convertable_ir_type_map();
  g_typesystem.init();
}
*/

extern "C" {

void *afl_custom_init(afl_state_t *afl, unsigned int seed) {
  auto result = new PolyGlotMutator();
  result->do_libary_initialize();
  return result;
}

void afl_custom_deinit(PolyGlotMutator *data) { delete data; }

u8 afl_custom_queue_new_entry(PolyGlotMutator *mutator,
                              const unsigned char *filename_new_queue,
                              const unsigned char *filename_orig_queue) {
  // read a file by file name
  std::ifstream ifs((const char *)filename_new_queue);
  std::string content((std::istreambuf_iterator<char>(ifs)),
                      (std::istreambuf_iterator<char>()));
  mutator->add_to_library(content.c_str());
  return false;
}

unsigned int afl_custom_fuzz_count(PolyGlotMutator *mutator,
                                   const unsigned char *buf, size_t buf_size) {
  std::string test_case((const char *)buf, buf_size);
  return mutator->generate(test_case.c_str());
}

size_t afl_custom_fuzz(PolyGlotMutator *mutator, uint8_t *buf, size_t buf_size,
                       u8 **out_buf, uint8_t *add_buf,
                       size_t add_buf_size, // add_buf can be NULL
                       size_t max_size) {
  mutator->get_next_test_case();
  std::string_view current_input = mutator->get_next_test_case();
  *out_buf = (u8 *)current_input.data();
  return current_input.size();
}
}
