a = {}
print(gcinfo())
for i = 1, 10000 do
      a[i] = setmetatable({}, {__mode = "v"})
      end
      collectgarbage()
      a = nil
      collectgarbage()
      print(gcinfo())
