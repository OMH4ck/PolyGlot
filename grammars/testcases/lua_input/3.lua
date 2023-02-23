local eqs = string.rep("=", 0x3ffffffe)
local code = "return [" .. eqs .. "[a]" .. eqs .. "]"
print(#assert(load(code))())
