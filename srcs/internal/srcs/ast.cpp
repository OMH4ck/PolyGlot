#include "ast.h"
#include "config_misc.h"
#include "define.h"
#include "ir.h"
#include "typesystem.h"
#include "utils.h"
#include "var_definition.h"
#include <cassert>

/*
static bool scope_tranlation = false;

static unsigned long id_counter;
// name_ = gen_id_name();
#define GEN_NAME() id_ = id_counter++;

#define STORE_IR_SCOPE()                                                       \
  if (scope_tranlation) {                                                      \
    if (g_scope_current == NULL)                                               \
      return;                                                                  \
    g_scope_current->v_ir_set_.push_back(this);                                \
    this->scope_id_ = g_scope_current->scope_id_;                              \
  }
*/

Node *generate_ast_node_by_type(IRTYPE type) {
#define DECLARE_CASE(classname)                                                \
  if (type == k##classname)                                                    \
    return new classname();

  ALLCLASS(DECLARE_CASE);
#undef DECLARE_CASE
  return NULL;
}

NODETYPE get_nodetype_by_string(string s) {
#define DECLARE_CASE(datatypename)                                             \
  if (s == #datatypename)                                                      \
    return k##datatypename;

  ALLCLASS(DECLARE_CASE);

#undef DECLARE_CASE
  return kUnknown;
}

string get_string_by_nodetype(NODETYPE tt) {
#define DECLARE_CASE(datatypename)                                             \
  if (tt == k##datatypename)                                                   \
    return string(#datatypename);

  ALLCLASS(DECLARE_CASE);

#undef DECLARE_CASE
  return string("");
}

string get_string_by_datatype(DATATYPE tt) {
#define DECLARE_CASE(datatypename)                                             \
  if (tt == k##datatypename)                                                   \
    return string(#datatypename);

  ALLDATATYPE(DECLARE_CASE);

#undef DECLARE_CASE
  return string("");
}

DATATYPE get_datatype_by_string(string s) {
#define DECLARE_CASE(datatypename)                                             \
  if (s == #datatypename)                                                      \
    return k##datatypename;

  ALLDATATYPE(DECLARE_CASE);

#undef DECLARE_CASE
  return kDataWhatever;
}

IR *Node::translate(vector<IR *> &v_ir_collector) { return NULL; }

/*
void set_scope_translation_flag(bool flag) {
  scope_tranlation = flag;
  if (flag == false) {
    id_counter = 0;
  }
}
bool get_scope_translation_flag() { return scope_tranlation; }
*/