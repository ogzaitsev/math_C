#include "s21_math.h"

long double s21_tan(double x) {  // done
  if (S21_IS_NAN(x) || S21_IS_INF(x)) {
    return S21_NAN;
  }
  return (s21_sin(x) / s21_cos(x));
}
// huge_val
// huge_valf
// huge_vall