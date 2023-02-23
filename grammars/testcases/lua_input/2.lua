function w()
    local x = {}
    f = function() print(x) end
end
w()
debug.upvaluejoin(f,2,f,2)
