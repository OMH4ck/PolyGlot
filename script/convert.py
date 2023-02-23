import sys
import json

f = sys.argv[1]
with open(f, 'rb') as ff:
    lines = ff.readlines()
    lines = [i.strip() for i in lines]

rules = []

for i in lines:
    obj = {}
    k = i.split(" # ")
    n = int(k[0])
    obj["OperandNum"] = n
    obj["Operator"] = k[1:4]
    obj["OperandLeftType"] = k[4]
    if n == 1:
        obj["OperandRightType"] = ""
        obj["ResultType"] = k[5]
        obj["InferDirection"] = k[6]
        obj["Property"] = k[7:]
    else:
        obj["OperandRightType"] = k[5]
        obj["ResultType"] = k[6]
        obj["InferDirection"] = k[7]
        obj["Property"] = k[8:]

    rules.append(obj)

print(json.dumps(rules, indent = 4))