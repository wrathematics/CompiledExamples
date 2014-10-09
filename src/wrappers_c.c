#include <R.h>
#include <Rinternals.h>
#include "prototypes.h"


SEXP R_cadd(SEXP a, SEXP b)
{
  SEXP ret;
  PROTECT(ret = allocVector(REALSXP, 1));
  
  REAL(ret)[0] = cadd(REAL(a)[0], REAL(b)[0]);
  
  UNPROTECT(1);
  return ret;
}


SEXP R_f77add(SEXP a, SEXP b)
{
  SEXP ret;
  PROTECT(ret = allocVector(REALSXP, 1));
  
  F77_CALL(f77add)(REAL(a), REAL(b), REAL(ret));
  
  UNPROTECT(1);
  return ret;
}


SEXP R_f90add(SEXP a, SEXP b)
{
  SEXP ret;
  PROTECT(ret = allocVector(REALSXP, 1));
  
  F77_CALL(f90add)(REAL(a), REAL(b), REAL(ret));
  
  UNPROTECT(1);
  return ret;
}

