//
// Created by Aaron Berry on 5/24/21.
//

#include <iostream>
#include "includes/LogDuration.h"

int main() {
  int a[10000] = {};
  int i, y, need_f;
  int max_shape = 1;

  std::cout << "Please enter a natural number between 0 and 3000: ";
  std::cin >> need_f;
  a[0] = 1;
  {
    LOG_DURATION("Testing algo");
    while (need_f) {
      i = y = 0;
      while (i < max_shape) {
        a[i] = a[i] * need_f + y;
        y = a[i] / 10;
        a[i++] %= 10;
        if (y && i == max_shape)
          ++max_shape;
      }
      --need_f;
    }
  }
  std::cout << "\nFactorial Result:" << std::endl ;
  for (i = max_shape - 1; i >= 0; i--)
    std::cout << a[i];
  return 0;
}
