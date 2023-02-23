import re
import sys
fin = open(sys.argv[1],'r')
fo = open(sys.argv[2],'w+')
f1 = open('before.txt','w+')
f2 = open('after.txt', 'w+')
s = ''

if_block = False
flower = 0

content = []

replace_dict = {
    "','":"COMMA__",
    "';'":"SEMICOLON__",
    "':'":"COLON__",
    "'|'":"VERTICAL__",
    "'*'":"STAR__",
    "'&'":"AND__",
    "'='":"EQUAL__",
    "'.'":"DOT__",
    "'('":"SLB__",
    "')'":"SRB__",
    "'['":"MLB__",
    "']'":"MRB__",
    "'{'":"LLB__",
    "'}'":"LRB__",
    "'$'":"DOLLAR__",
    "'%'":"PERCENT__",
    "'/'":"SLASH__",
    "'+'":"PLUS__",
    "'-'":"MINUS__",
    "'^'":"POWER__",
    "'<'":"LESS__",
    "'>'":"MORE__",
    "'!'":"NOT__",
    "'@'":"AT__",
    "'~'":"WAVY__",
}

replace_count = {
    "','":0,
    "';'":0,
    "':'":0,
    "'|'":0,
    "'*'":0,
    "'&'":0,
    "'='":0,
    "'.'":0,
    "'('":0,
    "')'":0,
    "'['":0,
    "']'":0,
    "'{'":0,
    "'}'":0,
    "'$'":0,
    "'%'":0,
    "'/'":0,
    "'+'":0,
    "'-'":0,
    "'^'":0,
    "'<'":0,
    "'>'":0
}

replace_check = {
    "','":0,
    "';'":0,
    "':'":0,
    "'|'":0,
    "'*'":0,
    "'&'":0,
    "'='":0,
    "'.'":0,
    "'('":0,
    "')'":0,
    "'['":0,
    "']'":0,
    "'{'":0,
    "'}'":0,
    "'$'":0,
    "'%'":0,
    "'/'":0,
    "'+'":0,
    "'-'":0,
    "'^'":0,
    "'<'":0,
    "'>'":0
}

entry_count = 0
entry_check = 0

#去注释
before = ''
annotation = 0
content1 = []
for line in fin:
    line = line.replace('/*EMPTY*/','EMPTY')
    line = line.replace('/* EMPTY */','EMPTY')
    line = line.replace('/* empty */','EMPTY')
    line = line.replace('/*empty*/','EMPTY')
    l = ''
    if('//' in line):
        pos = line.find('//')
        line = line[0:pos]
    for i in line:
        if(i == '*' and before == '/'):
            annotation = 1
        if((i != '/' or before == '\'') and annotation == 0):
            l += i
        if(i == '/' and before == '*'):
            annotation = 0
        before = i
    content1.append(l)

content = content1
content1 = []


#去语法无关内容
for line in content:
    if(if_block):
        content1.append(line)
        for i in line:
            if(i == '{'):
                flower+=1
            elif(i=='}'):
                flower-=1
            elif(flower == 0 and i==';'):
                pos = line.find(';')
                if(pos > -1 and line[pos-1]!='\''):
                    if_block = False
                    break
    else:
        index = line.find(':')
        if_right = False
        if(index > -1):
            if_right = True
            for i in range(index):
                if(line[i]==' ' or line[i] == '\t'):
                    if_right = False
                    break
        if(if_right):
            if_block = True
            entry_count += 1
            con = line.split(':')
            content1.append(con[0]+':\n')
            content1.append('\t'+con[1])
            for i in line:
                if(i == '{'):
                    flower+=1
                elif(i=='}'):
                    flower-=1
                elif(flower == 0 and i==';'):
                    pos = line.find(';')
                    if(pos > -1 and line[pos-1]!='\''):
                        if_block = False
                        break


content = content1
content1 = []

for line in content:
    if("')'" in line):
        f1.write(line)
'''
#去%prec

for line in content:
    if('%prec' in line):
        pos = line.find('%prec')
        content1.append(line[0:pos]+'\n')
    else:
        content1.append(line)
'''

for line in content:
    while(' %prec' in line):
        line = line.replace(' %prec','%prec')
    while('\t%prec' in line):
        line = line.replace('\t%prec','%prec')
    line = line.replace('%prec',' %prec')
    content1.append(line)

content = content1
content1 = []



for line in content:
    for r in replace_count:
        replace_count[r] += line.count(r)
    for r in replace_dict:
        line = line.replace(r,replace_dict[r])
    content1.append(line)

content = content1
content1 = []

for line in content:
    if('\'' in line):
        print(line)


#去大括号内容
brace = 0
before = ''
for line in content:
    l = ''
    for i in line:
        if(i == '{'):
            brace += 1
        if brace == 0:
            l += i
        if(i == '}'):
            brace -= 1
        before = i
    content1.append(l)

#处理空行
content = content1

content1 = []

for line in content:
    l = line
    while('\t' in l):
        l = l.replace('\t','')
    while(' 'in l):
        l = l.replace(' ','')
    if(l != '\n' and l != '' and l != ' '):
        content1.append(line)

content = content1
content1 = []
for line in content:
    if(':\n' not in line):
        line = line.lstrip('\t').lstrip(' ')
        line = '\t'+line
        content1.append(line)
    else:
        content1.append(line)

content = content1

#for line in content:
#    print(line, end = '')


#处理换行
for i in range(len(content)-1):
    if ('|' not in content[i+1] and ';\n' not in content[i+1] and ':\n' not in content[i] and ';\n' not in content[i]):
        content[i] = content[i].strip('\n') + " "
        content[i+1] = ' '+content[i+1].lstrip('\t').lstrip(' ')
    #if(i != 0 and ':\n' in content[i-1] and '|' not in content[i+1] and ';\n' not in content[i+1]):
    #    content[i] = content[i].strip('\n')
    #    content[i+1] = ' '+content[i+1].lstrip('\t').lstrip(' ')

content1 = []
#处理分号
for line in content:
    l = line
    while('\t' in l):
        l = l.replace('\t','')
    while(' ' in l):
        l = l.replace(' ','')
    pos = l.find(';\n')
    if(pos>0):
        position = line.find(';\n')
        content1.append(line[0:position]+'\n')
        content1.append('---\n')
    else:
        if(';\n' in line):
            content1.append('---\n')
        else:
            content1.append(line)
content = content1


content1 = []
#处理'| '
for line in content:
    while('|\t' in line):
        line = line.replace('|\t','|')
    while('| ' in line):
        line = line.replace('| ', '|')
    line = line.replace('\'|\'', 'YYY')
    if('|' in line ):
        content1.append(line.replace('|','').replace('YYY','\'|\''))
    else:
        content1.append(line.replace('YYY','\'|\''))

content = content1
content1 = []
for line in content:
    if('EMPTY' in line):
        content1.append('\t\n')
    else:
        content1.append(line)

content = content1
content1 = []

#去末尾空格
for line in content:
    while(' \n' in line):
        line = line.replace(' \n', '\n')
    while('\t\n' in line):
        line = line.replace('\t\n', '\n')
    content1.append(line)

content = content1
content1 = []


for line in content:
    for r in replace_dict:
        line = line.replace(replace_dict[r], r)
    for r in replace_check:
        replace_check[r] += line.count(r)
    content1.append(line)

content = content1
content1 = []

for r in replace_check:
    if(replace_check[r] != replace_count[r]):
        print("CHECK FAIL: %s before %s , after %s"%(r,str(replace_count[r]),str(replace_check[r])))

for line in content:
    if('---' in line):
        entry_check += 1

if(entry_check != entry_count):
    print("entry_point CHECK FAIL: before %s, after %s"%(entry_count, entry_check))

for i in range(len(content) - 1):
    if('---' in content[i] and ':\n' not in content[i+1]):
        print('entry_point CHECK FAIL: at '+content[i+1])

for line in content:
    if("')'" in line):
        f2.write(line)

for line in content:
    fo.write(line.lstrip(' '))
