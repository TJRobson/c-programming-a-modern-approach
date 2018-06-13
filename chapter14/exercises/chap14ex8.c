/* Chapter 14 Exercise 8 */

/* Suppose we want a macro that expands into a string containing the
 * current line number and file name. In other words we'd like to Write
 *
 * const char *str = LINE_FILE;
 *
 * and have it expand into
 *
 * const char *str = "Line 10 of file foo.c"
*/

#include <stdio.h>

/* Preprocessor won't accept #__LINE__ # is an illegal character */
/* We need a macro to stringify the value to __LINE__ */
#define STRINGIFY(x) #x

/* If we use STRINGIFY first off it stringifies  "__LINE__"
 * We need to wrap it in another macro, in order to take __LINE__'s
 * int value first.
*/
#define TO_STRING(x) STRINGIFY(x)

/* __FILE__  returns a string */
#define LINE_FILE "Line " TO_STRING(__LINE__) " of file " __FILE__

int main(void)
{
  const char *str = LINE_FILE;

  printf("\n%s\n", str);

  return 0;
}
