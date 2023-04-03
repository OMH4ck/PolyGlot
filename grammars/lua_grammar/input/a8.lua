local function func()
  pcall(1)
  coroutine.wrap(func)()
end
func()
