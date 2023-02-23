local s = string.rep("\n", 2^24)
print(load(function () return s end))
