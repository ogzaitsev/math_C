#include "s21_math.h"

long double s21_floor(double x) {
  if (S21_IS_INF(x) || S21_IS_NAN(x)) {
    return x;
  }
  long long int int_x = x;
  double result = int_x;
  if (x < 0 && x < result) {
    result--;
  }
  return result;
}