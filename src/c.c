double cadd(double a, double b)
{
  return a+b;
}

void cadd_dotc(double *a, double *b, double *ret)
{
  *ret = cadd(*a, *b);
}
