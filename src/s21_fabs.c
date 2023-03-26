#include "s21_math.h"

long double s21_fabs(double x) {
  if (S21_IS_NAN(x)) {
    x = S21_NAN;
  } else if (S21_IS_INF(x)) {
    x = +S21_INF;
  } else if (x == -0) {
    x = +0;
  } else if (x < 0) {
    x = -x;
  }
  return x;
}