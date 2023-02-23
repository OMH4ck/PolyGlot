do
  local k = 0
  local x
  ::foo::
  local y       -- should be reset to nil after goto, but it is not
  assert(not y)
  y = true
  k = k + 1
  if k < 2 then goto foo end
end
