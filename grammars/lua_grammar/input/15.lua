mt = {__le = function (a,b) coroutine.yield("yield"); return a.x <= b.x end}
t1 = setmetatable({x=1}, mt)
t2 = {x=2}
co = coroutine.wrap(function (a,b) return t2 <= t1 end)
co()
print(co()) 
