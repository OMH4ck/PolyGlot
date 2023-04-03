a = newproxy(true)
getmetatable(a).__gc = function () end
for i=1,10000000 do
      newproxy(a)
        if math.mod(i, 10000) == 0 then print(gcinfo()) end
            end
