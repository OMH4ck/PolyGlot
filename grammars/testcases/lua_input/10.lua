local mt = {}
mt.__newindex = mt
local t = setmetatable({}, mt)
t[1] = 1  
