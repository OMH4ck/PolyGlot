library(nlme)
d <-
  data.frame(
    obs=rnorm(n=97), # 97 chosen because it's prime and therefore can't be the size of a rectangular matrix
    groups=rep(c("A", "B"), each=50)[1:97],
    wt=abs(rnorm(n=97))
  )

nlme(
  obs~b,
  fixed=b~1,
  random=b~1|groups,
  weights=varFixed(~wt),
  start=c(b=0),
  data=d
)
