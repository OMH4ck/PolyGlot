LAN=c

all: template/* Generator.py
	@if [ ! -d "src" ]; then \
	    mkdir src; \
	    mkdir include; \
	    mkdir parser; \
	fi
	cd grammars/${LAN}_grammar && ./replace.sh
	python Generator.py -i grammars/${LAN}_grammar/replaced_grammar -t grammars/${LAN}_grammar/tokens -d data/destructor -D data/datatype -e data/extra_flex_rule_${LAN} -s grammars/${LAN}_grammar/semantic.json
	./update.sh

gen: template/* Generator.py
	python Generator.py -i ${LAN}_grammar/replaced_grammar -t ${LAN}_grammar/tokens -d data/destructor -D data/datatype -e data/extra_flex_rule_${LAN} -s ${LAN}_grammar/semantic.json
	
grammar:
	python Generator.py -i ${LAN}_grammar/replaced_grammar -t ${LAN}_grammar/tokens -d data/destructor -D data/datatype -s ${LAN}_grammar/semantic.json
	cd parser && flex flex.l &&\
	bison bison.y --output=bison_parser.cpp --defines=bison_parser.h --verbose -Wconflicts-rr

test: FORCE
	echo "Checking functionality"
	@python ./functionality_check.py

mysql:min_grammar_mysql
	python replace.py -c min_grammar_mysql ff > min_tokens_mysql
	python Generator.py -i ./min_grammar_mysql -t ./min_tokens_mysql -d data/destructor -D data/datatype
	./update.sh

postsql: Generator.py
	python Generator.py -i ./final_grammar -t postgresql/z_post_tokens -d data/destructor -D data/datatype

clean:
	rm include/* parser/* src/*
	rm *.pyc

FORCE:
