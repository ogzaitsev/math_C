#include "s21_math.h"

long double s21_acos(double x) {  // |x| <= 1 done
  if (S21_IS_NAN(x) || S21_IS_INF(x) || s21_fabs(x) > 1) {
    return S21_NAN;
  }
  long double result;
  if (x == +1) {
    result = POS_ZERO;
  } else {
    result = (S21_PI / 2.0) - s21_asin(x);
  }
  return result;
}