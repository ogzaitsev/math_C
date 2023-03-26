#include "s21_math.h"

long double s21_cos(double x) {  // done
  if (S21_IS_NAN(x) || S21_IS_INF(x)) {
    return S21_NAN;
  }
  x = s21_fmod(x, 2 * S21_PI);  // change to our fmod
  long double result = 0;
  long double temp = 1;
  int i = 2;
  while (s21_fabs(temp) > EPSILON) {
    result += temp;
    temp *= x * x;
    temp /= -1.0 * i * (i - 1);
    i += 2;
  }
  // printf("cos = %Lf\n", result);
  return result;
}
// fmod !