local thread_id = 0
local threads = {}

function fn(thread)
    thread_id = thread_id + 1
        threads[thread_id] = function()
                                     thread = nil
                                                              end
                                                                  coroutine.yield()
                                                                  end

                                                                  while true do
                                                                          local thread = coroutine.create(fn)
                                                                              coroutine.resume(thread, thread)
                                                                              end
