import subprocess
import sys
import os


for i in os.listdir("test"):
    f = "test/%s" % i
    ret_code = subprocess.call(["python", f])

    if ret_code != 0:
        print("Check %s fail, error code %d!" % (i, ret_code))
        exit(-1)

exit(0)
