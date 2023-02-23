x <- c(1/pi, 1, pi)
oo <- options(digits = 8)
df(x, 3, 1e6)
df(x, 3, Inf)
pf(x, 3, 1e6)
pf(x, 3, Inf)

df(x, 1e6, 5)
df(x, Inf, 5)
pf(x, 1e6, 5)
pf(x, Inf, 5)

df(x, Inf, Inf)# (0, Inf, 0)  - since 2.1.1
pf(x, Inf, Inf)# (0, 1/2, 1)

pf(x, 5, Inf, ncp=0)
all.equal(pf(x, 5, 1e6, ncp=1), tolerance = 1e-6, c(0.065933194, 0.470879987, 0.978875867))
all.equal(pf(x, 5, 1e7, ncp=1), tolerance = 1e-6, c(0.06593309, 0.47088028, 0.97887641))
all.equal(pf(x, 5, 1e8, ncp=1), tolerance = 1e-6, c(0.0659330751, 0.4708802996, 0.9788764591))
pf(x, 5, Inf, ncp=1)

dt(1, Inf)
dt(1, Inf, ncp=0)
dt(1, Inf, ncp=1)
dt(1, 1e6, ncp=1)
dt(1, 1e7, ncp=1)

nu <- 2^seq(25, 34, 0.5)
target <- pchisq(1, 1) # 0.682...
y <- pf(1, 1, nu)
stopifnot(All.eq(pf(1, 1, Inf), target), diff(c(y, target)) > 0, abs(y[1] - (target - 7.21129e-9)) < 1e-11) 
## non-monotone in R <= 2.1.0

stopifnot(pgamma(Inf, 1.1) == 1)
## didn't not terminate in R 2.1.x (only)

## qgamma(q, *) should give {0,Inf} for q={0,1}
sh <- c(1.1, 0.5, 0.2, 0.15, 1e-2, 1e-10)
stopifnot(Inf == qgamma(1, sh))
stopifnot(0   == qgamma(0, sh))
## the first gave Inf, NaN, and 99.425 in R 2.1.1 and earlier

## In extreme left tail {PR#11030}
p <- 10:123*1e-12
qg <- qgamma(p, shape=19)
qg2<- qgamma(1:100 * 1e-9, shape=11)
stopifnot(diff(qg, diff=2) < -6e-6, diff(qg2,diff=2) < -6e-6, abs(1 - pgamma(qg, 19)/ p) < 1e-13, All.eq(qg  [1], 2.35047385139143), All.eq(qg2[30], 1.11512318734547))
## was non-continuous in R 2.6.2 and earlier

f2 <- c(0.5, 1:4)
stopifnot(df(0, 1, f2) == Inf, df(0, 2, f2) == 1, df(0, 3, f2) == 0)
## only the last one was ok in R 2.2.1 and earlier

x0 <- -2 * 10^-c(22,10,7,5) # ==> d*() warns about non-integer:
assertWarning(fx0 <- dbinom(x0, size = 3, prob = 0.1))
stopifnot(fx0 == 0,  pbinom(x0, size = 3, prob = 0.1) == 0)

## very small negatives were rounded to 0 in R 2.2.1 and earlier

## dbeta(*, ncp):
db.x <- c(0, 5, 80, 405, 1280, 3125, 6480, 12005, 20480, 32805, 50000, 73205, 103680, 142805, 192080, 253125, 327680)
a <- rlnorm(100)
stopifnot(All.eq(a, dbeta(0, 1, a, ncp=0)), dbeta(0, 0.9, 2.2, ncp = c(0, a)) == Inf, All.eq(65536 * dbeta(0:16/16, 5,1), db.x), All.eq(exp(16 * log(2) + dbeta(0:16/16, 5,1, log=TRUE)), db.x))
## the first gave 0, the 2nd NaN in R <= 2.3.0; others use 'TRUE' values
stopifnot(all.equal(dbeta(0.8, 0.5, 5, ncp=1000), 3.001852308909e-35), all.equal(1, integrate(dbeta, 0,1, 0.8, 0.5, ncp=1000)$value, tolerance = 1e-4),all.equal(1, integrate(dbeta, 0,1, 0.5, 200, ncp=720)$value), all.equal(1, integrate(dbeta, 0,1, 125, 200, ncp=2000)$value))

## df(*, ncp):
x <- seq(0, 10, length=101)
h <- 1e-7
dx.h <- (pf(x+h, 7, 5, ncp= 2.5) - pf(x-h, 7, 5, ncp= 2.5)) / (2*h)
stopifnot(all.equal(dx.h, df(x, 7, 5, ncp= 2.5), tolerance = 1e-6), All.eq(df(0, 2, 4, ncp=x), df(1e-300, 2, 4, ncp=x)) )

## qt(p ~ 0, df=1) - PR#9804
p <- 10^(-10:-20)
qtp <- qt(p, df = 1)
## relative error < 10^-14 :
stopifnot(abs(1 - p / pt(qtp, df=1)) < 1e-14)
