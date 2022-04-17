/**
 * File: pi.c
 *
 * Author:
 * ID:
 * Date:
 */
#include <stdio.h>
#include <math.h>

int main() {
  double PI_1 = 0;
  PI_1 = 4 * (4 * atan(1.0/5) - atan(1.0/239));
  printf("%.15lf\n", PI_1);
  double PI_2 = 0;
  PI_2 = log(pow(640320, 3) + 744)/ sqrt(163);
  printf("%.15lf", PI_2);

  return 0;
}