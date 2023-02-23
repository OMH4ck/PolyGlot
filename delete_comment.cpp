#include "include/ast.h"
#include "parser/bison_parser.h"
#include "parser/flex_lexer.h"
#include "include/mutate.h"
#include "include/utils.h"
#include "include/var_definition.h"
#include "include/typesystem.h"
#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main(int argc, char * argv[]){
        srand(time(NULL));
    yyscan_t scanner;
    YY_BUFFER_STATE state;
    //string file_name = string(argv[1]);
    string sql, line;
    ifstream input_file(argv[1]);
    while(getline(input_file, line)){
        sql += line + "\n";
    }
    auto s = new Program();
    if(ff_lex_init(&scanner)){
        cout << "error in init scanner" << endl;
        return -1;
    }

    state = ff__scan_string(sql.c_str(), scanner);
    int ret = ff_parse(s, scanner);
    ff__delete_buffer(state, scanner);
    ff_lex_destroy(scanner);

    if(ret){
        cout << "error in ff_parse" << endl;
        s->deep_delete();
        return -1;
    }
    assert(s);
    vector<IR *> v;

    auto root = s->translate(v);
    s->deep_delete();
    cout << root->to_string() << endl;

    return 0;

}
