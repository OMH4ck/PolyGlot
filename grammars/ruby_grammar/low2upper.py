replace_list = ["keyword_class", "keyword_module", "keyword_def", "keyword_undef", "keyword_begin", "keyword_rescue", "keyword_ensure", "keyword_end", "keyword_if", "keyword_unless", "keyword_then", "keyword_elsif", "keyword_else", "keyword_case", "keyword_when", "keyword_while", "keyword_until", "keyword_for", "keyword_break", "keyword_next", "keyword_redo", "keyword_retry", "keyword_in", "keyword_do", "keyword_do_cond", "keyword_do_LAMBDA", "keyword_return", "keyword_yield", "keyword_super", "keyword_self", "keyword_nil", "keyword_true", "keyword_false", "keyword_and", "keyword_or", "keyword_not", "modifier_if", "modifier_unless", "modifier_while", "modifier_until", "modifier_rescue", "keyword_alias", "keyword_defined", "keyword_BEGIN", "keyword_END", "keyword__LINE__", "keyword__FILE__", "keyword__ENCODING__"]
with open("./grammar") as f:
    content = f.read()

for word in replace_list:
    content = content.replace(word, word.upper())


extra_replace = dict()
extra_replace["keyword_do_cond"] = "keyword_do"
extra_replace["keyword_do_block"] = "keyword_do"
extra_replace["keyword_do_LAMBDA"] = "keyword_do"
extra_replace["modifier_if"] = "keyword_if"
extra_replace["modifier_while"] = "keyword_while"
extra_replace["modifier_unless"] = "keyword_unless"
extra_replace["modifier_until"] = "keyword_until"
extra_replace["modifier_rescue"] = "keyword_rescue"

for orig, replaced in extra_replace.items():
    content = content.replace(orig.upper(), replaced.upper())

print content


