#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <math.h>  // delete
#include <stdio.h>
#include <stdlib.h>

#define S21_PI 3.14159265358979323846
#define S21_EXP 2.718281828459045
#define S21_NAN (__builtin_nanf(""))
#define S21_INF (__builtin_inff())
#define S21_IS_NAN(x) (__builtin_isnan(x))
#define S21_IS_INF(x) (__builtin_isinf(x))
#define EPSILON 1.0e-20
#define POS_ZERO +0.0
#define NEG_ZERO -0.0

long double s21_simple_pow(double base, int exp);  // optional for other funcs
int s21_abs(int x);
long double s21_fabs(double x);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);
long double s21_fabs(double x);
long double s21_sqrt(double x);
long double s21_pow(double base, double pow);
long double s21_fmod(double dividend, double divisor);
long double s21_log(double x);
long double s21_exp(double x);
long double s21_floor(double x);
long double s21_ceil(double x);

#endif  // SRC_S21_STRING_H_