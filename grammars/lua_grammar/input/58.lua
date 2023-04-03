function g(x)
    coroutine.yield(x)
    end

    function f (i)
      debug.sethook(print, "l")
        for j=1,1000 do
                g(i+j)
                  end
                  end

                  co = coroutine.wrap(f)
                  co(10)
                  pcall(co)
                  pcall(co)
