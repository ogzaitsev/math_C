#include "s21_math.h"

long double s21_simple_pow(double base, int exp) {  // optional for other funcs
  long double result = 1;
  if (exp == 0) {
    result = 1;
  } else {
    for (int i = 0; i < exp; i++) {
      result *= base;
    }
  }
  return result;
}