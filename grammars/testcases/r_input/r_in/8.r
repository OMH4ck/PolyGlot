library(tcltk)
tt <- tktoplevel()
tc <- tkcanvas(tt, yscrollcommand = function(...) tkset(ts, ...))
