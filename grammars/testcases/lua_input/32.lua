grandparent = {}
grandparent.__newindex = function(s,_,_) print(s) end

parent = {}
parent.__newindex = parent
setmetatable(parent, grandparent)

child = setmetatable({}, parent)
child.foo = 10 
