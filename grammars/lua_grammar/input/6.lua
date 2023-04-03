local a = setmetatable({}, {__mode = 'kv'})

a['ABCDEFGHIJKLMNOPQRSTUVWXYZ' .. 'abcdefghijklmnopqrstuvwxyz'] = {}
a[next(a)] = nil
collectgarbage()
print(a['BCDEFGHIJKLMNOPQRSTUVWXYZ' .. 'abcdefghijklmnopqrstuvwxyz'])
