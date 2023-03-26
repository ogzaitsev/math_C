#include "s21_math.h"

long double s21_pow(double base, double pow) {
  long double result = 666;
  if (pow == 0 || base == 1) {
    result = 1;
  } else if (base == 0 && pow > 0) {
    result = 0;
  } else if (S21_IS_NAN(base) || S21_IS_NAN(pow)) {
    result = S21_NAN;
  } else if (base < 0 && s21_fabs(s21_fmod(pow, 1.0)) > 0) {
    result = -S21_NAN;
  } else if (S21_IS_INF(base) && base < 0 &&
             !(s21_fabs(s21_fmod(pow, 2.0) - 1) > 0)) {
    result = -S21_INF;
  } else if (S21_IS_INF(base)) {
    result = pow > 0 ? S21_INF : 0.0;
  } else if (base == 0 && pow < 0) {
    result = S21_INF;
  } else if (S21_IS_INF(pow) && base == -1) {
    result = 1;
  } else if (S21_IS_INF(pow) && ((pow > 0 && (s21_fabs(base) > 1)) ||
                                 ((pow < 0 && (s21_fabs(base) < 1))))) {
    result = S21_INF;
  } else if (S21_IS_INF(pow) && ((pow > 0 && (s21_fabs(base) < 1)) ||
                                 ((pow < 0 && (s21_fabs(base) > 1))))) {
    result = 0.;
  } else {
    int neg_base = base < 0;
    int neg_pow = pow < 0;
    if (neg_base) base = -base;
    if (neg_pow) pow = -pow;
    result = s21_exp(pow * s21_log(base));
    if (neg_base && s21_fabs(s21_fmod(pow, 2.0)) > 0) {
      result = -result;
    }
    if (neg_pow) {
      result = 1. / result;
    }
  }
  return result;
}