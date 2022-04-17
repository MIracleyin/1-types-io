/**
 * File: time.c
 *
 * Author:
 * ID:
 * Date:
 */

int main() {
  /**
   * input example: November 17 1968 Sunday 6 6 6
   * output example: Sun Nov 17 06:06:06 1968
   */
  char month[10] = {};
  int day = 0;
  int year = 0;
  char weekday[10] = {};
  int hour = 0;
  int minute = 0;
  int second = 0;
  scanf("%s %d %d %s %d %d %d", month, &day, &year, weekday, &hour, &minute, &second);
  printf("%.3s %.3s %d %.2d:%.2d:%.2d %d", weekday, month, day, hour, minute, second, year);

  return 0;
}