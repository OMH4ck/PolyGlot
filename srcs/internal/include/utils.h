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

#ifndef __UTILS_H__
#define __UTILS_H__

#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#include <algorithm>
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

// trim from start (in place)
static inline void Ltrim(std::string &s) {
  s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !std::isspace(ch);
          }));
}

// trim from end (in place)
static inline void Rtrim(std::string &s) {
  s.erase(std::find_if(s.rbegin(), s.rend(),
                       [](unsigned char ch) { return !std::isspace(ch); })
              .base(),
          s.end());
}

// trim from both ends (in place)
static inline void Trim(std::string &s) {
  Rtrim(s);
  Ltrim(s);
}
#endif
