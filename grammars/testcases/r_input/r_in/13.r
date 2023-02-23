f <- structure(function(x) x+1, foo='bar')
attributes(f)
srcref
foo
body(f) <- body(mean)
attributes(f)
