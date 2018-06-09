/* Chapter 7 Programming Project 1 */

/* The square2.c program of Section 6.3 will fail (usually by
 * printing strange answers) if i * i exceeds the maximum int value.
 * Run the program and determine the smallest value of n that causes
 * failure. Try changing the type of i to short and running the
 * program again. (Don't forget to update the conversion
 * specifications in the call of printf!) Then try long. From these
 * experiments, what can you conclude about the number of bits used to
 * store integer types on your machine?
 */
#include <stdio.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in a table: ");
    scanf("%ld", &n);

    for (i = 1; i <= n; i++) {
        printf("%20ld%20ld\n", i, i * i);

        if ((i * i) < 0)
          break;
      }

    return 0;
}

/* When i * i is assigned to a short, it overflows at 182^2. This means it reaches its
 * limit between the values 181^2 (32,761) and 182^2 (33,124). I can conclude from this
 * that short is assigned 16 bits on this system.
 *
 * When i * i is assigned to an int, it overflows at 46341^2 (2,147,479.015). This means
 * it reaches the limit between the values 46340^2 (2,147,395,600) and 46341^2
 * (2,147,479.015). I can conclude from this that int is assigned 32 bits on this
 * system
 *
 *When i * i is assigned to an long, it should overflow at 3037000500^2 (3037000500^2ish)
 * Long int is 64 bits on this system. 
 */
