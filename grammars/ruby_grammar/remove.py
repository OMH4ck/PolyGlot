import sys
import os

inputdir = "/mnt/raidhhd/init_file/ruby"
outputdir = inputdir + "2"
filenames = os.listdir(inputdir)

for filename in filenames:
    with open(inputdir + "/" + filename, 'rw') as f:
        content = f.read()

    output = ""
    for line in content.split("\n"):
        pos = line.find("#")
        if pos != -1:
            line = line[:pos]
        pos = line.find("require")
        if pos != -1:
            line = line[:pos]
        pos = line.find("include")
        if pos != -1:
            line = line[:pos]
        output += line + "\n"

    with open(outputdir + "/" + filename, 'w') as f2:
        f2.write(output)

