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
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <cassert>
#include <cstdio>

vector<string> get_all_files_in_dir( const char * dir_name )
{
    vector<string> file_list;
	// check the parameter !
	if( NULL == dir_name )
	{
		cout<<" dir_name is null ! "<<endl;
		return file_list;
	}
 
	// check if dir_name is a valid dir
	struct stat s;
	lstat( dir_name , &s );
	if( ! S_ISDIR( s.st_mode ) )
	{
		cout<<"dir_name is not a valid directory !"<<endl;
		return file_list;
	}
	
	struct dirent * filename;    // return value for readdir()
 	DIR * dir;                   // return value for opendir()
	dir = opendir( dir_name );
	if( NULL == dir )
	{
		cout<<"Can not open dir "<<dir_name<<endl;
		return file_list;
	}
	cout<<"Successfully opened the dir !"<<endl;
	
	/* read all the files in the dir ~ */
	while( ( filename = readdir(dir) ) != NULL )
	{
		// get rid of "." and ".."
		if( strcmp( filename->d_name , "." ) == 0 || 
			strcmp( filename->d_name , "..") == 0    )
			continue;
		cout<<filename->d_name <<endl;
        file_list.push_back(string(filename->d_name));
	}
    return file_list;
} 

int main(int argc, char * argv[]){
    string line;
    ifstream input(argv[1]);
    Mutator m;
    set<unsigned long> res;
    m.float_types_.insert(kFloatLiteral);
    m.int_types_.insert(kIntLiteral);
    m.string_types_.insert(kStringLiteral);

    auto filenames = get_all_files_in_dir(argv[1]);
    string dirname = string(argv[1]);
    int file_idx = 0;
    set<unsigned long> v_input;
    set<unsigned long> v_init;
    vector<IR *> v_ir;
    ofstream out_line("init.txt", ios::out| ios::binary);
    double i=0;
    int all = filenames.size();
    for(auto &filename: filenames){
        v_ir.clear();
        i++;
        cout << i/all*100 << "%" << endl;
        string fullname = dirname +"/" + filename;
        ifstream input(fullname);
        string line;
        getline(input, line);
        auto ast = parser(line);
        if(ast != NULL){
           
            ofstream output(to_string(file_idx), ios::out| ios::binary);
            output << line << endl;
            ast->deep_delete();
            file_idx++;
            continue;
        } 
        
        input.seekg(ios_base::beg);
        while(getline(input, line, ';')){
            line = line + ";";
            auto line_ast = parser(line);
            if(line_ast != NULL){
                out_line << line << endl;
                line_ast->deep_delete();
            }
        }
    }
    out_line.close();
    return 0;
}
