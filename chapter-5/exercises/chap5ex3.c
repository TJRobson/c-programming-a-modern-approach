
/* The following program fragments illustrate the relational and
 * equality operators. Show the output produced by each, assuming that
 * i, j, and k are int variables.
 * (a) i = 3; j = 4; k = 5;
 *     printf("%d ", i < j || ++j < k);
 *     printf("%d %d %d", i, j, k);
 * (b) i = 7; j = 8; k = 9;
 *     printf("%d ", i - 7 && j++ < k);
 *     printf("%d %d %d", i, j, k);
 * (c) i = 7; j = 8; k = 9;
 *     printf("%d ", (i = j) || (j = k));
 *     printf("%d %d %d", i, j, k);
 * (d) i = 1; j = 1; k = 1;
 *     printf("%d ", ++i || ++j && ++k);
 *     printf("%d %d %d", i, j, k);
 */
#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 3; j = 4; k = 5;
    printf("Exercise 4: \n");
    printf("%d ", i < j || ++j < k); /* 3a */
    printf("%d %d %d\n", i, j, k);
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k); /* 3b */
    printf("%d %d %d\n", i, j, k);
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k)); /* 3c */
    printf("%d %d %d\n", i, j, k);
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k); /* 3d */
    printf("%d %d %d\n", i, j, k);

    return 0;
}

/* Answer:
  a. 1 3 4 5
  b. 0 7 8 9
  c. 1 8 8 9
  d. 1 2 1 1
*/
