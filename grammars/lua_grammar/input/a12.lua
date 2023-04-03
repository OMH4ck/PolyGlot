local x = {}; for i=1, 2000 do x[i] = i end

local function f()  end

local function g() return f(table.unpack(x)) end

collectgarbage("step")
setmetatable({}, {__gc = 1})

g()
