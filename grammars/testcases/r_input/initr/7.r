for(size in seq(0.8,2, by=.1)) stopifnot(all.equal(cumsum(dnbinom(0:7, size, .5)), pnbinom(0:7, size, .5)))
stopifnot(All.eq(pnbinom(c(1,3), .9, .5), c(0.777035760338812, 0.946945347071519)))

##__ 5. Poisson __

stopifnot(dpois(0:5,0) == c(1, rep(0,5)), dpois(0:5,0, log=TRUE) == c(0, rep(-Inf, 5)))

## Cumulative Poisson '==' Cumulative Chi^2 :
## Abramowitz & Stegun, p.941 :	 26.4.21 (26.4.2)
n1 <- 20; n2 <- 16
for(lambda in rexp(n1)) for(k in rpois(n2, lambda)) stopifnot(all.equal(1 - pchisq(2*lambda, 2*(1+ 0:k)), pp <- cumsum(dpois(0:k, lambda=lambda)), tolerance = 100*Meps), all.equal(pp, ppois(0:k, lambda=lambda), tolerance = 100*Meps), all.equal(1 - pp, ppois(0:k, lambda=lambda, lower.tail = FALSE)))


##__ 6. SignRank __
for(n in rpois(32, lam=8)) {
    x <- -1:(n + 4)
    stopifnot(All.eq(psignrank(x, n), cumsum(dsignrank(x, n))))
}

##__ 7. Wilcoxon (symmetry & cumulative) __
is.sym <- TRUE
for(n in rpois(5, lam=6)) for(m in rpois(15, lam=8)) {
	x <- -1:(n*m + 1)
	fx <- dwilcox(x, n, m)
	Fx <- pwilcox(x, n, m)
	is.sym <- is.sym & all(fx == dwilcox(x, m, n))
	stopifnot(All.eq(Fx, cumsum(fx)))
    }
stopifnot(is.sym)

stopifnot(pgamma(1,Inf,scale=Inf) == 0)
## Also pgamma(Inf,Inf) == 1 for which NaN was slightly more appropriate
assertWarning(stopifnot( is.nan(c(pgamma(Inf,  1,scale=Inf), pgamma(Inf,Inf,scale=Inf)))))
scLrg <- c(2,100, 1e300*c(.1, 1,10,100), 1e307, xMax, Inf)
stopifnot(pgamma(Inf, 1, scale=xMax) == 1, pgamma(xMax,1, scale=Inf) == 0, all.equal(pgamma(1e300, 2, scale= scLrg, log=TRUE), c(0, 0, -0.000499523968713701, -1.33089326820406, -5.36470502873211, -9.91015144019122, -32.9293385491433, -38.707517174609, -Inf), tolerance = 2e-15))

p <- 7e-4; df <- 0.9
stopifnot( abs(1-c(pchisq(qchisq(p, df),df)/p, pchisq(qchisq(1-p, df,lower=FALSE),df,lower=FALSE)/(1-p), pchisq(qchisq(log(p), df,log=TRUE),df, log=TRUE)/log(p),  pchisq(qchisq(log1p(-p),df,log=T,lower=F),df, log=T,lower=F)/log1p(-p) ) ) < 1e-14 )

xB <- c(2000,1e6,1e50,Inf)
for(df in c(0.1, 1, 10)) for(ncp in c(0, 1, 10, 100)) stopifnot(pchisq(xB, df=df, ncp=ncp) == 1)
stopifnot(all.equal(qchisq(0.025,31,ncp=1,lower.tail=FALSE), 49.7766246561514, tolerance = 1e-11))
for(df in c(0.1, 0.5, 1.5, 4.7, 10, 20,50,100)) {
    xx <- c(10^-(5:1), .9, 1.2, df + c(3,7,20,30,35,38))
    pp <- pchisq(xx, df=df, ncp = 1) #print(pp)
    dtol <- 1e-12 *(if(2 < df && df <= 50) 64 else if(df > 50) 20000 else 501)
    stopifnot(all.equal(xx, qchisq(pp, df=df, ncp=1), tolerance = dtol))
}

## p ~= 1 (<==> 1-p ~= 0) -- gave infinite loop in R <= 1.8.1 -- PR#6421
psml <- 2^-(10:54)
q0 <- qchisq(psml,    df=1.2, ncp=10, lower.tail=FALSE)
q1 <- qchisq(1-psml, df=1.2, ncp=10) # inaccurate in the tail
p0 <- pchisq(q0, df=1.2, ncp=10, lower.tail=FALSE)
p1 <- pchisq(q1, df=1.2, ncp=10, lower.tail=FALSE)
iO <- 1:30
stopifnot(all.equal(q0[iO], q1[iO], tolerance = 1e-5), all.equal(p0[iO], psml[iO])) 

##--- Beta (need more)

stopifnot(is.finite(a <- rlnorm(20, 5.5)), a > 0, is.finite(b <- rlnorm(20, 6.5)), b > 0)
pab <- expand.grid(seq(0,1,by=.1), a, b)
p <- pab[,1]; a <- pab[,2]; b <- pab[,3]
stopifnot(all.equal(dbeta(p,a,b), exp(pab <- dbeta(p,a,b, log = TRUE)), tolerance = 1e-11))
sp <- sample(pab, 50)
