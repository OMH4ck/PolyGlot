import os
import argparse

parse = argparse.ArgumentParser()
parse.add_argument("-i", "--input", help = "Input dir")
parse.add_argument("-t", "--type", help = "Suffix of format like js, c, cpp")
parse.add_argument("-o", "--output", help = "Output dir")

args = parse.parse_args()

if os.path.exists(args.output) == False:
    os.mkdir(args.output)

file_list = os.popen("find . %s" % args.input).read().split("\n")
file_list = [i.strip() for i in file_list]

for i in file_list:
    if i.endswith(".%s" % args.type):
        os.system("cp %s %s" % (i, args.output))
