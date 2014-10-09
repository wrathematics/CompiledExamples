library(CompiledExamples)


a <- 1
b <- 2

# C wrappers
cadd_cwrap(a, b)
f77add_cwrap(a, b)
f90add_cwrap(a, b)

# C++ wrappers
cadd_cwrap(a, b)
f77add_cwrap(a, b)
f90add_cwrap(a, b)
cxxadd_cxxwrap(a, b)

# No wrappers
cadd_dotc(a, b)
f77add_dotfortran(a, b)
f90add_dotfortran(a, b)
