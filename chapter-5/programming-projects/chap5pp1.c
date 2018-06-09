/* Chapter 5 Programming project 1 */

/* Program that calculates how many digits a number contains */

#include <stdio.h>

int main(void)
{
  int number, digit = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  if(number < 10){
    digit = 1;
  } else if(number < 100){
    digit = 2;
  } else if(number < 1000){
    digit = 3;
  } else {
    digit = 4;
  }

  printf("The number %d has %d digit", number, digit);
  digit != 1 ? printf("s\n") : printf("\n");

  return 0;
}
