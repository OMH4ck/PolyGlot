cd parser
flex flex.l
bison bison.y --output=bison_parser.cpp --defines=bison_parser.h --verbose -Wconflicts-rr
#cd ..
#g++ -Wunused-function -std=c++17 single_validate.cpp parser/bison_parser.cpp parser/flex_lexer.cpp src/ast.cpp src/utils.cpp src/mutate.cpp src/var_definition.cpp src/typesystem.cpp -o single_validate -g
#g++ -Wunused-function -std=c++17 mutate_test.cpp parser/bison_parser.cpp parser/flex_lexer.cpp src/ast.cpp src/utils.cpp src/mutate.cpp src/var_definition.cpp src/typesystem.cpp -o mutate_test -g -pg -fsanitize=address
#g++ -Wunused-function -O3 -std=c++17 single_validate.cpp parser/bison_parser.cpp parser/flex_lexer.cpp src/ast.cpp src/utils.cpp src/mutate.cpp src/var_definition.cpp src/typesystem.cpp -o single_validate -g -pg
#g++ -Wunused-function -O3 -std=c++17 mutate_test.cpp parser/bison_parser.cpp parser/flex_lexer.cpp src/ast.cpp src/utils.cpp src/mutate.cpp src/var_definition.cpp src/typesystem.cpp -o mutate_test -g -pg
