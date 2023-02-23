import re
import sys

ptn_all_grammar = re.compile(r"%%[\s\S]*%%")
#ptn_single_node = re.compile(r"(?:^|\n)[^/][A-Za-z][\S\s]*?;\n\n")
ptn_single_node = re.compile(r"[A-Za-z]*?:[\S\s]*?;\n\n")
#ptn_single_node = re.compile(r"InsertStmt:")
ptn_desc = re.compile(r"([\S\s]*)[{[\S\s]?}]?")
with open(sys.argv[1], 'r') as f:
    content = f.read()
    res = ptn_all_grammar.findall(content)
    for i in res:
        for j in ptn_single_node.findall(i):
            res = ""
            for x in j.split("\n"):
                if(x.startswith("//") == False):
                    res += x + "\n"

            sp = res.split(":")

            name = sp[0].split("\n")[-1]
            desc = sp[1]

            #print res
            print name.strip() + ":"

            for d in desc.split("| "):
                pos1 = d.find("{")
                pos2 = d.find("}")
                if (pos1 != 0):
                    d = d[:pos1]
                    d = d.strip()
                if(d.endswith(";")):
                    d = d[:-1]
                tmp = ""
                for i in d.split("\n"):
                    tmp += i + " "
                print "\t" + tmp#d.strip()
            print "-" * 3

