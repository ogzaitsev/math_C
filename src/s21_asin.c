#include "s21_math.h"

long double s21_asin(double x) {  // |x| <= 1 done
  if (S21_IS_NAN(x) || S21_IS_INF(x) || s21_fabs(x) > 1) {
    return S21_NAN;
  }
  long double result = x;
  if (x == 1) {
    result = S21_PI / 2;
  } else if (x == -1) {
    result = -S21_PI / 2;
  } else {
    long double temp = x;
    int i = 1;
    while (s21_fabs(temp) > EPSILON) {
      temp *= x * x * s21_simple_pow(2 * i - 1, 2);
      temp /= (2 * i + 1) * 2.0 * i;
      result += temp;
      i++;
    }
  }
  return result;
}
