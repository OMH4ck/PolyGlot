import os
import sys

validate_prog = "./single_validate"

in_path = sys.argv[1]
out_path = sys.argv[2]

if os.path.exists(out_path) == False:
    os.system("mkdir %s" % out_path)

for i in os.listdir(in_path):
    f = "%s/%s" % (in_path, i)
    a = os.popen("%s %s" % (validate_prog, f)).read()

    if "ff_parse" not in a:
        os.system("cp %s %s" % (f, out_path))
