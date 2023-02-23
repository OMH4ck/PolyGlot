#### Strict "regression" (no output comparison) tests
#### or  [R]andom number generating functions

options(warn = 2)# warnings are errors here

## For integer valued comparisons
all.eq0 <- function(x,y) all.equal(x,y, tolerance = 0)

###------- Discrete Distributions ----------------

set.seed(17)


N <- 1e10; m <- 1e5; n <- N-m; k <- 1e6
n /.Machine$integer.max ## 4.66
p <- m/N; q <- 1 - p
cat(sprintf("N = n+m = %g, m = Np = %g; k = %g ==> (p,f) = (m,k)/N = (%g, %g)\n k*p*q = %.4g > 1: %s\n",N, m, k, m/N, k/N, k*p*q, k*p*q > 1))
set.seed(11)
rH <- rhyper(20, m=m, n=n, k=k) # now via qhyper() - may change!
stopifnot( is.finite(rH), 3 <= rH, rH <= 24) # allow slack for change
## gave all NA_integer_ in R < 3.3.0


stopifnot(identical(rgamma(1, Inf), Inf),identical(rgamma(1, 0, 0), 0))
## gave NaN in R <= 3.3.0

