meta={}
setmetatable(meta, meta)
meta.__newindex = function(t, key, value) print("set") end
o = setmetatable({}, meta)
o.x = 10
