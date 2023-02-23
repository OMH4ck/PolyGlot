
.proctime00 <- proc.time()
opt.conformance <- 0
Meps <- .Machine $ double.eps

## this uses random inputs, so set the seed
set.seed(1)

options(rErr.eps = 1e-30)
rErr <- function(approx, true, eps = .Options$rErr.eps)
{
    if(is.null(eps)) { eps <- 1e-30; options(rErr.eps = eps) }
    ifelse(Mod(true) >= eps, 1 - approx / true, true - approx)     # absolute error (e.g. when true=0)
}

abs(1- .Machine$double.xmin * 10^(-.Machine$double.min.exp*log10(2)))/Meps < 1e3
##P (1- .Machine$double.xmin * 10^(-.Machine$double.min.exp*log10(2)))/Meps
if(opt.conformance) abs(1- .Machine$double.xmax * 10^(-.Machine$double.max.exp*log10(2)))/Meps < 1e3
gEuler <- 0.577215664901532860606512# = Euler's gamma
abs(digamma(1) + gEuler) <   32*Meps # i386 Lx: = 2.5*Meps
all.equal(digamma(1) - digamma(1/2), log(4), tolerance = 32*Meps)# Linux: < 1*Meps!
n <- 1:12
all.equal(digamma(n), - gEuler + c(0, cumsum(1/n)[-length(n)]),tolerance = 32*Meps)#i386 Lx: 1.3 Meps
all.equal(digamma(n + 1/2), - gEuler - log(4) + 2*cumsum(1/(2*n)),tolerance = 32*Meps)#i386 Lx: 1.8 Meps
## higher psigamma:
all.equal(psigamma(1, deriv=c(1,3,5)), pi^(2*(1:3)) * c(1/6, 1/15, 8/63), tolerance = 32*Meps)
x <- c(-100,-3:2, -99.9, -7.7, seq(-3,3, length=61), 5.1, 77)
## Intel icc showed a < 1ulp difference in the second.
stopifnot(all.equal( digamma(x), psigamma(x,0), tolerance = 2*Meps), all.equal(trigamma(x), psigamma(x,1), tolerance = 2*Meps))# TRUE (+ NaN warnings)
## very large x:
x <- 1e30 ^ (1:10)
a.relE <- function(appr, true) abs(1 - appr/true)
stopifnot(a.relE(digamma(x),   log(x)) < 1e-13, a.relE(trigamma(x),     1/x) < 1e-13)
x <- sqrt(x[2:6]); stopifnot(a.relE(psigamma(x,2), - 1/x^2) < 1e-13)
x <- 10^(10*(2:6));stopifnot(a.relE(psigamma(x,5), +24/x^5) < 1e-13)

## fft():
ok <- TRUE
##test EXTENSIVELY:	for(N in 1:100) {
    cat(".")
    for(n in c(1:30, 1000:1050)) {
	x <- rnorm(n)
	er <- Mod(rErr(fft(fft(x), inverse = TRUE)/n, x*(1)))
	n.ok <- all(er < 1e-8) & quantile(er, 0.95, names=FALSE) < 10000*Meps
	if(!n.ok) cat("\nn=",n,": quantile(rErr, c(.95,1)) =", formatC(quantile(er, prob= c(.95,1))),"\n")
	ok <- ok & n.ok
    }
    cat("\n")
##test EXTENSIVELY:	}
ok
