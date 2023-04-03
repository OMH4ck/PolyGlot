z={}
for i=1,27290 do z[i]='1,' end
z = 'if 1+1==2 then local a={' .. table.concat(z) .. '} end'
func = loadstring(z)
print(loadstring(string.dump(func)))
