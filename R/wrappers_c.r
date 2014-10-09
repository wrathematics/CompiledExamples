cadd_cwrap <- function(a, b)
{
  .Call("R_cadd", as.double(a), as.double(b))
}


f77add_cwrap <- function(a, b)
{
  .Call("R_f77add", as.double(a), as.double(b))
}


f90add_cwrap <- function(a, b)
{
  .Call("R_f90add", as.double(a), as.double(b))
}

