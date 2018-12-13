/* Chapter 20 Exercise 3 */

/* Explain what effect the following macro has on its arguments.
 * you may assume the arguments have the same type.
*/

#include <stdio.h>

#define M(x, y) ((x)^=(y), (y)^=(x), (x)^=(y))

int main(void)
{
  unsigned int i, j;

  printf("\nEnter two ints to swap: ");
  scanf("%d %d", &i, &j);

  M(i, j);

  printf("Swapped: %d, %d\n", i, j);

  return 0;
}

/* Answer: This macro swaps two values stored in x and y in place
 * (without using a third variable).
 *
 *  For instance lets say we have two variables x and y with the following values:
 *  x = 23 (decimal), 10111 (binary)
 *  y = 12 (decimal), 01100 (binary)
 *  x = x ^ y:
 *  10111
 *       ^
 *  01100
 *       =
 *  11011, x is now 11011 (27 in decimal)
 *
 *  y = y ^ x:
 *  01100
 *       ^
 *  11011
 *       =
 *  10111, y is now 10111 (23 in decimal)
 *
 *  x = x ^ y:
 *  11011
 *       ^
 *  10111
 *       =
 *  01100, x is now 01100 (12 in decimal)
 *
 *  x is now 12
 *  y is now 23
 */
