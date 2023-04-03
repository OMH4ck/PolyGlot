#pragma once
#ifndef __DEFINE_H__
#define __DEFINE_H__

#define GLOBAL_SCOPE 0x1000
#define FUNCTION_SCOPE 0x1001
#define STATEMENT_SCOPE 0x1002
#define CLASS_BODY_SCOPE 0x1003

// #define SYNTAX_ONLY

// #define INIT_FILE_DIR "__INIT_FILE_DIR__"

//__LANG_FUZZ__

#define SWITCHSTART switch (case_idx_) {
#define SWITCHEND \
  default:        \
                  \
    assert(0);    \
    }

#define CASESTART(idx) case CASE##idx: {
#define CASEEND \
  break;        \
  }

#define TRANSLATESTART IRPtr res = nullptr;

#define GENERATESTART(len) case_idx_ = rand() % len;

#define GENERATEEND return;

#define TRANSLATEEND             \
  v_ir_collector.push_back(res); \
  res->data_type_ = data_type_;  \
  res->data_flag_ = data_flag_;  \
                                 \
  return res;

#define TRANSLATEENDNOPUSH      \
  res->data_type_ = data_type_; \
  res->data_flag_ = data_flag_; \
                                \
  return res;

#define SAFETRANSLATE(a) (assert(a != nullptr), a->translate(v_ir_collector))

#define SAFEDELETE(a) \
  if (a != nullptr) a = nullptr

#define SAFEDELETELIST(a) \
  for (auto _i : a) SAFEDELETE(_i)

#define OP1(a) std::make_shared<IROperator>(a)

#define OP2(a, b) std::make_shared<IROperator>(a, b)

#define OP3(a, b, c) std::make_shared<IROperator>(a, b, c)

#define OPSTART(a) std::make_shared<IROperator>(a)

#define OPMID(a) std::make_shared<IROperator>("", a, "")

#define OPEND(a) std::make_shared<IROperator>("", "", a)

#define OP0() std::make_shared<IROperator>()

#define TRANSLATELIST(t, a, b)                         \
  res = SAFETRANSLATE(a[0]);                           \
  res = std::make_shared<IR>(t, OP0(), res);           \
  v_ir_collector.push_back(res);                       \
  for (int i = 1; i < a.size(); i++) {                 \
    IRPtr tmp = SAFETRANSLATE(a[i]);                   \
    res = std::make_shared<IR>(t, OPMID(b), res, tmp); \
    v_ir_collector.push_back(res);                     \
  }

#define PUSH(a) v_ir_collector.push_back(a)

#define MUTATESTART               \
  IRPtr res = nullptr;            \
  auto randint = get_rand_int(3); \
  switch (randint) {
#define DOLEFT case 0: {
#define DORIGHT \
  break;        \
  }             \
                \
  case 1: {
#define DOBOTH \
  break;       \
  }            \
  case 2: {
#define MUTATEEND \
  }               \
  }               \
                  \
  return res;

#endif
