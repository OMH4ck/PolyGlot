function v (...)
  return os.exit(0, true)
end

local x <close> = setmetatable({}, {__close = error})

v()
