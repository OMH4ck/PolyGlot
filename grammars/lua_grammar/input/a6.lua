local coro
for i = 1, 1e5 do
  local previous = coro
  coro = coroutine.create(function()
    local cc <close> = setmetatable({}, {__close=function()
      if previous then
        assert(coroutine.close(previous))
      end
    end})
    coroutine.yield()
  end)
  assert(coroutine.resume(coro))
end
print(coroutine.close(coro))
