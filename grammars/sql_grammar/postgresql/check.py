import sys
f1 = open(sys.argv[1],'r')
f2 = open(sys.argv[2],'r')

s = ''
for line in f2:
    s += line

for line in f1:
    if('---' in line):
        continue
    else:
        line = line.lstrip('\t')
        if(line not in s):
            print(line,end = '\n')