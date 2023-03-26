#include "smain.h"

#define SIZE 512

START_TEST(s21_abs_test) {  // done +
  int val1 = 0;
  int val2 = -69;
  int val3 = 1337;
  // max int and min int
  ck_assert_int_eq(s21_abs(val1), abs(val1));
  ck_assert_int_eq(s21_abs(val2), abs(val2));
  ck_assert_int_eq(s21_abs(val3), abs(val3));
}
END_TEST

START_TEST(s21_acos_test) {  // done +
  double val1 = 0.34567;
  double val2 = 0.999999;
  double val3 = -0.153648;
  double val4 = 2;
  double val5 = -40;
  double val6 = S21_NAN;
  double val7 = POS_ZERO;
  double val8 = NEG_ZERO;
  double val9 = S21_INF;
  double val10 = -S21_INF;
  double val11 = +1;
  double val12 = 1;
  double val13 = -1;
  ck_assert_ldouble_eq_tol(s21_acos(val1), acos(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_acos(val2), acos(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_acos(val3), acos(val3), 1E-6);
  ck_assert_ldouble_nan(s21_acos(val4));
  ck_assert_ldouble_nan(s21_acos(val5));
  ck_assert_ldouble_nan(s21_acos(val6));
  ck_assert_ldouble_eq_tol(s21_acos(val7), acos(val7), 1E-6);
  ck_assert_ldouble_eq_tol(s21_acos(val8), acos(val8), 1E-6);
  ck_assert_ldouble_nan(s21_acos(val9));
  ck_assert_ldouble_nan(s21_acos(val10));
  ck_assert_ldouble_eq_tol(s21_acos(val11), acos(val11), 1E-6);
  ck_assert_ldouble_eq_tol(s21_acos(val12), acos(val12), 1E-6);
  ck_assert_ldouble_eq_tol(s21_acos(val13), acos(val13), 1E-6);
}
END_TEST

START_TEST(s21_asin_test) {  // done +
  double val1 = 0.34567;
  double val2 = 0.999999;
  double val3 = -0.153648;
  double val4 = 2;
  double val5 = -40;
  double val6 = S21_NAN;
  double val7 = POS_ZERO;
  double val8 = NEG_ZERO;
  double val9 = S21_INF;
  double val10 = -(S21_INF);
  double val11 = 1;
  double val12 = -1;
  double val13 = 1000000;
  ck_assert_ldouble_eq_tol(s21_asin(val1), asin(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_asin(val2), asin(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_asin(val3), asin(val3), 1E-6);
  ck_assert_ldouble_nan(s21_asin(val4));
  ck_assert_ldouble_nan(s21_asin(val5));
  ck_assert_ldouble_nan(s21_asin(val6));
  ck_assert_ldouble_eq_tol(s21_asin(val7), asin(val7), 1E-6);
  ck_assert_ldouble_eq_tol(s21_asin(val8), asin(val8), 1E-6);
  ck_assert_ldouble_nan(s21_asin(val9));
  ck_assert_ldouble_nan(s21_asin(val10));
  ck_assert_ldouble_eq_tol(s21_asin(val11), asin(val11), 1E-6);
  ck_assert_ldouble_eq_tol(s21_asin(val12), asin(val12), 1E-6);
  ck_assert_ldouble_eq_tol(s21_asin(val12), asin(val12), 1E-6);
}
END_TEST

START_TEST(s21_atan_test) {  // done +
  double val1 = 0.34567;
  double val2 = 0.999999;
  double val3 = -0.153648;
  double val4 = 2;
  double val5 = -40;
  double val6 = S21_NAN;
  double val7 = POS_ZERO;
  double val8 = NEG_ZERO;
  double val9 = S21_INF;
  double val10 = -S21_INF;
  double val12 = 1;
  double val13 = -1;
  double val14 = 100000;
  double val15 = -100000;
  double val16 = 0.99999;
  ck_assert_ldouble_eq_tol(s21_atan(val1), atan(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val2), atan(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val3), atan(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val4), atan(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val5), atan(val5), 1E-6);
  ck_assert_ldouble_nan(s21_atan(val6));
  ck_assert_ldouble_eq_tol(s21_atan(val7), atan(val7), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val8), atan(val8), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val9), atan(val9), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val10), atan(val10), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val12), atan(val12), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val13), atan(val13), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val14), atan(val14), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val15), atan(val15), 1E-6);
  ck_assert_ldouble_eq_tol(s21_atan(val16), atan(val16), 1E-6);
}
END_TEST

START_TEST(s21_sin_test) {  // done +
  double val1 = 9999999;
  double val2 = -9999999;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  double val8 = S21_PI;
  double val9 = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_sin(val1), sin(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_sin(val2), sin(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_sin(val3), sin(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_sin(val4), sin(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_sin(val5), sin(val5), 1E-6);
  ck_assert_ldouble_nan(s21_sin(val6));
  ck_assert_ldouble_nan(s21_sin(val7));
  ck_assert_ldouble_eq_tol(s21_sin(val8), sin(val8), 1E-6);
  ck_assert_ldouble_eq_tol(s21_sin(val9), sin(val9), 1E-6);
}
END_TEST

START_TEST(s21_ceil_test) {  // done +
  double val1 = 9999999;
  double val2 = -9999999;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  ck_assert_ldouble_eq_tol(s21_ceil(val1), ceil(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_ceil(val2), ceil(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_ceil(val3), ceil(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_ceil(val4), ceil(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_ceil(val5), ceil(val5), 1E-6);
  ck_assert_ldouble_infinite(s21_ceil(val7));
  ck_assert_ldouble_nan(s21_ceil(val6));
}
END_TEST

START_TEST(s21_floor_test) {  // done +
  double val1 = 9999999;
  double val2 = -9999999;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  ck_assert_ldouble_eq_tol(s21_floor(val1), floor(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_floor(val2), floor(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_floor(val3), floor(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_floor(val4), floor(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_floor(val5), floor(val5), 1E-6);
  ck_assert_ldouble_infinite(s21_floor(val7));
  ck_assert_ldouble_nan(s21_floor(val6));
}
END_TEST

START_TEST(s21_exp_test) {  // done +
  double val1 = 9999999;
  double val2 = -9999999;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  ck_assert_ldouble_infinite(s21_exp(val1));
  ck_assert_ldouble_eq_tol(s21_exp(val2), exp(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_exp(val3), exp(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_exp(val4), exp(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_exp(val5), exp(val5), 1E-6);
  ck_assert_ldouble_infinite(s21_exp(val7));
  ck_assert_ldouble_nan(s21_exp(val6));
  ck_assert_ldouble_nan(s21_exp(-val6));
}
END_TEST

START_TEST(s21_sqrt_test) {  // done +
  double val1 = 9999999;
  double val2 = -9999999;
  // double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  ck_assert_ldouble_eq_tol(s21_sqrt(val1), sqrt(val1), 1E-6);
  ck_assert_ldouble_nan(s21_sqrt(val2));
  ck_assert_ldouble_eq_tol(s21_sqrt(val4), sqrt(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_sqrt(val5), sqrt(val5), 1E-6);
  ck_assert_ldouble_infinite(s21_sqrt(val7));
  ck_assert_ldouble_nan(s21_sqrt(val6));
  ck_assert_ldouble_nan(s21_sqrt(-val6));
}
END_TEST

START_TEST(s21_log_test) {  // done +
  double val1 = 9999999;
  double val2 = 1;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val8 = -S21_NAN;
  double val7 = S21_INF;
  double val9 = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_log(val1), log(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_log(val2), log(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_log(val4), log(val4), 1E-6);
  ck_assert_ldouble_infinite(s21_log(val5));
  ck_assert_ldouble_infinite(s21_log(val7));
  ck_assert_ldouble_nan(s21_log(val6));
  ck_assert_ldouble_nan(s21_log(-val6));
  ck_assert_ldouble_nan(s21_log(val3));
  ck_assert_ldouble_nan(s21_log(val8));
  ck_assert_ldouble_nan(s21_log(val9));
}
END_TEST

START_TEST(s21_fmod_test) {  // done +
  double val1 = 9999999;
  double val2 = -9.999999;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  double val8 = 16.8325;
  ck_assert_ldouble_eq_tol(s21_fmod(val1, val2), fmod(val1, val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_fmod(val2, val3), fmod(val2, val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_fmod(val8, val4), fmod(val8, val4), 1E-6);
  ck_assert_ldouble_nan(s21_fmod(val4, val5));
  ck_assert_ldouble_nan(s21_fmod(val5, val6));
  ck_assert_ldouble_nan(s21_fmod(val5, val5));
  ck_assert_ldouble_nan(s21_fmod(val7, val5));
  ck_assert_ldouble_eq_tol(s21_fmod(val5, val7), fmod(val5, val7), 1E-6);
  ck_assert_ldouble_eq_tol(s21_fmod(val5, val4), fmod(val5, val4), 1E-6);
  ck_assert_ldouble_nan(s21_fmod(val3, val5));
  ck_assert_ldouble_nan(s21_fmod(val6, val5));
}
END_TEST

START_TEST(s21_cos_test) {  // not done +
  double val1 = 9999999;
  double val2 = -9999999;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  double val8 = S21_PI;
  double val9 = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(val1), cos(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_cos(val2), cos(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_cos(val3), cos(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_cos(val4), cos(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_cos(val5), cos(val5), 1E-6);
  ck_assert_ldouble_nan(s21_cos(val6));
  ck_assert_ldouble_nan(s21_cos(val7));
  ck_assert_ldouble_eq_tol(s21_cos(val8), cos(val8), 1E-6);
  ck_assert_ldouble_eq_tol(s21_cos(val9), cos(val9), 1E-6);
}
END_TEST

START_TEST(s21_tan_test) {  // not done +
  double val1 = 9999999;
  double val2 = -9999999;
  double val3 = -1.789;
  double val4 = 1.789;
  double val5 = 0;
  double val6 = S21_NAN;
  double val7 = S21_INF;
  double val8 = S21_PI;
  // double val9 = S21_PI/2;
  ck_assert_ldouble_eq_tol(s21_tan(val1), tan(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_tan(val2), tan(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_tan(val3), tan(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_tan(val4), tan(val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_tan(val5), tan(val5), 1E-6);
  ck_assert_ldouble_nan(s21_tan(val6));
  ck_assert_ldouble_nan(s21_tan(val7));
  ck_assert_ldouble_eq_tol(s21_tan(val8), tan(val8), 1E-6);
  // ck_assert_ldouble_eq_tol(s21_tan(val9), tan(val9), 1E-6);
}
END_TEST

START_TEST(s21_fabs_test) {  // not done +
  double val1 = 0.34567;
  double val2 = 0.999999;
  double val3 = -0.153648;
  double val4 = 0;
  double val5 = S21_NAN;
  double val6 = -0;
  double val7 = +0;
  double val8 = -S21_INF;
  double val9 = +S21_INF;
  ck_assert_ldouble_eq_tol(s21_fabs(val1), fabs(val1), 1E-6);
  ck_assert_ldouble_eq_tol(s21_fabs(val2), fabs(val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_fabs(val3), fabs(val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_fabs(val4), fabs(val4), 1E-6);
  ck_assert_ldouble_nan(s21_fabs(val5));
  ck_assert_ldouble_eq_tol(s21_fabs(val6), fabs(val6), 1E-6);
  ck_assert_ldouble_eq_tol(s21_fabs(val7), fabs(val7), 1E-6);
  ck_assert_ldouble_infinite(s21_fabs(val8));
  ck_assert_ldouble_infinite(s21_fabs(val9));
}
END_TEST

START_TEST(s21_pow_test) {
  double val1 = 0.34567;
  double val2 = 0.999999;
  double val3 = -0.153648;
  double val4 = 2;
  double val5 = -40;
  double val6 = __builtin_nan("");
  double val7 = +0.;
  double val8 = -0.;
  double val9 = __builtin_inf();
  double val10 = -(__builtin_inf());
  double val11 = 1;
  double val12 = -1;
  double val13 = 999999;
  double val14 = 1.457;
  double val15 = -1.999999;
  double val16 = -__builtin_nan("");
  double val17 = 3;
  double val18 = 5.0;
  double val19 = -7;
  double val20 = -3.333333;
  double val21 = 10;
  double val22 = -8.455555;

  ck_assert_ldouble_eq_tol(s21_pow(val1, val2), pow(val1, val2), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val2, val3), pow(val2, val3), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val3, val4), pow(val3, val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val11, val4), pow(val11, val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val12, val4), pow(val12, val4), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val12, val17), pow(val12, val17), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val12, val9), pow(val12, val9), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val13, val11), pow(val13, val11), 1E-6);
  ck_assert_ldouble_eq_tol(s21_pow(val7, val4), pow(val7, val4), 1E-6);
  ck_assert_ldouble_nan(s21_pow(val6, 2.));
  ck_assert_ldouble_nan(s21_pow(val6, -2.));
  ck_assert_ldouble_eq(s21_pow(val6, 0.), pow(val6, 0.));
  ck_assert_ldouble_nan(s21_pow(val6, 1.));
  ck_assert_ldouble_nan(s21_pow(val6, val10));
  ck_assert_ldouble_nan(s21_pow(val16, 2.));
  ck_assert_ldouble_nan(s21_pow(val16, -2.));
  ck_assert_ldouble_nan(s21_pow(val16, val6));
  ck_assert_ldouble_nan(s21_pow(val16, val10));
  ck_assert_ldouble_nan(s21_pow(val16, val6));
  ck_assert_ldouble_nan(s21_pow(val4, val6));
  ck_assert_ldouble_nan(s21_pow(val7, val6));
  ck_assert_ldouble_nan(s21_pow(val8, val6));
  ck_assert_ldouble_nan(s21_pow(val10, val6));
  ck_assert_ldouble_eq(s21_pow(val11, val6), pow(val11, val6));
  ck_assert_ldouble_infinite(s21_pow(val7, val5));
  ck_assert_ldouble_infinite(s21_pow(val10, val17));
  ck_assert_ldouble_infinite(s21_pow(val1, val10));
  ck_assert_ldouble_infinite(s21_pow(val9, val17));
  ck_assert_ldouble_eq(s21_pow(val21, val10), pow(val21, val10));
  ck_assert_ldouble_eq(s21_pow(val1, val9), pow(val1, val9));
  ck_assert_ldouble_nan(s21_pow(val20, val14));
  ck_assert_ldouble_eq_tol(s21_pow(val14, val15), pow(val14, val15), 1E-6);
  ck_assert_ldouble_nan(s21_pow(val15, val16));
  ck_assert_ldouble_nan(s21_pow(val16, val17));
  ck_assert_ldouble_eq_tol(s21_pow(val18, val19), pow(val18, val19), 1E-6);
  ck_assert_ldouble_nan(s21_pow(val19, val20));
  ck_assert_ldouble_eq_tol(s21_pow(val21, val22), pow(val21, val22), 1E-6);
}
END_TEST

Suite *st_math_funcs(void) {
  Suite *s = suite_create("st_math_funcs");
  TCase *tc = tcase_create("math_funcs_tc");

  tcase_add_test(tc, s21_abs_test);
  tcase_add_test(tc, s21_acos_test);
  tcase_add_test(tc, s21_asin_test);
  tcase_add_test(tc, s21_atan_test);
  tcase_add_test(tc, s21_cos_test);
  tcase_add_test(tc, s21_sin_test);
  tcase_add_test(tc, s21_tan_test);
  tcase_add_test(tc, s21_fabs_test);
  tcase_add_test(tc, s21_pow_test);
  tcase_add_test(tc, s21_ceil_test);
  tcase_add_test(tc, s21_floor_test);
  tcase_add_test(tc, s21_exp_test);
  tcase_add_test(tc, s21_fmod_test);
  tcase_add_test(tc, s21_sqrt_test);
  tcase_add_test(tc, s21_log_test);
  suite_add_tcase(s, tc);
  return s;
}