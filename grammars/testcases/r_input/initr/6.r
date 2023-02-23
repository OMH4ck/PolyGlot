####	d|ensity
####	p|robability (cumulative)
####	q|uantile
####	r|andom number generation
####
####	Functions for  ``d/p/q/r''

.ptime <- proc.time()
F <- FALSE
T <- TRUE

options(warn = 2)
##      ======== No warnings, unless explicitly asserted via
assertWarning <- tools::assertWarning

as.nan <- function(x) { x[is.na(x) & !is.nan(x)] <- NaN ; x }
###-- these are identical in ./arith-true.R ["fixme": use source(..)]
opt.conformance <- 0
Meps <- .Machine $ double.eps
xMax <- .Machine $ double.xmax
options(rErr.eps = 1e-30)
rErr <- function(approx, true, eps = getOption("rErr.eps", 1e-30))
{
    ifelse(Mod(true) >= eps, 1 - approx / true, true - approx)     # absolute error (e.g. when true=0)
}
## Numerical equality: Here want "rel.error" almost always:
All.eq <- function(x,y) {
    all.equal.numeric(x,y, tolerance = 64*.Machine$double.eps, scale = max(0, mean(abs(x), na.rm=TRUE)))
}
if(!interactive()) set.seed(123)

## The prefixes of ALL the PDQ & R functions
PDQRinteg <- c("binom", "geom", "hyper", "nbinom", "pois","signrank","wilcox")
PDQR <- c(PDQRinteg, "beta", "cauchy", "chisq", "exp", "f", "gamma", "lnorm", "logis", "norm", "t","unif","weibull")
PQonly <- c("tukey")

###--- Discrete Distributions --- Consistency Checks  pZZ = cumsum(dZZ)

##for(pre in PDQRinteg) { n <- paste("d",pre,sep=""); cat(n,": "); str(get(n))}

##__ 1. Binomial __

## Cumulative Binomial '==' Cumulative F :
## Abramowitz & Stegun, p.945-6;  26.5.24  AND	26.5.28 :
n0 <- 50; n1 <- 16; n2 <- 20; n3 <- 8
for(n in rbinom(n1, size = 2*n0, p = .4)) {
    for(p in c(0,1,rbeta(n2, 2,4))) {
	for(k in rbinom(n3, size = n,  prob = runif(1))) stopifnot(all.equal(       pbinom(0:k, size = n, prob = p), cumsum(dbinom(0:k, size = n, prob = p))), all.equal(if(k==n || p==0) 1 else pf((k+1)/(n-k)*(1-p)/p, df1=2*(n-k), df2=2*(k+1)), sum(dbinom(0:k, size = n, prob = p))))
    }
}

##__ 2. Geometric __
for(pr in seq(1e-10,1,len=15)) stopifnot(All.eq((dg <- dgeom(0:10, pr)), pr * (1-pr)^(0:10)), All.eq(cumsum(dg), pgeom(0:10, pr)))


##__ 3. Hypergeometric __

m <- 10; n <- 7
for(k in 2:m) {
    x <- 0:(k+1)
    stopifnot(All.eq(phyper(x, m, n, k), cumsum(dhyper(x, m, n, k))))
}
