#include "s21_math.h"

long double s21_sqrt(double x) {
  long double result;
  if (x < 0) {
    result = -__builtin_nan("");
  } else if (__builtin_isnan(x)) {
    result = __builtin_nan("");
  } else if (__builtin_isinf(x) || x == 0) {
    result = x;
  } else {
    result = s21_pow(x, 0.5);
  }
  return result;
}