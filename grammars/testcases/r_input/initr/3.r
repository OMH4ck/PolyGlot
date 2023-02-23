##  log() and "pow()" -- POSIX is not specific enough..
log(0) == -Inf
is.nan(log(-1))# TRUE and warning

rp <- c(1:2,Inf); rn <- rev(- rp)
r <- c(rn, 0, rp, NA, NaN)
all(r^0 == 1)
ir <- suppressWarnings(as.integer(r))
all(ir^0  == 1)
all(ir^0L == 1)# not in R <= 2.15.0
all( 1^r  == 1)# not in R 0.64
all(1L^r  == 1)
all(1L^ir == 1)# not in R <= 2.15.0
all((rn ^ -3) == -((-rn) ^ -3))
#
all(c(1.1,2,Inf) ^ Inf == Inf)
all(c(1.1,2,Inf) ^ -Inf == 0)
.9 ^ Inf == 0
.9 ^ -Inf == Inf
## Wasn't ok in 0.64:
all(is.nan(rn ^ .5))# in some C's : (-Inf) ^ .5 gives Inf, instead of NaN


## Real Trig.:
cos(0) == 1
sin(3*pi/2) == cos(pi)
x <- rnorm(99)
all( sin(-x) == - sin(x))
all( cos(-x) == cos(x))

x <- 1:99/100
all(abs(1 - x / asin(sin(x))) <= 2*Meps)# "== 2*" for HP-UX
all(abs(1 - x / atan(tan(x))) <  2*Meps)

all(is.nan(gamma(0:-47))) # + warn.

## choose() {and lchoose}:
n51 <- c(196793068630200, 229591913401900, 247959266474052)
abs(c(n51, rev(n51))- choose(51, 23:28)) <= 2
all(choose(0:4,2) == c(0,0,1,3,6))
## 3 to 8 units off and two NaN's in 1.8.1

## psi[gamma](x) and derivatives:
## psi == digamma:
gEuler <- 0.577215664901532860606512# = Euler's gamma
abs(digamma(1) + gEuler) <   32*Meps # i386 Lx: = 2.5*Meps
all.equal(digamma(1) - digamma(1/2), log(4), tolerance = 32*Meps)# Linux: < 1*Meps!
n <- 1:12
