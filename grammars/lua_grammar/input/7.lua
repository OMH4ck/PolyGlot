local a = {x = 1, y = 1, z = 1}
a[1] = 10   -- goes to the hash part (which has 4 slots)
print(a[1])   --> 10

pcall(rawset, a, 2, 20)   -- forces a rehash

for k,v in pairs(a) do print(k,v) end
