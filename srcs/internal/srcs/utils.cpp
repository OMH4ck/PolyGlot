// Copyright (c) 2023 OMH4ck
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include "utils.h"

// #include "typesystem.h"
// #include "var_definition.h"

#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

static unsigned long g_id_counter;

string gen_random_num_string() { return std::to_string(get_rand_int(0x1000)); }

void reset_id_counter() { g_id_counter = 0; }

string gen_id_name() { return "v" + to_string(g_id_counter++); }

void strip_string(string &res) {
  int idx = res.size() - 1;
  while (idx >= 0 &&
         (res[idx] == ' ' || res[idx] == '\n' || res[idx] == '\t')) {
    idx--;
  }

  res.resize(idx + 1);
}

void trim_string(string &res) {
  int count = 0;
  int idx = 0;
  bool expect_space = false;
  for (int i = 0; i < res.size(); i++) {
    if ((res[i] == ';' || res[i] == '}' || res[i] == '{') &&
        i != res.size() - 1) {
      if (res[i + 1] == ' ') res[i + 1] = '\n';
    }
    if (res[i] == ' ') {
      if (expect_space == false) {
        continue;
      } else {
        expect_space = false;
        res[idx++] = res[i];
        count++;
      }
    } else {
      expect_space = true;
      res[idx++] = res[i];
      count++;
    }
  }

  res.resize(count);
}

string gen_string() { return string("x"); }

double gen_float() { return 1.2; }

long gen_long() { return 1; }

int gen_int() { return 1; }

typedef unsigned long uint64_t;

vector<string> get_all_files_in_dir(const char *dir_name) {
  vector<string> file_list;
  if (nullptr == dir_name) {
    cout << " dir_name is null ! " << endl;
    return file_list;
  }

  struct stat s;
  lstat(dir_name, &s);
  if (!S_ISDIR(s.st_mode)) {
    cout << dir_name << "is not a valid directory !" << endl;
    return file_list;
  }

  struct dirent *filename;  // return value for readdir()
  DIR *dir;                 // return value for opendir()
  dir = opendir(dir_name);
  if (nullptr == dir) {
    cout << "Can not open dir " << dir_name << endl;
    return file_list;
  }
  // cout << "Successfully opened the dir !" << endl;

  std::string abs_path(dir_name);
  if (abs_path[abs_path.size() - 1] != '/') {
    abs_path += '/';
  }
  while ((filename = readdir(dir)) != nullptr) {
    if (strcmp(filename->d_name, ".") == 0 ||
        strcmp(filename->d_name, "..") == 0)
      continue;
    // cout<<filename->d_name <<endl;
    file_list.push_back(abs_path + filename->d_name);
  }
  closedir(dir);
  return file_list;
}

uint64_t ducking_hash(const void *key, int len) {
  const uint64_t m = 0xc6a4a7935bd1e995;
  const int r = 47;
  uint64_t h = 0xdeadbeefdeadbeef ^ (len * m);

  const uint64_t *data = (const uint64_t *)key;
  const uint64_t *end = data + (len / 8);

  while (data != end) {
    uint64_t k = *data++;

    k *= m;
    k ^= k >> r;
    k *= m;

    h ^= k;
    h *= m;
  }

  const unsigned char *data2 = (const unsigned char *)data;

  switch (len & 7) {
    case 7:
      h ^= uint64_t(data2[6]) << 48;
    case 6:
      h ^= uint64_t(data2[5]) << 40;
    case 5:
      h ^= uint64_t(data2[4]) << 32;
    case 4:
      h ^= uint64_t(data2[3]) << 24;
    case 3:
      h ^= uint64_t(data2[2]) << 16;
    case 2:
      h ^= uint64_t(data2[1]) << 8;
    case 1:
      h ^= uint64_t(data2[0]);
      h *= m;
  };

  h ^= h >> r;
  h *= m;
  h ^= h >> r;

  return h;
}

/*
   void print_v_ir(vector<IRPtr > &v_ir_collector){
   for(auto ir: v_ir_collector){
   if(ir->operand_num_ == 0){
   if(ir->type_ == kconst_int)
   cout << ir->name_ << " = .int." << ir->int_val_ << endl;
   else if(ir->type_ == kconst_float)
   cout << ir->name_ << " = .float." << ir->f_val_ << endl;
   else if(ir->type_ == kBoolLiteral)
   cout << ir->name_ << " = .bool." << ir->b_val_ << endl;
   else
   cout << ir->name_ << " = .str." << ir->str_val_ << endl;

   }
   else if(ir->operand_num_ == 1){
   string res = "";
   if(ir->op_ != nullptr){
   res += ir->op_->prefix_ + " ";
   res += ir->left_->name_ + " ";
   res += ir->op_->middle_ + " ";
   res += ir->op_->suffix_ + " ";
   }
   cout << ir->name_ << " = " << res << endl;
   }
   else if(ir->operand_num_ == 2){
   string res = "";
   if(ir->op_ != nullptr){
   res += ir->op_->prefix_ + " ";
   res += ir->left_->name_ + " ";
   res += ir->op_->middle_ + " ";
   res += ir->right_->name_ + " ";
   res += ir->op_->suffix_ + " ";
   }
   cout << ir->name_ << " = " << res << endl;
   }
   }

   return;
   }

   void print_ir(IRPtr  ir){

   if(ir->left_ != nullptr) print_ir(ir->left_);
   if(ir->right_ != nullptr) print_ir(ir->right_);

   if(ir->operand_num_ == 0){
   if(ir->type_ == kconst_int)
   cout << ir->name_ << " = .int." << ir->int_val_ << endl;
   else if(ir->type_ == kconst_float)
   cout << ir->name_ << " = .float." << ir->f_val_ << endl;
   else if(ir->type_ == kBoolLiteral)
   cout << ir->name_ << " = .bool." << ir->b_val_ << endl;
   else
   cout << ir->name_ << " = .str." << ir->str_val_ << endl;
   }
   else if(ir->operand_num_ == 1){
   string res = "";
   if(ir->op_ != nullptr){
   res += ir->op_->prefix_ + " ";
   res += ir->left_->name_ + " ";
   res += ir->op_->middle_ + " ";
   res += ir->op_->suffix_ + " ";
   }
   cout << ir->name_ << " = " << res << endl;
   }
   else if(ir->operand_num_ == 2){
   string res = "";
   if(ir->op_ != nullptr){
   res += ir->op_->prefix_ + " ";
   res += ir->left_->name_ + " ";
   res += ir->op_->middle_ + " ";
res += ir->right_->name_ + " ";
res += ir->op_->suffix_ + " ";
}
cout << ir->name_ << " = " << res << endl;
}


return;
}
*/

std::string ReadFileIntoString(std::string_view file_name) {
  std::ifstream ifs(file_name.data());
  std::string content((std::istreambuf_iterator<char>(ifs)),
                      (std::istreambuf_iterator<char>()));
  return content;
}
