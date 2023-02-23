a = {}
a[1] = "x={1"
for i = 2, 2^20 do
      a[i] = 1
      end
      a[#a + 1] = "}"
      s = table.concat(a, ",")
      assert(loadstring(s))()
      print(#x)
