#ifndef __UTILS_H__
#define __UTILS_H__

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <string>
#include <string_view>
#include <vector>

// To Fix

#define get_rand_int(range) rand() % (range)
#define vector_rand_ele_safe(a) \
  (a.size() != 0 ? a[get_rand_int(a.size())] : gen_id_name())
#define vector_rand_ele(a) (a[get_rand_int(a.size())])

void trim_string(std::string &);
void strip_string(std::string &res);
std::string gen_string();

std::string gen_random_num_string();
double gen_float();

long gen_long();

int gen_int();

void reset_id_counter();

std::string gen_id_name();

uint64_t ducking_hash(const void *key, int len);

std::vector<std::string> get_all_files_in_dir(const char *dir_name);

template <typename T>
typename T::const_iterator random_pick(T &cc) {
  typename T::const_iterator iter = cc.cbegin();
  advance(iter, rand() % (cc.size()));
  return iter;
}

std::string ReadFileIntoString(std::string_view file_name);
#endif
