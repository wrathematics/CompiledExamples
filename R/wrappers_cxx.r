cadd_cxxwrap <- function(a, b)
{
  .Call("R_cadd_cxx", as.double(a), as.double(b))
}


f77add_cxxwrap <- function(a, b)
{
  .Call("R_f77add_cxx", as.double(a), as.double(b))
}


f90add_cxxwrap <- function(a, b)
{
  .Call("R_f90add_cxx", as.double(a), as.double(b))
}


cxxadd_cxxwrap <- function(a, b)
{
  .Call("R_cxxadd_cxx", as.double(a), as.double(b))
}
