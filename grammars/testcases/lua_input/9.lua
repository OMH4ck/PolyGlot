A = coroutine.running()
B = coroutine.create(function() coroutine.resume(A) end)
coroutine.resume(B)
-- or
A = coroutine.wrap(function() pcall(A, _) end)
A()
