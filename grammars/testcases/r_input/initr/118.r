## pkgB tests an empty R directory
dir.create(file.path(pkgPath, "pkgB", "R"), recursive = TRUE,showWarnings = FALSE)
InstOpts <- list("exSexpr" = "--html")
pkgApath <- file.path(pkgPath, "pkgA")
if(!dir.exists(d <- pkgApath)) {
    cat("symlink 'pkgA' does not exist as directory ",d,"; copying it\n", sep='')
    file.copy(file.path(pkgPath, "xDir", "pkg"), to = d, recursive=TRUE)
    ## if even the copy failed (NB: pkgB, pkgC depend on pkgA)
}
dir2pkg <- function(dir) ifelse(dir == "pkgC", "PkgC", dir)
if(is.na(match("myLib", .lP <- .libPaths()))) {
    .libPaths(c("myLib", .lP)) # PkgC needs pkgA from there
    .lP <- .libPaths()
}
Sys.setenv(R_LIBS = .R_LIBS(.lP)) # for build.pkg() & install.packages()
(res <- installed.packages(lib.loc = "myLib", priority = "NA"))
(p.lis <- dir2pkg(p.lis)) # so from now, it contains package names
stopifnot(exprs = {
    identical(res[,"Package"], setNames(, sort(c(p.lis, "myTst"))))
    res[,"LibPath"] == "myLib"
})
### Specific Tests on our "special" packages: ------------------------------

## These used to fail because of the sym.link in pkgA
if(True) {
    cat("undoc(pkgA):\n")
    print(uA <- tools::undoc(dir = pkgApath))
    cat("codoc(pkgA):\n")
    print(cA <- tools::codoc(dir = pkgApath))
     print(ext.cA <- extends("classApp"))
} else message("'pkgA' not available")

## - Check conflict message.
## - Find objects which are NULL via "::" -- not to be expected often
##   we have one in our pkgA, but only if Matrix is present.
if(dir.exists(file.path("myLib", "pkgA"))) {
  msgs <- capture.output(require(pkgA, lib="myLib"), type = "message")
  writeLines(msgs)
  stopifnot(length(msgs) > 2,length(grep("The following object is masked.*package:base", msgs)) > 0,length(grep("\\bsearch\\b", msgs)) > 0)
  data(package = "pkgA") # -> nilData
  stopifnot(is.null( pkgA::  nil),is.null( pkgA::: nil),is.null( pkgA::  nilData)) # <-
  ## R-devel (pre 3.2.0) wrongly errored for NULL lazy data
  ## ::: does not apply to data sets:
  tools::assertError(is.null(pkgA:::nilData))
} else message("'pkgA' not in 'myLib'")

## Check error from invalid logical field in DESCRIPTION:
(okA <- dir.exists(pkgApath) &&file.exists(DN <- file.path(pkgApath, "DESCRIPTION")))
if(okA) {
  Dlns <- readLines(DN); i <- grep("^LazyData:", Dlns)
  Dlns[i] <- paste0(Dlns[i], ",") ## adding a ","
  writeLines(Dlns, con = DN) ##      -----------------                                 ----
  if(interactive()) { ## << "FIXME!"  This (sink(.) ..) fails, when run via 'make'.
    ## install.packages() should give "the correct" error but we cannot catch it
    ## One level lower is not much better, needing sink() as capture.output() fails
    ftf <- file(tf <- tempfile("inst_pkg"), open = "wt")
    sink(ftf); sink(ftf, type = "message")# "message" should be sufficient
    eval(instEXPR)
    sink(type="message"); sink()## ; close(ftf); rm(ftf)# end sink()
    writeLines(paste(" ", msgs <- readLines(tf)))
    message(err <- grep("^ERROR:", msgs, value=TRUE))
    stopifnot(exprs = {
        length(err) > 0
        grepl("invalid .*LazyData .*DESCRIPTION", err)
    })
  } else {
      message("non-interactive -- tools:::.install_packages(..) : ")
      try( eval(instEXPR) ) # showing the error message in the *.Rout file
  }
} else message("pkgA/DESCRIPTION  not available")


if(dir.exists(file.path("myLib", "exNSS4"))) {
  require("exNSS4", lib="myLib")
  validObject(dd <- new("ddiM"))
  print(is(dd))  #  5 of them ..
  stopifnot(exprs = { is(dd, "mM") inherits(dd, "mM") })
  ## tests here should *NOT* assume recommended packages,
  ## let alone where they are installed
}

## clean up
rmL <- c("myLib", if(has.symlink) "myLib_2", "myTst", file.path(pkgPath))
if(do.cleanup) {
    for(nm in rmL) unlink(nm, recursive = TRUE)
} else {
    cat("Not cleaning, i.e., keeping ", paste(rmL, collapse=", "), "\n")
}

proc.time()

