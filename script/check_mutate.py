import os
import sys

all_files = os.listdir(".")
file_to_check = sys.argv[1]

def get_file_by_id(id_num):
    for k in all_files:
        if k.startswith("id:%s" % id_num):
            return k
    return None

while(True):
    file1 = file_to_check
    src_id = file1.split(":")[2].split(",")[0]
    src_file = get_file_by_id(src_id)
    if src_file == None:
        break
    cmd = "diff '%s' '%s'" % (file1, src_file)
    print(cmd)
    os.system(cmd)
    file_to_check = src_file
    print("+"*0x40)
