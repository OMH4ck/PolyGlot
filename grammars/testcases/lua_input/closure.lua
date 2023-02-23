local A,B = 0,{g=10}
function f(x)
  local a = {}
  for i=1,1000 do
    local y = 0
    do
      a[i] = function () B.g = B.g+1; y = y+x; return y+A end
    end
  end
  local dummy = function () return a[A] end
  collectgarbage()
  A = 1; assert(dummy() == a[1]); A = 0;
  assert(a[1]() == x)
  assert(a[3]() == x)
  collectgarbage()
  assert(B.g == 12)
  return a
end

local a = f(10)
-- force a GC in this level
local x = {[1] = {}}   -- to detect a GC
setmetatable(x, {__mode = 'kv'})
while x[1] do   -- repeat until GC
  A = A+1
end
assert(a[1]() == 20+A)
assert(a[1]() == 30+A)
assert(a[2]() == 10+A)
collectgarbage()
assert(a[2]() == 20+A)
assert(a[2]() == 30+A)
assert(a[3]() == 20+A)
assert(a[8]() == 10+A)
assert(getmetatable(x).__mode == 'kv')
assert(B.g == 19)


-- testing equality
a = {}

for i = 1, 5 do  a[i] = function (x) return i + a + _ENV end  end
assert(a[3] ~= a[4] and a[4] ~= a[5])

do
  local a = function (x)  return math.sin(_ENV[x])  end
  local function f()
    return a
  end
  assert(f() == f())
end



-- testing closures with 'for' control variable x break
for i=1,3 do
  f = function () return i end
  break
end
assert(f() == 1)

for k = 1, #t do
  local v = t[k]
  f = function () return k, v end
  break
end
assert(({f()})[1] == 1)
assert(({f()})[2] == "a")


-- testing closure x break x return x errors

local b
function f(x)
  local first = 1
  while 1 do
    if x == 3 and not first then return end
    local a = 'xuxu'
    b = function (op, y)
          if op == 'set' then
            a = x+y
          else
            return a
          end
        end
    if x == 1 then do break end
    elseif x == 2 then return
    else if x ~= 3 then error() end
    end
    first = nil
  end
end

for i=1,3 do
  f(i)
  assert(b('get') == 'xuxu')
  b('set', 10); assert(b('get') == 10+i)
  b = nil
end

pcall(f, 4);
assert(b('get') == 'xuxu')
b('set', 10); assert(b('get') == 14)


local w
-- testing multi-level closure
function f(x)
  return function (y)
    return function (z) return w+x+y+z end
  end
end

y = f(10)
w = 1.345
assert(y(20)(30) == 60+w)


-- testing closures x break
do
  local X, Y
  local a = math.sin(0)

  while a do
    local b = 10
    X = function () return b end   -- closure with upvalue
    if a then break end
  end
  
  do
    local b = 20
    Y = function () return b end   -- closure with upvalue
  end

  -- upvalues must be different
  assert(X() == 10 and Y() == 20)
end

  
-- testing closures x repeat-until

local a = {}
local i = 1
repeat
  local x = i
  a[i] = function () i = x+1; return x end
until i > 10 or a[i]() ~= x
assert(i == 11 and a[1]() == 1 and a[3]() == 3 and i == 4)


for i = 1, 10 do
  assert(a[i](i * 10) == i % 3 and a[i]() == i * 10)
end



-- test for correctly closing upvalues in tail calls of vararg functions
local function t ()
  local function c(a,b) assert(a=="test" and b=="OK") end
  local function v(f, ...) c("test", f() ~= 1 and "FAILED" or "OK") end
  local x = 1
  return v(function() return x end)
end
t()


-- test for debug manipulation of upvalues

do
  local a , b, c = 3, 5, 7
  foo1 = function () return a+b end;
  foo2 = function () return b+a end;
  do
    local a = 10
    foo3 = function () return a+b end;
  end
end

assert(debug.upvalueid(foo1, 1))
assert(debug.upvalueid(foo1, 2))
assert(not pcall(debug.upvalueid, foo1, 3))
assert(debug.upvalueid(foo1, 1) == debug.upvalueid(foo2, 2))
assert(debug.upvalueid(foo1, 2) == debug.upvalueid(foo2, 1))
assert(debug.upvalueid(foo3, 1))
assert(debug.upvalueid(foo1, 1) ~= debug.upvalueid(foo3, 1))
assert(debug.upvalueid(foo1, 2) == debug.upvalueid(foo3, 2))

assert(debug.upvalueid(string.gmatch("x", "x"), 1) ~= nil)

assert(foo1() == 3 + 5 and foo2() == 5 + 3)
debug.upvaluejoin(foo1, 2, foo2, 2)
assert(foo1() == 3 + 3 and foo2() == 5 + 3)
assert(foo3() == 10 + 5)
debug.upvaluejoin(foo3, 2, foo2, 1)
assert(foo3() == 10 + 5)
debug.upvaluejoin(foo3, 2, foo2, 2)
assert(foo3() == 10 + 3)

assert(not pcall(debug.upvaluejoin, foo1, 3, foo2, 1))
assert(not pcall(debug.upvaluejoin, foo1, 1, foo2, 3))
assert(not pcall(debug.upvaluejoin, foo1, 0, foo2, 1))
assert(not pcall(debug.upvaluejoin, print, 1, foo2, 1))
assert(not pcall(debug.upvaluejoin, {}, 1, foo2, 1))
assert(not pcall(debug.upvaluejoin, foo1, 1, print, 1))
