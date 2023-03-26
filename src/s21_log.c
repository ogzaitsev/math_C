#include "s21_math.h"

long double s21_log(double x) {
  long double result = 0;
  double e_pow = 0;
  if (S21_IS_NAN(x)) {
    if (x < 0) {
      result = -S21_NAN;
    } else {
      result = S21_NAN;
    }
  } else if (S21_IS_INF(x)) {
    if (x < 0) {
      result = -S21_NAN;
    } else {
      result = S21_INF;
    }
  } else if (x < 0) {
    result =
        -S21_NAN;  // positive or negative NaN? Doesnt work
                   // https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
  } else if (x == 0) {
    result = -S21_INF;
  } else {
    while (x >= S21_EXP) {
      e_pow++;
      x /= S21_EXP;
    }
    for (int i = 0; i < 100; i++) {
      result = result + 2 * (x - s21_exp(result)) / (x + s21_exp(result));
    }
  }
  return e_pow + result;
}