#include "s21_math.h"
// Trying  to  take the absolute value of the most negative integer is not
// defined.
int s21_abs(int x) {  // done
  if (x < 0) {
    x = -x;
  }
  return x;
}