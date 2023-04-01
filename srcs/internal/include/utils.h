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
#include "gen_ir.h"

#define get_rand_int(range) rand() % (range)
#define vector_rand_ele_safe(a) \
  (a.size() != 0 ? a[get_rand_int(a.size())] : gen_id_name())
#define vector_rand_ele(a) (a[get_rand_int(a.size())])

void trim_string(string &);
void strip_string(string &res);
string gen_string();

string gen_random_num_string();
double gen_float();

long gen_long();

int gen_int();

void reset_id_counter();

string gen_id_name();

uint64_t ducking_hash(const void *key, int len);

vector<string> get_all_files_in_dir(const char *dir_name);

template <typename T>
typename T::iterator random_pick(T &cc) {
  typename T::iterator iter = cc.begin();
  advance(iter, rand() % (cc.size()));
  return iter;
}
// template<typename T> typename T::iterator random_pick(T &cc);

TopASTNode *parser(string sql);
#endif