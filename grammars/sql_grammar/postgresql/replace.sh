#python3 postgres.py postgres_gram.y grammar_post.txt
python replace.py -r grammar_post.txt > z_post_result
python replace.py -t z_post_result > z_post_replaced_result
python replace.py -c z_post_replaced_result ff > z_post_tokens
