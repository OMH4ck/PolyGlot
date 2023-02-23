f=load(function() end)
interesting={}
interesting[0]=string.rep("A",512)
debug.upvaluejoin(f,1,f,1)
