f = load(string.dump(function () return 1 end), nil, "b", {})
print(type(f)) 
