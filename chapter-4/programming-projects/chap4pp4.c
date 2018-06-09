/* Chapter 4 programming project 4 */
/* Prgram takes a users number input and displays it in octal (base 8) */
#include <stdio.h>

int main(void) {
  int num = 00000, input, o1, o2, o3, o4, o5;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &input);

  num += input;

  o1 = ((((num/8)/8)/8)/8)%8;
  o2 = (((num/8)/8)/8)%8;
  o3 = ((num/8)/8)%8;
  o4 = (num/8)%8;
  o5 = num%8;

  printf("In octal, your number is: %1d%1d%1d%1d%1d", o1, o2, o3, o4, o5);
  /* works */

  return 0;
  
}
