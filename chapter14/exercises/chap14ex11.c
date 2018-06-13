/* Chapter 14 Exercise 11 */

/* (C99) C programmers often use the fprintf function to write error messages
 * fprintf(stderr, "Range error: index = %d\n", index);
 * stderr is C's "standard error" stream; the remaining arguments are the same
 * of those for printf, starting with the format string. Write a macro named
 * ERROR that generates the call of fprintf shown above when given a format
 * string and the item displays: ERROR("Range error: index = %d\n", index);
*/

#include <stdio.h>

#define ERROR(str, i) (fprintf(stderr, (str), (i)))

int main(void)
{
  int i = 1011;

  ERROR("\nRange error: index = %d\n", i);

  return 0;
}
