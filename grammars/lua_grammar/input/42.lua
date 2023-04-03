maybe = string.dump(function() return ({[true]=true})[true] end)
maybe = maybe:gsub('\1\1','\1\2')
maybe = loadstring(maybe)()
assert(type(maybe) == "boolean" and maybe ~= true and maybe ~= false)
