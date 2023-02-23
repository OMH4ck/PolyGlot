import os
import argparse
import random

parse = argparse.ArgumentParser()
parse.add_argument("-i", "--input", help = "Input dir")
parse.add_argument("-n", "--number", help = "number to select")
parse.add_argument("-o", "--output", help = "Output dir")
parse.add_argument("-b", "--byte", help = "Byte limit")

args = parse.parse_args()
num = int(args.number)
if args.byte != None:
    b_limit = int(args.byte)
else:
    b_limit = 10000000000

if os.path.exists(args.output) == False:
    os.mkdir(args.output)

file_list = os.popen("find %s" % args.input).read().split("\n")
file_list = [i.strip() for i in file_list]

i = 0
file_num = len(file_list)
result_set = set()
while i < num:
    a = file_list[random.randint(0, file_num)]
    if a in result_set or os.path.getsize(a) > b_limit:
        continue
    os.system("cp %s %s" % (a, args.output))
    result_set.add(a)
    i = i + 1
