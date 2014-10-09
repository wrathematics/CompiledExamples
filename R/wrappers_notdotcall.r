cadd_dotc <- function(a, b)
{
  ret <- .C("cadd_dotc", as.double(a), as.double(b), ret=double(1))
  ret$ret
}


f77add_dotfortran <- function(a, b)
{
  ret <- .Fortran("f77add", as.double(a), as.double(b), ret=double(1))
  ret$ret
}


f90add_dotfortran <- function(a, b)
{
  ret <- .Fortran("f90add", as.double(a), as.double(b), ret=double(1))
  ret$ret
}

