local firsttime = true
local function foo ()
  if firsttime then
    firsttime = false
    return "a = 1" 
  else
    for i = 1, 10 do
      print(debug.getlocal(2, i))
    end
  end
end

print(load(foo))
