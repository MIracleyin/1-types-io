/**
 * File: weekday.c
 *
 * Author:
 * ID:
 * Date:
 */

#include <stdio.h>
#include <math.h>
//2021 10 12
// wx's brithday is a bug

int main() {
  int year = 0;
  int month = 0;
  int day = 0;

  int Y = 0;

  int y = 0;
  int c = 0;
  int d = 0;
  int m = 0;

  int w = 0;

  int year_list[4] = {};

  scanf("%d %d %d", &year, &month, &day);

  if (month <= 2) {
    Y -= 1;
  } else {
    Y = year;
  }

  int reminder = 0;
  int i = 1;
  while (Y > 0) {
    reminder = Y % 10;
    Y /= 10;
    year_list[4 - i] = reminder;
    i++;
  }
  y = year_list[2] * 10 + year_list[3];
  c = year_list[0] * 10 + year_list[1];

  m = (month + 10) % 12;

  d = day;

  w =  (int) (d + floor(2.6 * m - 0.2) + y + floor(y / 4) + floor(c / 4) - 2 * c) % 7;

  printf("%d", w);

  return 0;
}