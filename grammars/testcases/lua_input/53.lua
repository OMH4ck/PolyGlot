longs = string.rep("\0", 2^25)
function catter(i)
    return assert(loadstring(string.format("return function(a) return a%s end",string.rep("..a", i-1))))()
                end
                rep129 = catter(129)
                rep129(longs)
