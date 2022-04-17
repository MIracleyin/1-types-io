/**
 * File: gray.c
 *
 * Author:
 * ID:
 * Date:
 */

#include <stdio.h>

int main() {
  int number = 0;
  int res[5] = {0};
  int gray[4] = {};
  scanf("%d", &number);

//  int binay_number = 0;
  int reminder = 0;
//  int i = 1;
  int ii = 1;
  res[0] = 0;
  while (number != 0) {
    reminder = number % 2;
    number /= 2;

    res[5 - ii] = reminder;
    ii++;
//    binay_number += reminder * i;
//    i *= 10;
  }
//  for (int j = 0; j < 5; j++) {
//    printf("%d", res[j]);
//  }
//  printf("\n");

  gray[0] = res[0];
  for (int j = 1; j < 5; j++) {
    gray[j] = res[j - 1] ^ res[j];
    printf("%d", gray[j]);
  }

  return 0;
}

