/* Chapter 7 Programming Project 8 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int input_num, temp;
  char ch;

  printf("\nEnter a 12-hour time (00:00am): ");
  /* Takes users input and turns it into a
     series of numbers the represent a time
     eg 130 = 1:30am or 1330 = 1:30pm | input_num
  */
  while ((ch = getchar()) != '\n') {
    if(ch == ' ') {
      continue;
    } else if(ch >= '0' && ch <= '9') {
      temp = ch - '0';
      int p = 10;
      while(temp >= p){
        p *= 10;
      }
      input_num = input_num * p + temp;
    } else {
      ch = toupper(ch);
      ch == 'P' ? input_num += 1200 : ((input_num / 100) == 12)
                ? input_num -= 1200 : input_num;
    }
  }

  /* Rest of Program is from Chapter 5 Programming Project */

  int hrs = input_num / 100, mins = input_num % 100,
      depart = 0,
      mins_since_midnight = hrs * 60 + mins,
      f1, f2, f3, f4, f5, f6, f7, f8;

  f1 = 8*60; f2 = 9*60+43; f3 = 11*60+12; f4 = 12*60+47;
  f5 = 14*60; f6 = 15*60+45; f7 = 19*60; f8 = 21*60+45;

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
          ? depart = 21 : depart;
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
