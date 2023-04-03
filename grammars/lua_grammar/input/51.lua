local s = "a string with \r and \n and \r\n and \n\r"
local c = string.format("return %q", s)
assert(assert(loadstring(c))() == s)
