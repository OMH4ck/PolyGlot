local closed = false

local o1 = setmetatable({}, {__close=function() closed = true end})

local function test()
    for k, v in next, {}, nil, o1 do
      local function f() return k end   -- just to use 'k'
      break
    end
  assert(closed)   -- should be closed here
end

test()
