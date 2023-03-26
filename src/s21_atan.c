

#include "s21_math.h"

long double s21_atan(double x) {  // |x| <= 1
  if (S21_IS_NAN(x)) {
    return S21_NAN;
  }
  long double result;
  if (S21_IS_INF(x) && x > 0) {
    result = +S21_PI / 2;
  } else if (S21_IS_INF(x) && x < 0) {
    result = -S21_PI / 2;
  } else if (x == POS_ZERO || x == NEG_ZERO) {
    result = x;
  } else if (s21_fabs(x) > 0.999 && s21_fabs(x) <= 1) {
    result = s21_asin((x) / (s21_sqrt(1 + x * x)));  // change to our
  } else {
    int is_abs_more_than_one = 0;
    int is_negative = 0;
    if (x < 0) {
      is_negative = 1;
      x = -x;
    }
    if (s21_fabs(x) > 1) {  // atan(1/x) + atan(x) = PI/2
      is_abs_more_than_one = 1;
      x = 1. / x;
    }
    result = x;
    long double temp = x;
    int i = 3;
    while (s21_fabs(temp) > EPSILON) {  //
      temp *= x * x * (i - 2);
      temp /= (-1.0 * i);
      // printf("%Lf\n", temp);
      result += temp;
      i += 2;
    }
    if (is_abs_more_than_one == 1) {
      result = S21_PI / 2 - result;
    }
    if (is_negative == 1) {
      result *= -1;
    }
  }
  return result;
}
// sqrt used

// int main() {
//     long double value = 0.999;
//     printf("%.12Lf\n", s21_atan(value));
//     printf("%.12f\n\n", atan(value));
//     long double value1 = 0.22;
//     printf("%Lf\n", s21_atan(value1));
//     printf("%f\n", atan(value1));
//     return 0;
// }