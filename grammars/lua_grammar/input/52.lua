co = coroutine.create(function () coroutine.yield() end)
debug.sethook(co, function() end, "lr")
coroutine.resume(co)
coroutine.resume(co)
