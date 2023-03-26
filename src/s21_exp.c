#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 0;
  if (__builtin_isnan(x)) {
    if (x < 0) {
      result = -__builtin_nan("");
    } else {
      result = __builtin_nan("");
    }
  } else if (__builtin_isinf(x) || s21_fabs(x) > 709) {
    if (x < 0) {
      result = 0;
    } else {
      result = __builtin_inf();
    }
  } else {
    long double diff = 1;
    long long i = 1;
    while (s21_fabs(diff) > 1.0e-17) {
      result += diff;
      diff *= x;
      diff /= i;
      i++;
    }
  }
  return result;
}