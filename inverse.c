/**
 * File: inverse.c
 *
 * Author:
 * ID:
 * Date:
 */

int main() {
  int number = 0;
  int digit[3] = {0};
  scanf("%d", &number);

  int i = 0;
  while (number != 0) {
    digit[i] = number % 10;
    number /= 10;
    i++;
  }

  for (int j = 0; j < 3; j++) {
    printf("%d", digit[j]);
  }

  return 0;
}

