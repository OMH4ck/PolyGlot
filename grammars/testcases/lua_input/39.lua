a = string.dump(function()return;end)
a = a:gsub(string.char(30,37,122,128), string.char(34,0,0), 1)
loadstring(a)()
