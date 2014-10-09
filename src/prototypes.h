#ifndef PROTOTYPES_H
#define PROTOTYPES_H

#include <R.h>
#include <Rinternals.h>

#ifdef __cplusplus
extern "C" {
#endif

double cadd(double a, double b);
void F77_NAME(f77add)(double *a, double *b, double *ret);
void F77_NAME(f90add)(double *a, double *b, double *ret);

#ifdef __cplusplus
}
#endif

#endif
