# FuzzerFactory
import re
import argparse
import os
import json
import copy

# from Config import *

# from InputGeneration import *


def hump_to_underline(input_str):
    """
    input: a str represents classname in hump style
    output: underline style of that classname
    e.g. SelectStatement -> select_statement
    """
    return re.sub(r"([A-Z])", lambda x: f"_{x.group(1).lower()}", input_str).lstrip("_")


def underline_to_hump(input_str):
    """
    input: a str represents classname in underline style
    output: hump style of that classname
    e.g. select_statement -> SelectStatement
    """
    # print(input_str)
    output = re.sub(r"(_\w)", lambda x: x.group(1)[1].upper(), input_str)
    # print("Out put:" + output)
    return output[0].upper() + output[1:]


allClass = []

tokenDict = {}
# notKeywordSym = dict()
literalValue = {}
destructorDict = {}
gDataFlagMap = {
    "Define": 1,
    "Undefine": 2,
    "Global": 4,
    "Use": 8,
    "MapToClosestOne": 16,
    "MapToAll": 32,
    "Replace": 64,
    "Alias": 128,
    "NoSplit": 256,
    "ClassDefine": 512,
    "FunctionDefine": 1024,
    "Insertable": 2048,
}

semanticRule = None


def is_specific(classname):
    """
    test if this class need specific handling
    return [bool, type]
    e.g. [Flase, ""] or [True, "string"]
    """
    classname = hump_to_underline(classname)
    global literalValue
    flag = False
    for k, v in literalValue.items():
        for cname in v:
            if cname == classname:
                return [True, k]

    return [False, ""]


def expect():
    id = [0]

    def func():
        id[0] += 1
        return f"v{str(id[0])}"

    return func


"""
DataTypeRule:
    path: list[] of string
    datatype: string
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
"""


class DataTypeRule:
    def __init__(self, path, datatype, scope, dataflag):
        self.path = path
        self.datatype = datatype
        self.scope = int(scope)
        flag = 0
        for i in dataflag:
            flag |= gDataFlagMap[i]
        self.dataflag = flag


class Token:
    def __init__(self, token_name, prec, assoc, match_string, ttype):
        self.token_name = token_name
        self.prec = prec
        self.assoc = assoc
        self.ttype = ttype
        self.match_string = match_string
        self.is_keyword = token_name == match_string


class Symbol:
    def __init__(self, name, isTerminator=False, isId=False):
        self.name = name
        self.isTerminator = isTerminator
        self.isId = isId
        self.analyze()

    def analyze(self):
        token = self.analyze_item(self.name)
        self.name = self.name.replace("'", "")
        if self.name.isupper():
            self.isTerminator = True
        if token == "_IDENTIFIER_":
            # self.isTerminator = False
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
        return f"name:{self.name}, isTerminator:{self.isTerminator}, isId:{self.isId}"


class Case:
    def __init__(
        self,
        caseidx,
        isEmpty,
        prec,
        data_type_to_replace,
        expected_value_generator=expect(),
    ):
        self.caseidx = caseidx
        self.symbolList = []
        self.idTypeList = []
        self.isEmpty = isEmpty
        self.prec = prec
        self.datatype_rules = self.parse_datatype_rules(data_type_to_replace)

    def parse_datatype_rules(self, s):
        res = []
        if s is None:
            return res

        s = s.split(";")
        for i in s:
            # print(i)
            if i.strip() == "":
                continue
            i = i.split("=")
            path = i[0].strip().split("->")
            prop = i[1].strip().split(":")
            res.append(DataTypeRule(path, prop[0], prop[1], prop[2:]))

        return res

    def gen_member_list(self):
        member_list = {}
        member_list.clear()

        # if empty, we won't add anything into memberlist
        if self.isEmpty == True:
            return member_list

        for s in self.symbolList:
            if s.isTerminator == True:
                continue
            if s.name in member_list:
                member_list[s.name] += 1
            else:
                member_list[s.name] = 1
        return member_list

    def __str__(self):
        symbol = "".join(f"({str(i)})," for i in self.symbolList)
        symbol = symbol[:-1]
        return "caseidx:%d, SymbolList:(%s), isEmpty:%s, prec: %s\n" % (
            self.caseidx,
            symbol,
            self.isEmpty,
            self.prec,
        )


class Genclass:
    def __init__(self, name, memberList=None, caseList=None):
        if memberList is None:
            memberList = {}
        if caseList is None:
            caseList = []

        self.name = underline_to_hump(name)
        self.memberList = memberList
        self.caseList = []
        self.isTerminatable = False

    def merge_member_list(self, current_member_list):
        for m in current_member_list:
            if m in self.memberList and current_member_list[m] > self.memberList[m]:
                self.memberList[m] = current_member_list[m]
            elif m not in self.memberList:
                self.memberList[m] = current_member_list[m]

    def __str__(self):
        name = self.name
        members = "("
        for k, v in self.memberList.items():
            members += f"{k}:{str(v)},"
        members = f"{members[:-1]})"
        case = "("
        for i in self.caseList:
            case += f"{str(i)},"
        case = f"{case[:-1]})"

        return "Genclass:[name:%s,\n memberList:%s,\n caseList:%s]" % (
            name,
            members,
            case,
        )


def handle_datatype(vvlist, data_type, scope, dataflag, gen_name, tnum=0):
    tab = "\t"
    vlist = [i[0] for i in vvlist]
    if len(vlist) == 1:
        if "fixme" in vlist[0]:
            vlist[0] = "$$"

        res = tab * tnum + "if(%s){\n" % vlist[0]
        res += tab * (tnum + 1) + "%s->data_type_ = %s; \n" % (vlist[0], data_type)
        res += tab * (tnum + 1) + "%s->scope_ = %d; \n" % (vlist[0], scope)
        res += tab * (tnum + 1) + "%s->data_flag_ =(DATAFLAG)%d; \n" % (
            vlist[0],
            dataflag,
        )
        res += tab * tnum + "}\n"
        return res
    if is_list(vvlist[0][1]) == False:
        res = ""
        if len(vlist) == 2 and vlist[1] == "fixme":
            res += handle_datatype(
                vvlist[1:], data_type, scope, dataflag, gen_name, tnum
            )
        else:
            tmp_name = gen_name()
            res = tab * tnum + "if(%s){\n" % vlist[0]
            res += tab * (tnum + 1) + "auto %s = %s->%s_; \n" % (
                tmp_name,
                vlist[0],
                vlist[1],
            )
            tmp_list = vvlist[1:]
            tmp_list[0][0] = tmp_name
            res += handle_datatype(
                tmp_list, data_type, scope, dataflag, gen_name, tnum + 1
            )
            res += tab * tnum + "}\n"
        return res
    else:
        tmp_name = gen_name()
        res = tab * (tnum + 1) + "auto %s = %s->%s_; \n" % (
            tmp_name,
            vlist[0],
            vlist[1],
        )
        tmp_list = vvlist[1:]
        tmp_list[0][0] = tmp_name
        res += handle_datatype(tmp_list, data_type, scope, dataflag, gen_name, tnum + 1)

        loop = tab * tnum + "while(%s){\n" % vlist[0]
        loop += res
        loop += tab * (tnum + 1) + "%s = %s->%s_;\n" % (
            vvlist[0][0],
            vvlist[0][0],
            vvlist[0][1],
        )
        loop += tab * tnum + "}\n"

        return loop
    return res


def genDataTypeOneRule(datatype_rule):
    vvlist = [[i, i] for i in datatype_rule.path]
    vvlist = [["$$", "$$"]] + vvlist
    datatype = datatype_rule.datatype
    scope = datatype_rule.scope
    dataflag = datatype_rule.dataflag
    return handle_datatype(vvlist, datatype, scope, dataflag, gen_tmp(), 2)


def parseGrammar(grammarDescription):
    content = grammarDescription.split("\n")
    res = Genclass(content[0].strip(":\n"))
    # res.memberList = dict()
    # print "*************"
    # print content[0].strip(":\n")
    # print res #this is wrong
    # print "*************"
    cases = content[1:]
    cases = [i.lstrip() for i in cases]
    for caseIndex, c in enumerate(cases):
        ptn = re.compile("\*\*.*\*\*")
        data_type_to_replace = re.search(ptn, c)  # ptn.findall(c)
        if data_type_to_replace != None:
            # print("here1")
            # print data_type_to_replace.group()
            data_type_to_replace = data_type_to_replace.group()[2:-2]
            c = re.sub(ptn, "", c)

        # print c
        tmp_c = f"{c}%".split("%")
        c = tmp_c[0].strip()
        if tmp_c[1] != "":
            tmp_c[1] = f"%{tmp_c[1]}"
        case = Case(caseIndex, len(c) == 0, tmp_c[1], data_type_to_replace)
        symbols = c.split(" ")
        case.symbolList = [Symbol(s) for s in symbols]
        # print(symbols)
        current_member_list = case.gen_member_list()
        res.merge_member_list(current_member_list)
        res.caseList.append(case)

    global allClass
    allClass.append(res)

    return res


def is_list(class_name):
    global allClass
    # print class_name#list
    class_name = underline_to_hump(class_name)

    return next(
        (
            any(
                underline_to_hump(member) == class_name
                for member in i.memberList.keys()
            )
            for i in allClass
            if class_name == i.name
        ),
        False,
    )


def genClassDef(current_class, parent_class):
    """
    Input:
        s : class

    Output:
        definition of this class in cpp: string
    """
    res = "class "
    res += f"{current_class.name}:"
    res += "public " + "Node " + "{\n"
    res += "public:\n" + "\tvirtual void deep_delete();\n"
    res += "\tvirtual IRPtr translate(vector<IRPtr> &v_ir_collector);\n"
    res += "\tvirtual void generate();\n"
    # res += "\t" + current_class.name + "(){type_ = k%s; cout << \" Construct node: %s \\n\" ;}\n" % (current_class.name, current_class.name)
    # res += "\t~" + current_class.name + "(){cout << \" Destruct node: %s \\n\" ;}\n" % (current_class.name)

    # res += "\t" + current_class.name + "(){}\n"
    # res += "\t~" + current_class.name + "(){}\n"

    res += "\n"

    # Handle classes which need specific variable
    specific = is_specific(current_class.name)
    if specific[0]:
        res += "\t" + specific[1] + " " + specific[1] + "_val_;\n"
        res += "};\n\n"
        return res

    for member_name, count in current_class.memberList.items():
        if member_name == "":
            continue
        if count == 1:
            res += (
                "\t"
                + "std::shared_ptr<"
                + underline_to_hump(member_name)
                + "> "
                + member_name
                + "_;\n"
            )
        else:
            for idx in range(count):
                res += (
                    "\t std::shared_ptr<"
                    + underline_to_hump(member_name)
                    + "> "
                    + member_name
                    + "_"
                    + str(idx + 1)
                    + "_;\n"
                )
    res += "};\n\n"

    return res


def genDeepDelete(current_class):
    res = f"void {current_class.name}" + "::deep_delete(){\n"
    for member_name, count in current_class.memberList.items():
        if count == 1:
            res += "\t" + "SAFEDELETE(" + member_name + "_);\n"
        else:
            for idx in range(count):
                res += "\t" + "SAFEDELETE(" + member_name + "_" + str(idx + 1) + "_);\n"

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
    return f"auto {variable_name}= SAFETRANSLATE({member_name}" + ");\n"


def findOperator(symbol_list):
    res = ""
    idx = 0
    while idx < len(symbol_list):
        if symbol_list[idx].isTerminator == True:
            res += f"{get_match_string(symbol_list[idx].name)} "
            symbol_list.remove(symbol_list[idx])
            idx -= 1
        else:
            res = res[:-1]
            break

        idx += 1

    return res.strip()


def get_match_string(token):
    # print(token)
    if token in tokenDict and tokenDict[token].is_keyword == False:
        return strip_quote(tokenDict[token].match_string)
    return token


def findLastOperator(symbol_list):
    res = ""
    idx = 0
    if idx < len(symbol_list) and symbol_list[idx].isTerminator == True:
        res += get_match_string(symbol_list[idx].name)
        symbol_list.remove(symbol_list[idx])

    is_case_end = all(
        symbol_list[i].isTerminator != False for i in range(idx, len(symbol_list))
    )
    if is_case_end:
        i = 0
        while i < len(symbol_list):
            res += f" {get_match_string(symbol_list[i].name)}"
            symbol_list.remove(symbol_list[i])

    res = res.strip()

    return res


def findOperand(symbol_list):
    res = ""
    idx = 0
    if idx < len(symbol_list):
        if symbol_list[idx].isTerminator == False:
            res = symbol_list[idx].name
            symbol_list.remove(symbol_list[idx])
        else:
            print("[*]error occur in findOperand")
            exit(0)

    return res.strip()


def strip_quote(s):
    return s[1:-1] if s[0] == '"' and s[-1] == '"' else s


def collectOpFromCase(symbol_list):
    """
    Input:
        case: list
        member_list: dict

    Output:
        (operands, operators): tuple(list, list)
    """

    operators = [findOperator(symbol_list)]

    operands = [findOperand(symbol_list)]
    operators.append(findOperator(symbol_list))
    operands.append(findOperand(symbol_list))
    operators.append(findLastOperator(symbol_list))

    return [i for i in operands if i != ""], list(operators)


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
        operators[i] = f'"{operators[i]}"'

    res_operand = "".join(f", {operand}" for operand in operands)
    res_operator = f"OP3({operators[0]},{operators[1]},{operators[2]})"
    # operand_num = len(operands)

    if irname != "res":
        irname = f"auto {irname}"

    return (
        f"{irname} = std::make_shared<IR>(k{underline_to_hump(classname)}, {res_operator}{res_operand}"
        + ");\n"
    )


def gen_tmp():
    count = [0]

    def get_tmp():
        count[0] += 1
        return f"tmp{str(count[0])}"

    return get_tmp


def transalteOneCase(current_class, case_idx):
    current_case = current_class.caseList[case_idx]
    member_list = current_class.memberList
    symbols = list(current_case.symbolList)
    process_queue = []
    res = ""
    """
    Handle Empty Case Here
    """
    if current_case.isEmpty == True:
        return (
            "\t\tres = std::make_shared<IR>(k"
            + underline_to_hump(current_class.name)
            + ', string(""));\n'
        )

    name_idx_dict = {name: 1 for name, count in member_list.items() if count > 1}
    get_tmp = gen_tmp()
    for symbol in symbols:
        if symbol.isTerminator == False:
            tmp_name = get_tmp()
            new_symbol = Symbol(tmp_name, False, symbol.isId)
            process_queue.append(new_symbol)
            cur_symbol_real_name = ""
            if symbol.name in name_idx_dict:
                cur_symbol_real_name = (
                    f"{symbol.name}_{str(name_idx_dict[symbol.name])}_"
                )
                name_idx_dict[symbol.name] += 1
            else:
                cur_symbol_real_name = f"{symbol.name}_"
            res += "\t\t" + translateOneMember(cur_symbol_real_name, tmp_name)
        else:
            process_queue.append(symbol)

    while process_queue:
        ir_info = collectOpFromCase(process_queue)
        if not process_queue:
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

    counter = {key: 1 for key in current_class.memberList.keys()}
    for sym in case_list.symbolList:
        if sym.isTerminator:
            continue
        membername = f"{sym.name}_"
        if current_class.memberList[sym.name] > 1:
            membername = "%s_%d_" % (sym.name, counter[sym.name])
            counter[sym.name] += 1

        # ddprint(sym.name)
        res += "\t\t%s = std::make_shared<%s>();\n" % (
            membername,
            underline_to_hump(sym.name),
        )
        res += "\t\t%s->generate();\n" % membername

    return res


def getNotSelfContainCases(current_class):
    # print(current_class.name)
    duck_list = {"SimpleSelect": [0, 1, 2, 3], "CExpr": [0], "AExpr": [0]}
    if current_class.name in duck_list:
        # print("YES:", duck_list[current_class.name])
        return duck_list[current_class.name]
    case_idx_list = []
    class_name = hump_to_underline(current_class.name)
    for case in current_class.caseList:
        flag = any(i.name == class_name for i in case.symbolList)
        if not flag:
            case_idx_list.append(case.caseidx)

    return case_idx_list


def genGenerate(current_class):
    case_nums = len(current_class.caseList)
    has_switch = case_nums != 1
    class_name = underline_to_hump(current_class.name)

    res = f"void {class_name}" + "::generate(){\n"
    not_self_contained_list = getNotSelfContainCases(current_class)
    not_len = len(not_self_contained_list)
    if case_nums == 0:
        print(class_name)
    has_default = not_len / case_nums <= 0.8
    res += (
        "\tGENERATESTART(%d)\n\n" % (case_nums * 100)
        if has_default
        else "\tGENERATESTART(%d)\n\n" % (case_nums)
    )
    # Handling class need specific variable like identifier
    specific = is_specific(current_class.name)
    if specific[0]:
        res += "\t\t%s_val_ = gen_%s();\n" % (specific[1], specific[1])
        res += "\n\tGENERATEEND\n}\n\n"
        return res

    if has_switch:
        res += "\tSWITCHSTART\n"

    case_id = 0
    # for each_case in current_class.caseList:
    for i in range(len(current_class.caseList)):
        if has_switch:
            res += "\t\tCASESTART(" + str(case_id) + ")\n"
            case_id += 1

        res += genGenerateOneCase(current_class, i)
        if has_switch:
            res += "\t\tCASEEND\n"

    # if(has_switch):
    #    res += "\tSWITCHEND\n"

    tmplate_str = """
    default:{
        int tmp_case_idx = rand() %% %d;
        switch(tmp_case_idx){
            %s
        }
    }
}
"""

    if has_switch and not has_default:
        res += "\tSWITCHEND\n"
    elif has_default:
        tmp_str = ""
        for i in range(not_len):
            tmp_str += f"CASESTART({str(i)}" + ")\n"

            tmp_str += genGenerateOneCase(current_class, not_self_contained_list[i])

            tmp_str += "case_idx_ = %d;\n" % (not_self_contained_list[i])

            tmp_str += "CASEEND\n"

        res += tmplate_str % (not_len, tmp_str)

    res += "\n\tGENERATEEND\n}\n\n"
    return res


def genTranslateBegin(class_name):
    """
    dict(): class_name --> api_dict
    """
    global semanticRule

    ir_handlers = semanticRule["IRHandlers"]

    res = []
    for item in ir_handlers:
        if item["IRType"] == class_name:
            res.extend(
                handler["Function"] + "(" + ", ".join(handler["Args"]) + ");"
                for handler in item["PreHandler"]
            )
    return "\t" + "\n\t".join(res) + "\n"


def genTranslateEnd(class_name):
    """
    dict(): class_name --> api_dict
    """

    res = []
    ir_handlers = semanticRule["IRHandlers"]
    for item in ir_handlers:
        if item["IRType"] == class_name:
            res.extend(
                handler["Function"] + "(" + ", ".join(handler["Args"]) + ");"
                for handler in item["PostHandler"]
            )
    return "\t" + "\n\t".join(res) + "\n"


def genTranslate(current_class):
    """
    input:
        s
    output:
        translate def : stirng
    """
    has_switch = len(current_class.caseList) != 1
    class_name = underline_to_hump(current_class.name)

    res = f"IRPtr  {class_name}" + "::translate(vector<IRPtr> &v_ir_collector){\n"
    res += "\tTRANSLATESTART\n\n"

    res += genTranslateBegin(current_class.name)
    # Handling class need specific variable like identifier
    specific = is_specific(current_class.name)
    if specific[0]:
        res += (
            "\t\tres = std::make_shared<IR>(k"
            + current_class.name
            + ", "
            + specific[1]
            + "_val_, data_type_, scope_, data_flag_);\n"
        )
        res += genTranslateEnd(current_class.name)
        res += "\n\tTRANSLATEEND\n}\n\n"
        return res

    if has_switch:
        res += "\tSWITCHSTART\n"

    case_id = 0
    # for each_case in current_class.caseList:
    for i in range(len(current_class.caseList)):
        # each_case = current_class.caseList[i]
        if has_switch:
            res += "\t\tCASESTART(" + str(case_id) + ")\n"
            case_id += 1

        res += transalteOneCase(current_class, i)
        if has_switch:
            res += "\t\tCASEEND\n"

    if has_switch:
        res += "\tSWITCHEND\n"

    res += genTranslateEnd(current_class.name)
    res += "\n\tTRANSLATEEND\n}\n\n"
    return res


def genDataTypeEnum():
    res = (
        "enum DATATYPE{"
        + """
#define DECLARE_TYPE(v)  \\
    k##v,
ALLDATATYPE(DECLARE_TYPE)
#undef DECLARE_TYPE
"""
    )
    res += "};\n"
    return res


def genClassTypeEnum():
    res = (
        "enum NODETYPE{"
        + """
#define DECLARE_TYPE(v)  \\
    v,
ALLTYPE(DECLARE_TYPE)
#undef DECLARE_TYPE
"""
    )
    res += "};\n"

    res += "typedef NODETYPE IRTYPE;\n"
    return res


def genClassDeclaration(class_list):
    return (
        ""
        + """
#define DECLARE_CLASS(v) \\
    class v ; \

ALLCLASS(DECLARE_CLASS);
#undef DECLARE_CLASS
"""
    )


def genTokenForOneKeyword(keyword, token):
    return "%s\tTOKEN(%s)\n" % (keyword, token)


def genAllTokensHeader(token_dict):
    # with open(configuration.parser_utils_header_template_path, 'r') as f:
    #    content = f.read()

    content = """
#ifndef __PARSER_TOKEN_H__
#define __PARSER_TOKEN_H__
enum TOKENSTATE{
    TOKEN_NONE,
    __TOKEN_STATE__
};
#endif
"""
    replaced = "".join("TOKEN_%s, \n" % i.token_name for i in token_dict.values())
    return content.replace("__TOKEN_STATE__", replaced)


def genFlex(token_dict):
    res = r"""
%{
#include <stdio.h>
#include <sstream>
#include <string>
#include <cstring>
#include "bison_parser.h"
#include "parser_utils.h"
#define TOKEN(name) { return SQL_##name; }
static thread_local std::stringstream strbuf;
%}

%option reentrant
%option bison-bridge
%option never-interactive
%option batch
%option noyywrap
%option warn
%option bison-locations
%option header-file="flex_lexer.h"
%option outfile="flex_lexer.cpp"
%option prefix="ff_"
%s COMMENT
%x singlequotedstring

%%
"""
    extra_rules_path = args.extraflex or "./data/extra_flex_rule"
    contents = ""
    with open(extra_rules_path, "r") as f:
        contents = f.read()
        ban_ptn = re.compile(r"PREFIX_([A-Z_]*)")
        ban_res = ban_ptn.findall(contents)
        ban_list = set(ban_res)
        if len(contents) > 2 and contents[-1] != "\n":
            contents += "\n"

        contents = contents.split("+++++\n")
        contents = [i.split("-----\n") for i in contents]
        # print(contents)

    test = ""
    for i in contents:
        if len(i) < 2:
            continue
        if len(i[1]) > 0 and i[1][0] == "[":
            ## Update match string here
            tmpp = copy.deepcopy(i)
            token_list = tmpp[1].split("\n")[0]
            i[1] = "\n".join(tmpp[1].split("\n")[1:])
            token_list = token_list[1:-1].split(", ")
            for dd in token_list:
                for token in token_dict.values():
                    if dd == token.token_name:
                        if token.match_string != tmpp[0].strip():
                            token.match_string = tmpp[0].strip()
                            token.is_keyword = False
                        break
            # print(token_list)
        test += "%s {\n\t%s}\n" % (
            i[0].strip(),
            "\n\t".join(i[1].replace("PREFIX_", "SQL_").split("\n")),
        )
        # print(test)
        # raw_input()
        test += "\n"
    # print(test)
    # print(token_dict)
    for token in token_dict.values():
        # print(token.token_name)
        if token.token_name in ban_list:
            continue
        res += genTokenForOneKeyword(token.match_string, token.token_name)

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
    precdict = {}
    for token_name, token in token_dict.items():
        if token.prec != 0:
            if token.prec not in precdict:
                precdict[token.prec] = []
            precdict[token.prec].append(token_name)

    res = ""

    tmp_name = ""
    for value in precdict.values():
        tmp = "".join(f" {token_name}" for token_name in value)
        res += "%%%s %s\n" % (token_dict[value[0]].assoc, tmp)

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
        if token_dict[token_name].ttype != "0":
            type_token += "\n%%token <%s> %s\n" % (
                token_dict[token_name].ttype,
                token_name,
            )
            continue
        if counter % 8 == 0:
            token_res += "\n%token"
        token_res += f" {token_name}"
        counter += 1

    token_res += type_token
    token_res += "\n"

    if "php" in args.input:
        token_res += "%token OP_DOLLAR PREC_ARROW_FUNCTION\n"
        token_res += "%token <sval> T_VARIABLE T_STRING_VARNAME\n"

    return token_res


def genBisonDataType(extra_data_type, allClass):
    res = "".join("\t%s\t%s;\n" % (v, k) for k, v in extra_data_type.items())
    for c in allClass:
        underline_name = hump_to_underline(c.name)
        res += "\t%s\t%s;\n" % (f"{c.name} *", f"{underline_name}_t")

    return res


gTopInputType = "Program"


def genBisonTypeDefOneCase(gen_class, caseidx):
    case = gen_class.caseList[caseidx]
    symbol_name_list = []
    res = []

    # TODO: Fix hardcoded string.
    if gen_class.name == gTopInputType:
        res.append("$$ = result;\n")
    else:
        res.append("$$ = new %s();\n" % (gen_class.name))
    res.append("$$->case_idx_ = CASE%d;\n" % caseidx)
    if case.isEmpty == False:
        counter = {}
        # tmp = "\t/* empty */ {\n \t\t%s \t}\n"
        for idx in range(len(case.symbolList)):
            sym = case.symbolList[idx]
            symbol_name_list.append(sym.name)
            if sym.isTerminator == True:
                continue
            sym_class_name = underline_to_hump(sym.name)
            tmp = f"$$->%s_ = std::shared_ptr<{sym_class_name}>($%d);\n"
            if sym.name not in counter:
                counter[sym.name] = 0
            counter[sym.name] += 1
            if gen_class.memberList[sym.name] == 1:
                res.append(tmp % (sym.name, idx + 1))
            else:
                res.append(tmp % (sym.name + "_%d" % counter[sym.name], idx + 1))

        # Handling class which need specific variable
        specific = is_specific(gen_class.name)
        if specific[0]:
            res = [
                "$$ = new %s();\n" % gen_class.name,
                "$$->%s_val_ = $%d;\n" % (specific[1], 1),
            ]
            if specific[1] == "string":
                res.append("free($%d);\n" % 1)

    data_type_rule = "".join(
        genDataTypeOneRule(dtr) + "\n" for dtr in case.datatype_rules
    )
    res.append(data_type_rule[2:])
    if gen_class.name == gTopInputType:
        res.append("$$ = NULL;\n")

    return "\t%s %s {\n\t\t%s\n\t}\n" % (
        " ".join(symbol_name_list),
        case.prec,
        "\t\t".join(res),
    )


def genBisonTypeDef(gen_class):
    res = hump_to_underline(gen_class.name) + ":\n"

    for i in range(len(gen_class.caseList)):
        res += genBisonTypeDefOneCase(gen_class, i)
        res += "   |"

    # res[-2] = ";"

    return res[:-2] + ";\n"


def genBisonDestructor(destructorDict, extra_data_type):
    res = ""
    print(extra_data_type)
    for dest_define, name in destructorDict.items():
        typename = ""
        for i in name:
            if i in extra_data_type.keys():
                typename += f" <{i}>"
            else:
                typename += f" <{i}_t>"
                print(name)
                assert 0
        if dest_define == "EMPTY":
            dest_define = " "
        res += "%destructor{\n\t" + dest_define + "\n} " + typename + "\n\n"

    res += "%destructor { if($$!=NULL)$$->deep_delete(); } <*>\n\n"
    return res


def genBison(allClass):
    global tokenDict
    global destructorDict

    # configuration.gen_parser_typedef()

    res = r"""
%{
#include <stdio.h>
#include <string.h>
#include "bison_parser.h"
#include "flex_lexer.h"
int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) { return 0; }
%}
%code requires {
#include "../gen_ir.h"
#include "parser_typedef.h"
#define YYDEBUG 1}
%define api.pure	full
%define api.prefix	{ff_}
%define api.token.prefix	{SQL_}
%define parse.error	verbose
%locations

%initial-action {
    // Initialize
    @$.first_column = 0;
    @$.last_column = 0;
    @$.first_line = 0;
    @$.last_line = 0;
    @$.total_column = 0;
    @$.string_length = 0;
};
%lex-param { yyscan_t scanner }
%parse-param { Program* result }
%parse-param { yyscan_t scanner }

"""
    extra = {"fval": "double", "sval": "char*", "ival": "long"}
    res += "%%union FF_STYPE{\n%s}\n" % (genBisonDataType(extra, allClass),)

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


def genGenIRHeader(allClass, all_datatype):
    res = "#ifndef __GEN_IR_H__\n" + "#define __GEN_IR_H__\n"
    res += '#include "define.h"\n'
    res += '#include "ast.h"\n'
    res += '#include "ir.h"\n'

    all_type = "#define ALLTYPE(V) \\\n"
    all_classes = "#define ALLCLASS(V) \\\n"
    all_data_types = "#define ALLDATATYPE(V) \\\n"

    for c in allClass:
        cname = c.name
        all_type += "\tV(k%s) \\\n" % cname
        all_classes += "\tV(%s) \\\n" % cname

    all_type += "\tV(kUnknown) \\\n"
    all_type += "\n"
    all_classes += "\n"

    for c in all_datatype:
        all_data_types += "\tV(%s) \\\n" % c

    all_data_types += "\n"

    res += all_type + "\n"

    res += all_classes

    res += genClassDeclaration(allClass)
    res += "\n"

    res += """
enum NODETYPE  : unsigned int {
#define DECLARE_TYPE(v) v,
  ALLTYPE(DECLARE_TYPE)
#undef DECLARE_TYPE
};
    """

    res += "typedef %s TopASTNode;\n" % gTopInputType

    for each_class in allClass:
        res += genClassDef(each_class, each_class)

    res += "#endif\n"
    return res


def genGenIRSrc(allClass):
    res = '#include "gen_ir.h"\n'
    res += '#include "var_definition.h"\n'
    for each_class in allClass:
        res += genTranslate(each_class)
        res += genDeepDelete(each_class)
        res += genGenerate(each_class)
        res += "\n\n"

    return res


def genConvertIRTypeMap():
    global allClass

    res = ""
    convert_map = build_convert_ir_type_map(allClass)
    for class_a in allClass:
        for class_b in allClass:
            type_a = underline_to_hump(class_a.name)
            type_b = underline_to_hump(class_b.name)
            if can_be_converted(type_a, type_b, convert_map) != None:
                res += '{"%s", "%s"},' % (type_a, type_b)

    return res[:-1]


def genTestHeader():
    with open(configuration.test_header_template_path, "r") as f:
        content = f.read()

    return content


def genTestSrc():
    with open(configuration["config_src_template_path"], "r") as f:
        content = f.read()

    if semanticRule["IsWeakType"] == 1:
        content = content.replace("__IS_WEAK_TYPE__", "true")
    else:
        content = content.replace("__IS_WEAK_TYPE__", "false")

    if semanticRule["IsWeakType"] == 0:
        content = content.replace("__FIX_IR_TYPE__", semanticRule["FixIRType"])
        content = content.replace(
            "__FUNCTION_ARGUMENT_UNIT__", semanticRule["FunctionArgumentUnit"]
        )
    else:
        content = content.replace("__FIX_IR_TYPE__", "kUnknown")
        content = content.replace("__FUNCTION_ARGUMENT_UNIT__", "kUnknown")

    basic_unit = ",".join(semanticRule["BasicUnit"])
    content = content.replace("__SEMANTIC_BASIC_UNIT__", basic_unit)
    content = content.replace(
        "__SEMANTIC_BUILTIN_OBJ__", f'"{semanticRule["BuiltinObjFile"]}"'
    )
    op_rules = []
    for oprule in semanticRule["OPRule"]:
        tmp = [str(oprule["OperandNum"])]
        tmp += oprule["Operator"]
        tmp.append(oprule["OperandLeftType"])
        if oprule["OperandNum"] == 2:
            tmp.append(oprule["OperandRightType"])
        tmp.append(oprule["ResultType"])
        tmp.append(oprule["InferDirection"])
        tmp += oprule["Property"]
        op_rules.append(f'"{" # ".join(tmp)}"')

    op_rules = ", ".join(op_rules)
    content = content.replace("__SEMANTIC_OP_RULE__", op_rules)

    convert_map = genConvertIRTypeMap()
    content = content.replace("__INIT_CONVERTABLE_TYPE_MAP__", convert_map)

    convert_chain = ""
    for i in semanticRule["ConvertChain"]:
        for kk in range(len(i) - 1):
            convert_chain += '{"%s", "%s"},' % (i[kk], i[kk + 1])

    content = content.replace("__SEMANTIC_CONVERT_CHAIN__", convert_chain[:-1])
    basic_types = [f'"{i}"' for i in semanticRule["BasicTypes"]]
    basic_types = ", ".join(basic_types)
    content = content.replace("__SEMANTIC_BASIC_TYPES__", basic_types)
    content = genToStringCase(content)

    init_path = semanticRule["InitFileDir"]
    if not init_path.startswith("/"):
        # we require the path to be relative to the Project root dir
        # Get the script path
        script_path = os.path.dirname(os.path.realpath(__file__))
        init_path = os.path.join(script_path, init_path)

    content = content.replace("__INIT_FILE_DIR__", init_path)
    return content


def genToStringCase(content):
    global literalValue
    global allClass
    tmp_set = {underline_to_hump(c.name) for c in allClass}
    # res = ""
    basic_type_map = {}
    for key, value in literalValue.items():
        for kk in value:
            kk = underline_to_hump(kk)
            if kk in tmp_set:
                if key not in basic_type_map:
                    basic_type_map[key] = []
                basic_type_map[key].append(kk)
                # cmd = "\tcase k%s: return " % kk
                # if (key == "string"):
                #    cmd += "str_val_;"
                # else:
                #    cmd += "std::to_string(%s_val_);" % key
                # cmd += "\n"
                # res += cmd

    string_literal_cmp = ""
    float_literal_cmp = ""
    int_literal_cmp = ""
    for key, value in basic_type_map.items():
        for kk in value:
            if key == "float":
                float_literal_cmp += "\tif (type == k%s) return true;\n" % kk
            elif key == "int":
                int_literal_cmp += "\tif (type == k%s) return true;\n" % kk
            elif key == "string":
                string_literal_cmp += "\tif (type == k%s) return true;\n" % kk
    # res = "switch(type){\n%s\n}" % res
    content = content.replace("__STRINGLITERALCASE__", string_literal_cmp)
    content = content.replace("__INTLITERALCASE__", int_literal_cmp)
    content = content.replace("__FLOATLITERALCASE__", float_literal_cmp)
    return content


def format_output_files():
    def format_file(filename):
        formatter = 'clang-format -style="{BasedOnStyle: LLVM, IndentWidth: 4, ColumnLimit: 1000}" -i'
        os.system(f"{formatter} {filename}")

    format_file(configuration.ast_header_output_path)
    format_file(configuration.ast_src_output_path)
    format_file(configuration.mutate_header_output_path)
    format_file(configuration.mutate_src_output_path)
    # format_file(configuration.ts_header_output_path)
    # format_file(configuration.ts_src_output_path)


def is_non_term_case(a_case):
    res = True
    if (
        len(a_case.symbolList) != 1
        or a_case.symbolList[0].isTerminator == True
        or a_case.symbolList[0].name == ""
    ):
        return None
    return underline_to_hump(a_case.symbolList[0].name)


def build_convert_ir_type_map(all_class):
    result = {}

    for c in all_class:
        c_name = c.name
        for case in c.caseList:
            node = is_non_term_case(case)
            if node is None:
                continue
            if node not in result:
                result[node] = set()
            result[node].add(c_name)

    # for (key, value) in result.items():
    #    if(len(value) == 0):
    ##        continue
    #    print ("%s connected to" % key)
    #    for i in value:
    #        print("\t" + i)
    #    print("")

    return result


def can_be_converted(a, b, graph):
    parent_a = set()
    visited = set()

    bfs = [a]
    while bfs:
        new_bfs = []
        for i in bfs:
            if i in parent_a:
                continue
            parent_a.add(i)
            if i not in graph:
                continue
            new_bfs.extend(node for node in graph[i] if node not in visited)
        bfs = new_bfs

    bfs.append(b)
    visited = set()
    while bfs:
        new_bfs = []
        for i in bfs:
            visited.add(i)
            if i in parent_a:
                # print("Common parent: %s" % i)
                return i
            if i not in graph:
                continue
            new_bfs.extend(node for node in graph[i] if node not in visited)
        bfs = new_bfs

    # print("No common parent")
    return None


if __name__ == "__main__":
    parse = argparse.ArgumentParser()
    parse.add_argument("-i", "--input", help="Grammar description")
    parse.add_argument("-f", "--flex", help="path of flex.l file")
    parse.add_argument("-b", "--bison", help="path of bison.y file")
    parse.add_argument("-a", "--ast", help="name of ast file(both .cpp and .h)")
    parse.add_argument("-t", "--token", help="path of config file for token")
    parse.add_argument("-s", "--semantic", help="path of semantic rule file")
    parse.add_argument("-e", "--extraflex", help="path of extra flex rules")
    args = parse.parse_args()

    class_define = ""
    class_content = ""
    bison_type_define = ""

    ## Parse it from a file. To do
    # notKeywordSym["COMMA"] = ','
    # notKeywordSym["LD"] = '('
    # notKeywordSym["RD"] = ')'
    # notKeywordSym["EQUAL"] = '='

    literalValue = {
        "float": ["float_literal", "fconst"],
        "int": ["int_literal", "iconst"],
        "string": [
            "fixed_type",
            "identifier",
            "string_literal",
            "sconst",
            "guess_op",
            "dollar_variable",
            "string_varname",
            "char_literal",
            "hex_literal",
            "hex_number",
            "pragma_directive",
            "expon_literal",
        ],
    }

    if args.semantic != None:
        semanticRule = json.load(open(args.semantic))

    if args.input != None:
        with open(args.input, "r") as input_file:
            content = input_file.read().strip()
            ptn = re.compile("Data\w+")
            kkk = re.findall(ptn, content)  # ptn.findall(c)
            ss = {
                "DataVarDefine",
                "DataFunctionType",
                "DataFunctionName",
                "DataFunctionArg",
                "DataFunctionBody",
                "DataFunctionReturnValue",
                "DataClassType",
                "DataClassName",
                "DataStructBody",
                "DataVarType",
                "DataVarName",
                "DataInitiator",
                "DataVarScope",
                "DataDeclarator",
                "DataPointer",
                "DataFixUnit",
            }
            for kkkk in kkk:
                if str(kkkk) != "DataWhatever":
                    ss.add(str(kkkk))

            all_data_t = ["DataWhatever"] + list(ss)

            if content[-1] != "\n":
                content += "\n"
            content = content.replace("\r\n", "\n")
            content = content.split("---\n")

            for i in content:
                if i == "":
                    continue
                genclass = parseGrammar(i[:-1])

                # print((genclass))

    if args.token != None:
        with open(args.token, "r") as token_file:
            token_info = token_file.read()
            split_by_duck = "duck" in token_info
            token_info = token_info.split("\n")
            if split_by_duck:
                token_info = [i.split("duck") for i in token_info]
            else:
                token_info = [i.split(" ") for i in token_info]
            # print(token_info)
            # print(token_info)
            for each_token in token_info:
                if len(each_token) < 2:
                    continue
                tokenDict[each_token[0]] = Token(
                    each_token[0],
                    int(each_token[1]),
                    each_token[2],
                    each_token[3],
                    each_token[4],
                )

    dest_info = """
sval:
free( ($$) );
---
fval, ival:
EMPTY
"""
    dest_info = dest_info.strip()
    dest_info = dest_info.split("---")
    for each_dest in dest_info:
        typename = each_dest.split(":\n")[0]
        dest_define = each_dest.split(":\n")[1].strip()
        destructorDict[dest_define] = [i.strip() for i in typename.split(",")]

    configuration = {
        "all_token_header": "gen/parser/all_tokens.h",
        "flex_output_path": "gen/parser/flex.l",
        "bison_output_path": "gen/parser/bison.y",
        "gen_ir_header_output_path": "gen/gen_ir.h",
        "gen_ir_src_output_path": "gen/gen_ir.cpp",
        "config_src_output_path": "gen/config.cpp",
        "config_src_template_path": "template/config_src_template.cpp",
    }

    with open(configuration["all_token_header"], "w") as f:
        f.write(genAllTokensHeader(tokenDict))

    with open(configuration["flex_output_path"], "w") as flex_file:
        flex_file.write(genFlex(tokenDict))
        flex_file.close()

    with open(configuration["bison_output_path"], "w") as bison_file:
        bison_file.write(genBison(allClass))
        bison_file.close()

    with open(configuration["gen_ir_header_output_path"], "w") as gen_ir_header_file:
        gen_ir_header_file.write(genGenIRHeader(allClass, all_data_t))

    with open(configuration["gen_ir_src_output_path"], "w") as gen_ir_src_file:
        gen_ir_src_file.write(genGenIRSrc(allClass))

    # with open(configuration["config_src_output_path"], "w") as f:
    #    f.write(genTestSrc())
