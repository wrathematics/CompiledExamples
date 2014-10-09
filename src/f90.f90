subroutine f90add(a, b, ret)
  implicit none
  integer, parameter :: dbl = selected_real_kind(15)
  real(kind=dbl), intent(in) :: a, b
  real(kind=dbl), intent(out) :: ret
  
  ret = a + b
end subroutine
