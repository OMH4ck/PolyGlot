function errfunc(x)
  return 'errfunc'
end

function test(do_yield)
  print(do_yield and "yielding" or "not yielding")
  pcall(function() -- this pcall sets errfunc back to none
    if do_yield then
      coroutine.yield() -- stops errfunc from being restored
    end
  end)
  error('fail!')
end

coro = coroutine.wrap(function()
  print(xpcall(test, errfunc, false))
  print(xpcall(test, errfunc, true))
  print(xpcall(test, errfunc, false))
end)

coro()
coro()
