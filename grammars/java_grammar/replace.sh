#python3 postgres.py postgres_gram.y grammar_post.txt
#python replace.py -r grammar > z_post_result
python replace.py -t grammar > replaced_grammar
python replace.py -c replaced_grammar ff > tokens
