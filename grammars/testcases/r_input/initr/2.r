i1 <- pi / 0
i1 == (i2 <- 1:1 / 0:0)
is.infinite( i1) & is.infinite( i2) &   i1 > 12   &   i2 > 12
is.infinite(-i1) & is.infinite(-i2) & (-i1) < -12 & (-i2) < -12

is.nan(n1 <- 0 / 0)
is.nan( - n1)

i1 ==  i1 + i1
i1 ==  i1 * i1
is.nan(i1 - i1)
is.nan(i1 / i1)

1/0 == Inf & 0 ^ -1 == Inf
1/Inf == 0 & Inf ^ -1 == 0

iNA <- as.integer(NA)
!is.na(Inf) & !is.nan(Inf) &   is.infinite(Inf) & !is.finite(Inf)
!is.na(-Inf)& !is.nan(-Inf)&   is.infinite(-Inf)& !is.finite(-Inf)
 is.na(NA)  & !is.nan(NA)  &  !is.infinite(NA)  & !is.finite(NA)
 is.na(NaN) &  is.nan(NaN) &  !is.infinite(NaN) & !is.finite(NaN)
 is.na(iNA) & !is.nan(iNA) &  !is.infinite(iNA) & !is.finite(iNA)

## These are "double"s:
all(!is.nan(c(1.,NA)))
all(c(FALSE,TRUE,FALSE) == is.nan(c   (1.,NaN,NA)))
