#include <cassert>
#include <fstream>
#include <iostream>
#include <memory>
#include <stack>
#include <string>
#include <string_view>

#include "afl-fuzz.h"
#include "polyglot.h"

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
                       size_t add_buf_size,  // add_buf can be nullptr
                       size_t max_size) {
  std::string_view current_input = mutator->get_next_test_case();
  *out_buf = (u8 *)current_input.data();
  return current_input.size();
}
}
