### Tests of complex arithemetic.

Meps <- .Machine$double.eps
## complex
z <- 0 ^ (-3:3)
stopifnot(Re(z) == 0 ^ (-3:3))


## powers, including complex ones
a <- -4:12
m <- outer(a +0, b <- seq(-.5,2, by=.5), "^")
dimnames(m) <- list(paste(a), "^" = sapply(b,format))
round(m,3)
stopifnot(m[,as.character(0:2)] == cbind(1,a,a*a),all.equal(unname(m[,"0.5"]),sqrt(abs(a))*ifelse(a < 0, 1, 1),tolerance = 20*Meps))

## 2.10.0-2.12.1 got z^n wrong in the !HAVE_C99_COMPLEX case
z <- 0.2853725+0.3927816i
z2 <- z^(1:20)
z3 <- z^-(1:20)
z0 <- cumprod(rep(z, 20))
stopifnot(all.equal(z2, z0), all.equal(z3, 1/z0))
## was z^3 had value z^2 ....

## fft():
for(n in 1:30) cat("\nn=",n,":", round(fft(1:n), 8),"\n")


## polyroot():
stopifnot(abs(1 + polyroot(choose(8, 0:8))) < 1e-10)# maybe smaller..
