# FuzzerFactory
import re
import argparse
import os
from Config import *

# Grammar Format
"""
select_statement:
    SELECT column_name FROM table_name {xxxxx}
    SELECT column_list FROM table_name JOIN table_name {xxxxxx}
-------------------------------------------------------------
create_statement:
    CREATE xxx
    
-------------------------------------------------------------

"""
allClass = list()
tokenDict = dict()
#notKeywordSym = dict()
literalValue = dict() #{"float":["float_literal"], "int":["int_literal"], "string":["identifier", "string_literal"]}
destructorDict = dict()

def hump_to_underline(input_str):
    '''
        input: a str represents classname in hump style
        output: underline style of that classname
        e.g. SelectStatement -> select_statement
    '''
    ptn = re.compile(r"([a-zA-Z]|\d)([A-Z])")
    output = re.sub(ptn, r"\1_\2", input_str).lower()
    return output

def underline_to_hump(input_str):
    '''
        input: a str represents classname in underline style
        output: hump style of that classname
        e.g. select_statement -> SelectStatement
    '''
    output = re.sub(r'(_\w)',lambda x:x.group(1)[1].upper(),input_str)
    return output[0].upper() + output[1:]

def is_specific(classname):
    '''
        test if this class need specific handling
        return [bool, type]
        e.g. [Flase, ""] or [True, "string"]
    '''
    classname = hump_to_underline(classname)
    global literalValue
    flag = False
    for k, v in literalValue.items():
        for cname in v:
            if(cname == classname):
                return [True, k]

    return [False, ""]
 


'''
Token:
    token_name: string
    prec : int
    association: string
    match_string: string
    is_keyword: bool

Symbol: class
    name: string
    isTerminator: bool
    isId: bool

Case: class
    caseidx: int
    symbolList: 
    idTypeList:
    
GenClass: class
    name: string
    memberList : dict # A dictionary of this class's members
    caseList : list of case  # A list of each case of this class
'''

class Token:
    def __init__(self, token_name, prec, assoc, match_string, ttype):
        self.token_name = token_name
        self.prec = prec
        self.assoc = assoc
        self.match_string = match_string
        self.ttype = ttype
        self.is_keyword = (token_name == match_string)

class Symbol:
    def __init__(self, name, isTerminator = False, isId = False):
        self.name = name
        self.isTerminator = isTerminator
        self.isId = isId
        self.analyze()
        
    def analyze(self):
        token = self.analyze_item(self.name)
        if(token == "_COMMA_" or token == "_QUOTA_" or token == "_LD_" or token == "_RD_" or "_QUEAL_"):
            self.name = self.name.replace("\'", "")
        if(self.name.isupper()):
            self.isTerminator = True
        if(token == "_IDENTIFIER_"):
            #self.isTerminator = False
            self.isId = True
                    
    def analyze_item(self, i):
        if i == "IDENTIFIER":
            return "_IDENTIFIER_"
        elif i == "EMPTY":
            return "_EMPTY_"
        elif i == "'='":
            return "_EQUAL_"
        elif i == "','":
            return "_COMMA_"
        elif i == "';'":
            return "_QUOTA_"
        elif i == "'('":
            return "_LD_"
        elif i == "')'":
            return "_RD_"
        elif i.isupper():
            return "_KEYWORD_"
        else:
            return "_VAR_"
    
    def __str__(self):
        return "name:%s, isTerminator:%s, isId:%s" % (self.name, self.isTerminator, self.isId)

class Case:
    def __init__(self, caseidx, isEmpty):
        self.caseidx = caseidx
        self.symbolList = list()
        self.idTypeList = list()
        self.isEmpty = isEmpty
    
    def gen_member_list(self):
        member_list = {}
        member_list.clear()
        
        #if empty, we won't add anything into memberlist
        if(self.isEmpty == True):
            return member_list

        for s in self.symbolList:
            if s.isTerminator == True:
                continue
            if(s.name in member_list):
                member_list[s.name] += 1
            else:
                member_list[s.name] = 1
        return member_list
    
    def __str__(self):
        symbol = ""
        for i in self.symbolList:
            symbol += "(" + str(i) + ")" + ","
        symbol = symbol[:-1]
        res = "caseidx:%d, SymbolList:(%s), isEmpty:%s\n" % (self.caseidx, symbol, self.isEmpty)
        return res
        

class Genclass:
    def __init__(self, name, memberList = None, caseList = None):
        if(memberList == None):
            memberList = dict()
        if(caseList == None):
            caseList = list()
            
        self.name = underline_to_hump(name)
        self.memberList = memberList
        self.caseList = list()

    def merge_member_list(self, current_member_list):
        for m in current_member_list:
            if(m in self.memberList and current_member_list[m]>self.memberList[m]):
                self.memberList[m] = current_member_list[m]
            elif(m not in self.memberList):
                self.memberList[m] = current_member_list[m]
                
    def __str__(self):
        name = self.name
        members = "("
        for k, v in self.memberList.items():
            members += k + ":" + str(v) + ","
        members = members[:-1] + ")"
        case = "("
        for i in self.caseList:
            case += str(i) + ","
        case = case[:-1] + ")"
        
        return "Genclass:[name:%s,\n memberList:%s,\n caseList:%s]" %(name, members, case)
        



def parseGrammar(grammarDescription):

    content = grammarDescription.split("\n")
    res = Genclass(content[0].strip(":\n"))
    #res.memberList = dict()
    #print "*************"
    #print content[0].strip(":\n")
    #print res #this is wrong
    #print "*************"
    cases = content[1:]
    cases = [i.lstrip() for i in cases]
    caseIndex = 0

    for c in cases:
        case = Case(caseIndex, len(c)==0)
        caseIndex += 1
        symbols = c.split(" ")
        case.symbolList = [Symbol(s) for s in symbols]
        #print(symbols)
        current_member_list = case.gen_member_list()
        res.merge_member_list(current_member_list)
        res.caseList.append(case)
    
    global allClass
    allClass.append(res)

    return res
            
        

def genClassDef(current_class, parent_class):
    '''
        Input:
            s : class

        Output:
            definition of this class in cpp: string
    '''
    res = "class "
    res += current_class.name + ":"
    res += "public " + "Node "+ "{\n"
    res += "public:\n" + "\tvirtual void deep_delete();\n"
    res += "\tvirtual IR* translate(vector<IR*> &v_ir_collector);\n"
    res += "\tvirtual void generate();\n"

    res += "\n"

    #Handle classes which need specific variable
    specific = is_specific(current_class.name)
    if(specific[0]):
        res += "\t" + specific[1] + " " + specific[1] + "_val_;\n"
        res += "};\n\n"
        return res

    for member_name, count in current_class.memberList.items():
        if(member_name == ""):
            continue
        if(count == 1):
            res += "\t" + underline_to_hump(member_name) + " * " + member_name + "_;\n"
        else:
            for idx in range(count):
                res += "\t" + underline_to_hump(member_name) + " * " + member_name + "_" + str(idx+1) + "_;\n"
    res += "};\n\n"

    return res
        
    

def genDeepDelete(current_class):
    
    res = "void " + current_class.name + "::deep_delete(){\n"
    for member_name, count in current_class.memberList.items():
        if(count == 1):
            res += "\t" + "SAFEDELETE(" + member_name + "_);\n"
        else:
            for idx in range(count):
                res += "\t" + "SAFEDELETE(" + member_name + "_" + str(idx+1) + "_);\n"
    
    res += "\tdelete this;\n"
    res += "};\n\n"

    return res 


def translateOneMember(member_name, variable_name):
    """
        Input:
            MemberName: string
            VariableName: string

        Output:
            a translate call string
            no \t at the front
   
    """
    return "auto " + variable_name + "= SAFETRANSLATE(" + member_name + ");\n"


def findOperator(symbol_list):
    res = ""
    idx = 0
    while(idx < len(symbol_list)):
        if(symbol_list[idx].isTerminator == True):
            res += symbol_list[idx].name + " "
            symbol_list.remove(symbol_list[idx])
            idx -= 1
        else:
            res = res[:-1]
            break
        
        idx += 1

    return res.strip()

def findLastOperator(symbol_list):
    res = ""
    idx = 0
    if(idx < len(symbol_list)):
        if(symbol_list[idx].isTerminator == True):
            res += symbol_list[idx].name
            symbol_list.remove(symbol_list[idx])      
    
    is_case_end = True
    for i in range(idx, len(symbol_list)):
        if (symbol_list[i].isTerminator == False):
            is_case_end = False
            break
    if(is_case_end == True):
        i = 0
        while(i < len(symbol_list)):
            res += " " + symbol_list[i].name
            symbol_list.remove(symbol_list[i])
 
    return res.strip()

def findOperand(symbol_list):
    res = ""
    idx = 0
    if(idx < len(symbol_list)):
        if(symbol_list[idx].isTerminator == False):
            res = symbol_list[idx].name 
            symbol_list.remove(symbol_list[idx])
        else:
            print("[*]error occur in findOperand")
            exit(0)
        

    return res.strip()
    

def strip_quote(s):
    if(s[0] == '"' and s[-1] == '"'):
        return s[1:-1]

def collectOpFromCase(symbol_list):
    """
        Input:
            case: list
            member_list: dict

        Output:
            (operands, operators): tuple(list, list)
    """
    #tmp_symbol_list = [i for i in current_case.symbolList]
    #each time call this function need a deep copy case
    
    operands = list()
    operators = list()
    #print("SYMBOLS:")
    #for i in symbol_list:
    #    print(i.name + "###")
    #print("END")
    operators.append(findOperator(symbol_list))
    operands.append(findOperand(symbol_list))
    operators.append(findOperator(symbol_list))
    operands.append(findOperand(symbol_list))
    operators.append(findLastOperator(symbol_list))
    
    #print("OPERATORS:")
    #print(operators)#WHAT It SHOULD BE

    for i in range(len(operators)):
        if tokenDict.has_key(operators[i]) == False:
            continue
        if tokenDict[operators[i]].is_keyword == False:
            #print("here " + operators[i])
            #print(tokenDict[operators[i]].match_string)
        #if operators[i] in notKeywordSym:
            operators[i] = strip_quote(tokenDict[operators[i]].match_string)
            #operators[i] = notKeywordSym[operators[i]]
            
    res = ([i for i in operands if i != ""], [i for i in operators])

    
    return res
    

def translateOneIR(ir_argument, classname, irname):
    """
    Input:
        0-2 operands, 0-3 operators, classname

    Output:
        (irname, irstring): tuple(string, string)
    """
    operands = ir_argument[0]
    operators = ir_argument[1]
    
    for i in range(3):
        operators[i] = '"' + operators[i] + '"'

    res_operand = ""
    for operand in operands:
        res_operand += ", " + operand

    res_operator = "OP3(" + operators[0] +"," + operators[1] + "," + operators[2] + ")"
    #operand_num = len(operands)
    
    if irname != "res":
        irname  = "auto " + irname
    
    res =  irname + " = new IR(" + "k" + underline_to_hump(classname) + ", " + res_operator + res_operand +");\n"
    return res


def gen_tmp():
    count = [0]
    def get_tmp():
        count[0] += 1
        return "tmp" + str(count[0])
    return get_tmp


def transalteOneCase(current_class, case_idx):
    current_case = current_class.caseList[case_idx]
    member_list = current_class.memberList
    symbols = [i for i in current_case.symbolList]
    process_queue = list()
    name_idx_dict = dict()
    res = ""

    """
    Handle Empty Case Here
    """
    if current_case.isEmpty == True:
        return "\t\tres = new IR(k" + underline_to_hump(current_class.name) +", string(\"\"));\n"

    for name, count in member_list.items():
        if(count > 1):
            name_idx_dict[name] = 1

    get_tmp = gen_tmp()
    for symbol in symbols:
        if(symbol.isTerminator == False):
            tmp_name = get_tmp()
            new_symbol = Symbol(tmp_name, False, symbol.isId)
            process_queue.append(new_symbol)
            cur_symbol_real_name = ""
            if(symbol.name in name_idx_dict.keys()):
                cur_symbol_real_name = symbol.name + "_" + str(name_idx_dict[symbol.name]) + "_"
                name_idx_dict[symbol.name] += 1
            else:
                cur_symbol_real_name = symbol.name + "_"
            res += "\t\t" + translateOneMember(cur_symbol_real_name, tmp_name)
        else:
            process_queue.append(symbol)

    while(len(process_queue) != 0):
        ir_info = collectOpFromCase(process_queue)
        if(len(process_queue) == 0):
            res += "\t\t" + translateOneIR(ir_info, current_class.name, "res")
        else:
            tmp_name = get_tmp()
            res += "\t\t" + translateOneIR(ir_info, "Unknown", tmp_name)
            res += "\t\tPUSH(" + tmp_name + ");\n"
            new_symbol = Symbol(tmp_name, False, False)
            process_queue = [new_symbol] + process_queue
        
    
    return res

def genGenerateOneCase(current_class, case_idx):

    res = ""
    case_list = current_class.caseList[case_idx]

    if case_list.isEmpty == True:
        return "\n"

    counter = dict()

    for key in current_class.memberList.keys():
        counter[key] = 1

    for sym in case_list.symbolList:
        if sym.isTerminator:
            continue
        membername = sym.name+"_"
        if(current_class.memberList[sym.name] > 1):
            membername = "%s_%d_" % (sym.name, counter[sym.name])
            counter[sym.name] += 1
        
        res += "\t\t%s = new %s();\n" %(membername, underline_to_hump(sym.name))
        res += "\t\t%s->generate();\n" % membername   

    return res

def genGenerate(current_class):

    has_switch = len(current_class.caseList) != 1
    class_name = underline_to_hump(current_class.name)

    res =  "void " + class_name + "::generate(){\n"
    res += "\tGENERATESTART(%d)\n\n" %(len(current_class.caseList))
    
    #Handling class need specific variable like identifier
    specific = is_specific(current_class.name)
    if(specific[0]):
        res += "\t\t%s_val_ = gen_%s();\n" % (specific[1], specific[1])
        res += "\n\tGENERATEEND\n}\n\n"
        return res

    if(has_switch):
        res += "\tSWITCHSTART\n"

    case_id = 0
    #for each_case in current_class.caseList:
    for i in range(len(current_class.caseList)):
        if(has_switch):
            res += "\t\tCASESTART(" + str(case_id) + ")\n"
            case_id += 1
        
        res += genGenerateOneCase(current_class, i)
        if(has_switch):
            res += "\t\tCASEEND\n"

    if(has_switch):
        res += "\tSWITCHEND\n"
    res += "\n\tGENERATEEND\n}\n\n"
    return res

def genTranslate(current_class):
    """
        input:
            s
        output:
            translate def : stirng
    """
    has_switch = len(current_class.caseList) != 1
    class_name = underline_to_hump(current_class.name)

    res = "IR*  " + class_name + "::translate(vector<IR *> &v_ir_collector){\n"
    res += "\tTRANSLATESTART\n\n"
    
    #Handling class need specific variable like identifier
    specific = is_specific(current_class.name)
    if(specific[0]):
        res += "\t\tres = new IR(k" + current_class.name + ", " + specific[1] + "_val_);\n"
        res += "\n\tTRANSLATEEND\n}\n\n"
        return res

    if(has_switch):
        res += "\tSWITCHSTART\n"

    case_id = 0
    #for each_case in current_class.caseList:
    for i in range(len(current_class.caseList)):
        #each_case = current_class.caseList[i]
        if(has_switch):
            res += "\t\tCASESTART(" + str(case_id) + ")\n"
            case_id += 1
        
        res += transalteOneCase(current_class, i)
        if(has_switch):
            res += "\t\tCASEEND\n"

    if(has_switch):
        res += "\tSWITCHEND\n"
    res += "\n\tTRANSLATEEND\n}\n\n"
    return res


def genClassTypeEnum():
    res = "enum NODETYPE{"

    res += """
#define DECLARE_TYPE(v)  \\
    v,
ALLTYPE(DECLARE_TYPE)
#undef DECLARE_TYPE
"""
    res += "};\n"

    res += "typedef NODETYPE IRTYPE;\n"
    return res

def genClassDeclaration(class_list):
    res = ""

    res += """
#define DECLARE_CLASS(v) \\
    class v ; \

ALLCLASS(DECLARE_CLASS);
#undef DECLARE_CLASS
"""
    return res

def genTokenForOneKeyword(keyword, token):
    return "%s\tTOKEN(%s)\n" % (keyword, token)

def genFlex(token_dict): 
    res = ""

    res += configuration.gen_flex_definition()
    res += "\n"
    res += configuration.gen_flex_options()
    res += "\n"

    res += "%%\n"
    for token in token_dict.values():
        res += genTokenForOneKeyword(token.match_string, token.token_name)

    extra_rules_path = "./data/extra_flex_rule"
    contents = ""
    with open(extra_rules_path, 'rb') as f:
        contents = f.read()
        if(contents[-1] != '\n'):
            contents += '\n'
        
        contents = contents.split("+++++\n")
        contents = [i.split("-----\n") for i in contents]
        print(contents)
    
    test = ""
    for i in contents:
        test += "%s {\n\t%s}\n" % (i[0].strip(), "\n\t".join(i[1].replace("PREFIX_", configuration.token_prefix).split("\n")))
        test += "\n"
    print(test)
    res += test
    
    res += "%%\n"
    return res

def genBisonType(class_set):
    """
    input:
        set of GenClass : set
    
    Output:
        "%type <import_statement_t>	import_statement\nxxxx": string
    """
    res = ""
    for c in class_set:
        cname = c.name
        underline_name = hump_to_underline(cname)
        res += "%%type <%s_t>\t%s\n" % (underline_name, underline_name)
    
    return res
    
def genBisonPrec(token_dict):
    """
    input:
        token_dict: dict
    
    output:
        "%right xxx yyy": string
    """
    precdict = dict()
    for token_name, token in token_dict.items():
        if token.prec != 0:
            if(precdict.has_key(token.prec) == False):    
                precdict[token.prec] = []
            precdict[token.prec].append(token_name)
    
    res = ""

    for (key, value) in precdict.items():
        for token_name in value:
            res += "%%%s %s\n" % (token_dict[token_name].assoc, token_name)

    return res
        
def genBisonToken(token_dict):
    """
    input:
        token_dict: dict
    
    output:
        "%token xxx yyy": string
    """
    counter = 0
    token_res = ""

    type_token = ""
    for token_name in token_dict.keys():
        if(token_dict[token_name].ttype != "0"):
            type_token += "%%token <%s> %s" % (token_dict[token_name].ttype, token_name)
            continue
        if counter % 8 == 0:
            token_res += "\n%token"
        token_res += " " + token_name
        counter += 1

    token_res += type_token
    #token_res += "\n%token <sval> IDENTIFIER\n"
    token_res += "\n%token <ival> INTLITERAL\n"
    token_res += "\n%token <fval> FLOATLITERAL\n"
    token_res += "\n%token <sval> STRINGLITERAL\n"
    token_res += "\n"

    return token_res
    

def genBisonDataType(extra_data_type, allClass):

    res = ""
    for k, v in extra_data_type.items():
        res += "\t%s\t%s;\n" % (v, k)
    
    
    for c in allClass:
        underline_name = hump_to_underline(c.name)
        res += "\t%s\t%s;\n" % (c.name+" *", underline_name+"_t")
    
    return res


def genBisonTypeDefOneCase(gen_class, caseidx):


    case = gen_class.caseList[caseidx]
    symbol_name_list = []
    counter = dict()
    res = []
    if(gen_class.name == configuration.bison_top_input_type):
        res.append("$$ = result;\n")
        res.append("$$->case_idx_ = CASE%d;\n" % caseidx)
    else:
        res.append("$$ = new %s();\n" % (gen_class.name))
        res.append("$$->case_idx_ = CASE%d;\n" % caseidx)
    
    if(case.isEmpty == False):
        #tmp = "\t/* empty */ {\n \t\t%s \t}\n"
        for idx in range(len(case.symbolList)):
            sym = case.symbolList[idx]
            symbol_name_list.append(sym.name)
            if sym.isTerminator == True:
                continue
            tmp = "$$->%s_ = $%d;\n"
            if(counter.has_key(sym.name) == False):
                counter[sym.name] = 0
            counter[sym.name] += 1
            if(gen_class.memberList[sym.name] == 1):
                res.append(tmp % (sym.name, idx+1))
            else:
                res.append(tmp % (sym.name + "_%d" % counter[sym.name], idx+1))


        #Handling class which need specific variable
        specific = is_specific(gen_class.name)
        if(specific[0]):
            res = []
            res.append("$$ = new %s();\n" % (gen_class.name)) 
            res.append("$$->%s_val_ = $%d;\n" % (specific[1], 1))
            if specific[1] == 'string':
                res.append("free($%d);\n" % 1)

    if(gen_class.name == configuration.bison_top_input_type):
        res.append("$$ = NULL;\n")

    return "\t%s {\n\t\t%s\t}\n" % (" ".join(symbol_name_list), "\t\t".join(res))  

def genBisonTypeDef(gen_class):
    res = hump_to_underline(gen_class.name) + ":\n"

    for i in range(len(gen_class.caseList)):
        res += genBisonTypeDefOneCase(gen_class, i)
        res += "   |"
    
    #res[-2] = ";"

    return res[0:-2] + ";\n"


def genBisonDestructor(destructorDict, extra_data_type):
    
    res = ""
    for dest_define, name in destructorDict.items():
        typename = ""
        for i in name:
            if(i in extra_data_type.keys()):
                typename += " <%s>" % (i)
            else:
                typename += " <%s_t>" % (i)
        if(dest_define == "EMPTY"):
            dest_define = " "
        res += "%destructor{\n\t" + dest_define + "\n} " + typename + "\n\n"

    res += "%destructor { if($$!=NULL)$$->deep_delete(); } <*>\n\n"
    return res

def genBison(allClass):
    global tokenDict
    global destructorDict
    
    configuration.gen_parser_typedef()
    
    res = ""
    res += configuration.gen_bison_definition()
    res += configuration.gen_bison_code_require()
    res += configuration.gen_bison_params()

    extra = {"fval":"double", "sval":"char*", "ival":"long"}
    res += "%%union %s_STYPE{\n%s}\n" % (configuration.bison_data_type_prefix, genBisonDataType(extra, allClass))

    res += genBisonToken(tokenDict)
    res += "\n"
    res += genBisonType(allClass)
    res += "\n"
    res += genBisonPrec(tokenDict)
    res += "\n"
    res += genBisonDestructor(destructorDict, extra)

    res += "%%\n"
    for i in allClass:
        res += genBisonTypeDef(i)
        res += "\n"
    res += "%%"
    return res

def genCaseEnum(casenum):
    res = "enum CASEIDX{\n\t"

    for i in range(casenum):
        res += "CASE%d, " % i
    res += "\n};\n"

    return res

def genAstHeader(allClass):

    include_list = [standard_header("vector"), standard_header("string"), normal_header("define.h")]
    res = """#ifndef __AST_H__\n#define __AST_H__\n"""

    for i in include_list:
        res += "#include %s\n" % i
    res += "using namespace std;\n"
    res +="\n"

    res += genClassTypeEnum()
    res += "\n"
    res += genCaseEnum(configuration.case_num)
    res += "\n"

    with open(configuration.ast_header_template_path, 'r') as f:
        content = f.read()
        res = content.replace("HEADER_BEGIN", res)
    
    res += genClassDeclaration(allClass)
    

    res += "\n"
    for each_class in allClass:
        res += genClassDef(each_class, each_class)
    
    res += "#endif\n"
    return res

def genAstSrc(allClass):
    
    include_list = [normal_header("../include/ast.h"), normal_header("../include/define.h"), normal_header("../include/utils.h"), standard_header("cassert")]
    res = ""

    res += include_all(include_list)
    with open(configuration.ast_src_template_path, 'r') as f:
        content = f.read()
        res = content.replace("SRC_BEGIN", res)

    for each_class in allClass:
        res += genTranslate(each_class)
        res += genDeepDelete(each_class)
        res += genGenerate(each_class)
        res += "\n\n"
    
    return res

def genDefineHeader(all_class):
    
    content = ""
    with open(configuration.define_header_template_path, 'r') as f:
        content = f.read()
    
    all_type = "#define ALLTYPE(V) \\\n"
    all_classes = "#define ALLCLASS(V) \\\n"

    for c in all_class:
        cname = c.name
        all_type += "\tV(k%s) \\\n" % cname
        all_classes += "\tV(%s) \\\n" % cname
    
    all_type += "\tV(kUnknown) \\\n"
    all_type += "\n"
    all_classes += "\n"

    content = content.replace("DEFINE_ALL_TYPE", all_type)
    content = content.replace("DEFINE_ALL_CLASS", all_classes)
    
    return content

def genOthers():
    os.system("cp template/utils_header_template.h include/utils.h")
    os.system("cp template/utils_src_template.cpp src/utils.cpp")

if __name__ == "__main__":

    parse = argparse.ArgumentParser()
    parse.add_argument("-i", "--input", help = "Grammar description")
    parse.add_argument("-f", "--flex", help = "path of flex.l file")
    parse.add_argument("-b", "--bison", help = "path of bison.y file")
    parse.add_argument("-a", "--ast", help = "name of ast file(both .cpp and .h)")
    parse.add_argument("-t", "--token", help = "path of config file for token")
    parse.add_argument("-d", "--destructor", help = "path of destructor for bison")
    args = parse.parse_args()

    class_define = ""
    class_content = ""
    bison_type_define = ""

    ## Parse it from a file. To do
    #notKeywordSym["COMMA"] = ','
    #notKeywordSym["LD"] = '('
    #notKeywordSym["RD"] = ')'
    #notKeywordSym["EQUAL"] = '='

    literalValue = {"float":["float_literal", "fconst"], "int":["int_literal", "iconst"], "string":["identifier", "string_literal", "sconst"], "bool":["bool_literal"]}
    if(args.input != None):
        with open(args.input, "r") as input_file:
            content = input_file.read()
            if(content[-1] != '\n'):
                content += "\n"
            content = content.replace("\r\n", "\n")
            content = content.split("---\n")

            for i in content:
                if i == "":
                    continue
                genclass = parseGrammar(i[:-1])

                #print(genGenerate(genclass))    

    if(args.token != None):
        with open(args.token, "r") as token_file:
            token_info = token_file.read()
            token_info = token_info.split("\n")
            token_info = [i.split() for i in token_info]
            #print(token_info)
            for each_token in token_info:
                if(len(each_token) == 0):
                    continue
                tokenDict[each_token[0]] = Token(each_token[0], int(each_token[1]), each_token[2], each_token[3], each_token[4])
                
    if(args.destructor != None):
        with open(args.destructor, "r") as dest_file:
            dest_info = dest_file.read()
            dest_info = dest_info.split("---")
            for each_dest in dest_info:
                typename = each_dest.split(":\n")[0]
                dest_define = each_dest.split(":\n")[1].strip()
                destructorDict[dest_define] = [i.strip() for i in typename.split(",")]

    
    with open(configuration.flex_output_path, "w") as flex_file:
        flex_file.write(genFlex(tokenDict))
        flex_file.close()
    
    with open(configuration.bison_output_path, "w") as bison_file:
        bison_file.write(genBison(allClass))
        bison_file.close()

    with open(configuration.ast_header_output_path, "w") as ast_header_file:
        ast_header_file.write(genAstHeader(allClass))
        ast_header_file.close()

    with open(configuration.ast_src_output_path, "w") as ast_content_file:
        ast_content_file.write(genAstSrc(allClass))
        ast_content_file.close()

    def_h = genDefineHeader(allClass)
    with open(configuration.define_header_output_path, 'w') as f:
        f.write(def_h)
    
    genOthers()
