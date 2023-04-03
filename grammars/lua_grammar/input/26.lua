local u = setmetatable({}, {__gc = function () foo() end})
local m = require 'mod'   -- 'mod' may be any dynamic library written in C
foo = m.foo  
