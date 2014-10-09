#include <vector>
#include <iostream>

std::vector<double> cxxadd(std::vector<double> &a, std::vector<double> &b)
{
  std::vector<double> ret(a.size());
  ret[0] = a[0] + b[0];
  return ret;
}
