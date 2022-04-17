/**
 * File: ascii.c
 *
 * Author:
 * ID:
 * Date:
 */
#include <ctype.h>

int main() {
  int number = 0;
  scanf("%d", &number);

  printf("%d\n", number);
  printf("%c\n", number);
  printf("%c\n", number - 32);
//  printf("%c\n", toupper(number));

  return 0;
}