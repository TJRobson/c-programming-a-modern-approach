/* Chapter 5 Programming Project 8 */
#include <stdio.h>

int main(void)
{
  int hrs, mins, mins_since_midnight, depart = 0,
      f1, f2, f3, f4, f5, f6, f7, f8;

  f1 = 8*60; f2 = 9*60+43; f3 = 11*60+12; f4 = 12*60+47;
  f5 = 14*60; f6 = 15*60+45; f7 = 19*60; f8 = 21*60+45;

  printf("Enter a 24-hour time (hrs:mins): ");
  scanf("%d:%d", &hrs, &mins);

  mins_since_midnight = hrs * 60 + mins;

  if (mins_since_midnight > (24*60) || mins_since_midnight < 0) {
    printf("\nEntered invalid time.\n");
  } else { mins_since_midnight <= f1 + ((f2 - f1)/2)
          ? depart = 8
          : mins_since_midnight <= f2 + ((f3 - f2)/2)
          ? depart = 9
          : mins_since_midnight <= f3 + ((f4 - f3)/2)
          ? depart = 11
          : mins_since_midnight <= f4 + ((f5 - f4)/2)
          ? depart = 12
          : mins_since_midnight <= f5 + ((f6 - f5)/2)
          ? depart = 14
          : mins_since_midnight <= f6 + ((f7 - f6)/2)
          ? depart = 15
          : mins_since_midnight <= f7 + ((f8 - f7)/2)
          ? depart = 19
          : mins_since_midnight > f7 + ((f8 - f7)/2)
          ? depart = 21 : printf("hello!");
    }

    if (depart) {

        printf("\nClosest departure time is ");

        switch (depart) {
          case 8:  printf("8:00 a.m., arriving at 10:16 a.m."); break;
          case 9:  printf("9:43 a.m., arriving at 11:52 a.m."); break;
          case 11: printf("11:19 a.m., arriving at 1:31 p.m."); break;
          case 12: printf("12:47 p.m., arriving at 3:00 p.m."); break;
          case 14: printf("2:00 p.m., arriving at 4:08 p.m."); break;
          case 15: printf("3:45 p.m., arriving at 5:55 p.m."); break;
          case 19: printf("7:00 p.m., arriving at 9:20 p.m."); break;
          case 21: printf("9:45 p.m., arriving at 11:58 p.m."); break;
        }
        printf("\n");
    }

  return 0;
}
