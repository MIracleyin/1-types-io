/**
 * File: equation.c
 *
 * Author:
 * ID:
 * Date:
 */

#include <stdio.h>
#include <math.h>

int main() {
  // Well, `a`, `b`, `c` are actually meaningful identifiers here.
  int a = 0;
  int b = 0;
  int c = 0;
  scanf("%d%d%d", &a, &b, &c);

  double delta = 0.0;
  double x1 = 0.0;
  double x2 = 0.0;
  delta = pow(b, 2) - 4 * a * c;
  if (delta < 0) {
    printf("delta = %lf, no real number result", delta);
  } else {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("%.3f\n", x1);
    printf("%.3f", x2);
  }


  printf("%d%d%d", a, b, c);

  return 0;
}