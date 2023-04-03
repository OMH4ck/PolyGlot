function co_func (current_co)
   coroutine.resume(co)
   end
   co = coroutine.create(co_func)
   coroutine.resume(co)
   coroutine.resume(co)
