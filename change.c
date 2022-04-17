/**
 * File: change.c
 *
 * Author:
 * ID:
 * Date:
 */

int main() {
  int money = 0;
//  int remained_money = 0;
  scanf("%d", &money);
//  int num_20 = 0;
//  int num_10 = 0;
//  int num_5 = 0;
//  int num_1 = 0;
  int money_form[4] = {20, 10, 5, 1};
  int num;

  for (int i = 0; i < 4; i++) {
    num = money / money_form[i];
    money = money - num * money_form[i];
    printf("%d\n", num);
  }

//  num_20 = money / 20;
//  remained_money = money - 20 * num_20;
//  money = remained_money;
//
//  num_10 = money / 10;
//  remained_money = money - 10 * num_10;
//  money = remained_money;
//
//  num_5 = money / 5;
//  remained_money = money - 5 * num_5;
//  money = remained_money;
//
//  num_1 = money / 1;
//  remained_money = money - 1 * num_1;
//  money = remained_money;
//
//  printf("%d\n", num_20);
//  printf("%d\n", num_10);
//  printf("%d\n", num_5);
//  printf("%d\n", num_1);
//


  return 0;
}

