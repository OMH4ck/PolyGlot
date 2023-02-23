basic_tests <- list(list(input=c(TRUE, FALSE), any=TRUE, all=FALSE),list(input=c(FALSE, TRUE), any=TRUE, all=FALSE))

## any, all accept '...' for input.
list_input_tests <- list( list(input=list(TRUE, TRUE), all=TRUE, any=TRUE),list(input=list(FALSE, FALSE), all=FALSE, any=FALSE))



do_tests <- function(L) {
    run <- function(f, input, na.rm = FALSE) {
        if (is.list(input)) do.call(f, c(input, list(na.rm = na.rm))) else f(input, na.rm = na.rm)
    }

    do_check <- function(case, f) {
        fun <- deparse(substitute(f))
        if (!identical(case[[fun]], run(f, case$input))) {
            cat("input: "); dput(case$input)
            stop(fun, " returned ", run(f, case$input), " wanted ", case[[fun]], call. = FALSE)
        }
        narm <- paste(fun, ".na.rm", sep = "")
        if (!is.null(case[[narm]])) {
          if (!identical(case[[narm]], run(f, case$input, na.rm = TRUE))) {
                cat("input: "); dput(case$input)
                stop(narm, " returned ", run(f, case$input, na.rm = TRUE), " wanted ", case[[narm]], call. = FALSE)
            }
        }
    }
    lab <- deparse(substitute(L))
    for (case in L) {
        do_check(case, any)
        do_check(case, all)
    }
}

do_tests(basic_tests)
do_tests(list_input_tests)
