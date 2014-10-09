#include <Rcpp.h>
#include <vector>
#include "prototypes.h"

std::vector<double> cxxadd(std::vector<double> &a, std::vector<double> &b);


extern "C" {

Rcpp::NumericVector R_cadd_cxx(Rcpp::NumericVector a, Rcpp::NumericVector b)
{
  Rcpp::NumericVector ret(a.size());
  ret[0] = cadd(a[0], b[0]);
  
  return ret;
}


Rcpp::NumericVector R_f77add_cxx(Rcpp::NumericVector a, Rcpp::NumericVector b)
{
  Rcpp::NumericVector ret(a.size());
  F77_CALL(f77add)(a.begin(), b.begin(), ret.begin());
  
  return ret;
}


Rcpp::NumericVector R_f90add_cxx(Rcpp::NumericVector a, Rcpp::NumericVector b)
{
  Rcpp::NumericVector ret(a.size());
  F77_CALL(f90add)(a.begin(), b.begin(), ret.begin());
  
  return ret;
}


SEXP R_cxxadd_cxx(SEXP a, SEXP b)
{
  std::vector<double> avec = Rcpp::as<std::vector<double> >(a);
  std::vector<double> bvec = Rcpp::as<std::vector<double> >(b);
  
  std::vector<double> ret = cxxadd(avec, bvec);
  
  return Rcpp::wrap(ret);
}


}
