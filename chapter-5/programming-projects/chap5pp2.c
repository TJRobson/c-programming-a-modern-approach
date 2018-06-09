/* Chapter 5 Programming Project */

/* Program asks user for a 24hr time, then displays it in its 12hr from */
#include <stdio.h>

int main(void)
{
  int hrs, mins;

  printf("Enter a 24-hour time (21:15): ");
  scanf("%d:%d", &hrs, &mins);
  hrs - 12 <= 0 ? printf("Equivalent 12-hour time: %d:%dam\n", hrs, mins)
                : printf("Equivalent 12-hour time: %d:%dpm\n", hrs-12, mins);

  return 0;
}
