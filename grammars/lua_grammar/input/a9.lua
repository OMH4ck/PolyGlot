co = coroutine.wrap(
  function()
    local x <close> = setmetatable(
      {}, {__close = function() pcall(co) end}
    )
    error()
  end
)
co()
