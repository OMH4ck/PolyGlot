library(nlme)
##
r <- vector("list", 2) # now (64bit, 2017, R 3.3.2) takes longer before seg.fault
## for(i in 1:20)# 3 to 8 times were sufficient in 2008 for a seg.fault
for(i in seq_along(r)) {
    cat(i)
    r[[i]] <- tryCatch(
        gnls.exp <- gnls(circumference ~ Asym/(1 + exp(-(age-xmid)/scal)) ,
                         data = Orange, correlation = corExp(form = ~1 | Tree),
                         start = c(Asym=150, xmid=750, scal=300))
       , error = conditionMessage)
    cat(". ")
    if(i %% 10 == 0) {
        cat("\n Unique error messages till now:\n ")
        print(unique(unlist(r)))
    }
}
