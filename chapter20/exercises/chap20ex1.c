/* Chapter 20 Exercises 1a-1d */

/* Show the output produced by each of the following program fregments.
 * Assume that i, j and k are unsighed short variables.
*/

/* a) i = 8; j = 9;
 *    printf("%d", i >> 1 + j >> 1);
 *
 * Answer: ((i >> (1 + j)) >> 1)
 *         ((i >> 10) >> 1) = 1000 shifted right by 10 bits = 0 >> 1
 *         = 0
*/

/* b) i = 1;
 *    printf("%d", i & ~i);
 *
 * Answer: (i & (i~)) -> 0001 & ~0001 -> 0001 & 1110
 *         = 0000 = 0
*/

/* c) i = 2; j = 1; k = 0;
 *    printf("%d", ~i & j ^ k);
 *
 * Answer: (((~i) & j) ^ k) -> i = 0010 (2) -> 1111111111111101 (65533) & j
 *         1101 & j = 0001 ^ k -> 0001 ^ 0000 = 1
*/

/* d) i = 7; j = 8; k = 9;
 *    printf("%d", i ^ j & k);
 *
 * Answer: (i ^ (j & k)) -> j & k -> 1000 & 1001 = 1000
 *         i ^ 1000 (8) -> 0111 ^ 1000 = 1111 = 15
 */

#include <stdio.h>

int main(void)
{
  unsigned short i, j, k;

  i = 8; j = 9;
  printf("\na) %d\n", i >> 1 + j >> 1);

  i = 1;
  printf("b) %d\n", i & ~i);

  i = 2; j = 1; k = 0;
  printf("c) %d\n", ~i & j ^ k);

  i = 7; j = 8; k = 9;
  printf("d) %d\n", i ^ j & k);


  return 0;
}
