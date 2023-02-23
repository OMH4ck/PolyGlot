collectgarbage(); print(collectgarbage'count' * 1024)

for i = 1, 100 do
  local co = coroutine.create(function () end)
  local x = {}
  for j=1,1000 do x[j] = j end
  debug.sethook(co, function () return x end, 'l')
end

collectgarbage(); print(collectgarbage'count' * 1024)
