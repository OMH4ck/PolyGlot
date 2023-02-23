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

int main(int argc, char *argv[])
{
	//srand(time(NULL));
	yyscan_t scanner;
	YY_BUFFER_STATE state;
	//string file_name = string(argv[1]);
	string sql, line;
	ifstream input_file(argv[1]);
	while (getline(input_file, line))
	{
		sql += line + "\n";
	}
	cout << sql << endl;
	auto s = new Program();
	if (ff_lex_init(&scanner))
	{
		cout << "error in init scanner" << endl;
		return -1;
	}

	state = ff__scan_string(sql.c_str(), scanner);
	int ret = ff_parse(s, scanner);
	ff__delete_buffer(state, scanner);
	ff_lex_destroy(scanner);

	if (ret)
	{
		cout << "error in ff_parse" << endl;
		s->deep_delete();
		return -1;
	}

	cout << "success, addr: " << s << endl;
	vector<IR *> v;
	if (s == NULL)
	{
		cout << "WTF" << endl;
		return 0;
	}
	auto root = s->translate(v);
	s->deep_delete();
	Mutator m;
	m.init();
	m.float_types_.insert(kFloatLiteral);
	m.int_types_.insert(kIntLiteral);
	m.string_types_.insert(kStringLiteral);
	//m.extract_struct(root);
	//cout << "to_string: " << root->to_string() << endl;
	//return 0;
	//m.init_data_library_2d("data/library2d");
	auto files = get_all_files_in_dir("./solidity_input");
	m.init_convertable_ir_type_map();
	for (auto &filename : files){
		m.init_ir_library_from_a_file("./solidity_input/" + filename);
	}

	//m.init_safe_generate_type("./safe_generate_type");
	//m.float_types_.insert({kFconst});
	//m.extract_struct(root);

	//cout << "After extract: " << root->to_string() << endl;

	//m.split_stmt_types_.insert(kStmt);
	//m.split_substmt_types_.insert({kStmt, kSelectClause, kSelectStmt});

	auto ts = new TypeSystem();
	ts->init();
	vector<vector<IR *>> v_ir;
	v_ir.push_back(v);
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		vector<vector<IR *>> tmptmp;
		for (auto &kk : v_ir)
		{
			auto mutated = m.mutate_all(kk);
			cout << "Mutate size: " << mutated.size() << endl;
			for (auto &ir : mutated)
			{
				string mutated_str = ir->to_string();
				//cout << "after mutate: " << mutated_str << endl;
				if(count++ > 6000) return 0;
				bool flag = TypeSystem::validate(ir);
				if (flag == true)
				{
					//cout << "After mutate: " << mutated_str << endl;
					auto ss = parser(mutated_str);
					if (ss == NULL)
					{
						cout << "Parse failed" << endl;
						continue;
					}
					//cout << "Successfully validated: " << ir->to_string() << endl;
					//getchar();
					vector<IR *> tmp_vec;
					ss->translate(tmp_vec);
					tmptmp.push_back(move(tmp_vec));
					ss->deep_delete();
				}
				else
				{
					cout << "Validate fail..." << endl;
				}

				deep_delete(ir);
				//getchar();
			}
		}
		for(auto k: v_ir){
			deep_delete(k.back());
		}
		v_ir = tmptmp;
	}

	//deep_delete(root);
	for(auto k: v_ir){
		deep_delete(k.back());
	}

	return 0;
}
