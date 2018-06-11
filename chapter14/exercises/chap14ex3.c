/* Chapter 14 Exercises 3a 3b 3c */

/* Let DOUBLE be the following macro
 * #define DOUBLE(x) 2*x
 * a) What is the value of DOUBLE(1+2)? Answer: 4
 * b) What is the value of 4/DOUBLE(2)? Anseer: 4
 * c) Fix the defintion of DOUBLE.
*/
#include <stdio.h>

#define DOUBLE(x) ((x)*2)

int main(void)
{
  printf("\na) %d", DOUBLE(1+2));
  printf("\nb) %d\n", 4/DOUBLE(2));
  return 0;
}
