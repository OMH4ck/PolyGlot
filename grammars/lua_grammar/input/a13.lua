print("creating 1")
setmetatable({}, {__gc = function () print(1) end})

print("creating 2")
setmetatable({}, {__gc = function ()
  print("2")
  print("creating 3")
  setmetatable({}, {__gc = function () print(3) end})
  os.exit(1, true)
end})

