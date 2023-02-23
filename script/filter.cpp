#include "include/ast.h"
#include "parser/bison_parser.h"
#include "parser/flex_lexer.h"
#include "include/mutate.h"
#include <string>
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include <set>

int main(int argc, char * argv[]){
    string line;
    ifstream input(argv[1]);
    Mutator m;
    set<unsigned long> res;
    m.float_types_.insert(kFloatLiteral);
    m.int_types_.insert(kIntLiteral);
    m.string_types_.insert(kStringLiteral);

    while(getline(input, line)){
        if(line.size() == 0) continue;
        //cout << "now parsing" << endl;
        auto ret = parser(line);
        //cout << "parsed:" << line << endl;
        if(ret == NULL){continue;}
        vector<IR *> tmp;
        //cout << "now translating" << endl;
        auto ir = ret->translate(tmp);
        if(ir==NULL) {continue;}
        m.extract_struct(ir);
        //cout << ir->to_string() << endl;
        string s = ir->to_string();
        auto h = m.hash(s);
        if(res.find(h) != res.end()) continue;
        res.insert(h);
        //cout << line << endl;
        cout << s << endl;
        //ret->deep_delete(); 
    }

    return 0;
}
