a = coroutine.create(function() yield() end)
coroutine.resume(a)
debug.sethook(a)
