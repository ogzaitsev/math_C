#include "s21_math.h"

long double s21_fmod(double dividend, double divisor) {
  long double result;
  if (!S21_IS_NAN(dividend) && !S21_IS_NAN(divisor) && !S21_IS_INF(dividend) &&
      !S21_IS_INF(divisor) && divisor != 0) {
    long long int int_quotient = dividend / divisor;
    result = (long double)dividend - (long double)divisor * int_quotient;
  } else if (!S21_IS_INF(dividend) && S21_IS_INF(divisor)) {
    result = dividend;
  } else {
    result = S21_NAN;
  }
  return result;
}