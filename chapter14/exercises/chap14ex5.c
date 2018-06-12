/* Chapter 14 Exercises 5a 5b */

/* Let TOUPPER be the following macro:
 * #define TOUPPER(c) ('a'<=(c) && (c)<= 'z' ? (c)-'a'+'A': (c))
 * Let s be a string and let i be an int variable. Show the output
 * produced be each of the following program fragments.
 *
 * a) strcpy(s, "abcd");
 *    i = 0;
 *    putchar(TOUPPER(s[++i]));
 *
 * Outputs 'D'
 * TOUPPER(c) ('a'<=(s[++i]) && (++i)<= 'z' ? (++1)-'a'+'A': (c))
 * i is incremented x3 before being transformed.
 *
 *b) strcpy(s, "0123");
 *   i = 0;
 *   putchar(TOUPPER(s[++i]));
 *
 * Outputs '2'
 * TOUPPER(c) ('a'<=(s[++i]) && (++i)<= 'z' ? (++1)-'a'+'A': (c))
 * i is first incremented as it fails first condition i = 1,
 * then just before the char is returned. i = 2.
*/
#include <stdio.h>

#define TOUPPER(c) ('a'<=(c) && (c)<= 'z' ? (c)-'a'+'A': (c))

int main(void)
{
  int i = 0;
  char s1[] = "abcd", s2[] = "0123";

  printf("\na) %c\n", TOUPPER(s1[++i]));

  i = 0;
  printf("b) %c\n", TOUPPER(s2[++i]));


  return 0;
}
