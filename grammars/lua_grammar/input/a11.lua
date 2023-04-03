function func1 ()
  local f = setmetatable({}, {__gc = function () collectgarbage("step") end})
  collectgarbage("step" , 1)
end


for i = 0,1000 do
  setmetatable({}, {__gc = func1})
end
