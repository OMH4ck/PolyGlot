import sys
import re

def read_file(filename):
    with open(filename, 'r') as f:
        return f.read()

def extract_terminate(content):
    tmp = content.split("\n")
    visited = list()
    res = list()
    for line in tmp:
        for word in line.split(" "):
            #if(word == "ABORT"):
                #print line
            if(word.isupper() and word not in visited):
                #print word
                res.append(word)
                visited.append(word)
    res.sort()
    return res

def verify(content):
    tmp = content.split("\n")
    tmp_content = [i for i in tmp if i!=""  and i!="---" and i.endswith(":")==False]
    tmp_entry = [i[:-1] for i in tmp if i.endswith(":")]
    if(len(tmp_entry) != len(list(set(tmp_entry)))):
        print "duplicate entry:", [i for i in tmp_entry if tmp_entry.count(i) > 1]
       # print tmp_entry
    res = list()
    for line in tmp_content:
        for word in line.split(" "):
            if(word not in tmp_entry and word.islower()):
                res.append(word)
    
    return list(set(res))

if __name__ == "__main__":
    content = ""
    if(sys.argv[1] == "-f"):
        content = read_file(sys.argv[2])
    
    if(sys.argv[3] == "-e" and len(content) != 0):
        for i in extract_terminate(content):
            print i
    elif(sys.argv[3] == "-v" and len(content) != 0):
        vres = verify(content)
        print "no content:", vres