/* Chapter 7 Programming Project 8 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int input_num = 0, temp, hrs, mins;
  char ch;

  printf("\nEnter a 12-hour time (00:00am): ");
  /* Takes users input and turns it into a
     series of numbers that represent a time
     eg 130 = 1:30am or 1330 = 1:30pm | input_num
  */
  while ((ch = getchar()) != '\n') {
    if(ch == ' ') {
      continue;
    } else if(ch >= '0' && ch <= '9') {
      /* Concat each digit */
      temp = ch - '0';
      int p = 10;
      while(temp >= p){
        p *= 10;
      }
      input_num = input_num * p + temp;
      
    } else {
      ch = toupper(ch);
      ch == 'A' && ((input_num / 100) == 12) ? input_num -= 1200
                                             : input_num;
      ch == 'P' && ((input_num / 100) != 12) ? input_num += 1200
                                             : input_num;
    }
  }

  hrs = input_num / 100; mins = input_num % 100;

  if(mins > 59 || hrs >= 24){
    printf("Invalid 12-Hour time\n");
  } else {
    printf("Equivalent 24-hour time: ");
    hrs < 10 ? printf("%d%d:", 0, hrs) : printf("%d:", hrs);
    mins == 0 ? printf("%d%d\n", 0, mins) : printf("%d\n", mins);
  }

  return 0;
}
