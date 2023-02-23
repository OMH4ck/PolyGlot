v1 <- c(a=2)
m1 <- cbind(  2:4,3)
m2 <- cbind(a=2:4,2)

all( pmax(v1, 1:3) == pmax(1:3, v1) & pmax(1:3, v1) == c(2,2,3))
all( pmin(v1, 1:3) == pmin(1:3, v1) & pmin(1:3, v1) == c(1,2,2))

oo <- options(warn = -1)# These four lines each would give 3-4 warnings :
 all( pmax(m1, 1:7) == pmax(1:7, m1) & pmax(1:7, m1) == c(2:4,4:7))
 all( pmin(m1, 1:7) == pmin(1:7, m1) & pmin(1:7, m1) == c(1:3,3,3,3,2))
 all( pmax(m2, 1:7) == pmax(1:7, m2) & pmax(1:7, m2) == pmax(1:7, m1))
 all( pmin(m2, 1:7) == pmin(1:7, m2) & pmin(1:7, m2) == c(1:3,2,2,2,2))
options(oo)

## pretty()
stopifnot(pretty(1:15)	    == seq(0,16, by=2), pretty(1:15, h=2) == seq(0,15, by=5), pretty(1)	    == 0:1, pretty(pi)	    == c(2,4), pretty(pi, n=6)   == 2:4, pretty(pi, n=10)  == 2:5, pretty(pi, shr=.1)== c(3, 3.5))
