/* Chapter 20 Exercise 2 */

/* describe a simple way to "toggle" a bit (change it from 0 to a 1
 * or from 1 to 0). Illustrate the technique by writing a statement
 * that toggles bit 4 of the variable i.
*/

/* Answer: First we need to create a mask for the 4th bit, Then
 * we use the ^ operator to toggle it.
*/

#include <stdio.h>

int main(void)
{
  unsigned short i = 248; /* binary: 11101000 */

  printf("\ni: %d\n", i);

  i = i ^ 1 << 4; /* 1 << 4  = 00010000 (16 in decimal) */

  /************************************************
  *  i ^= 1 << 4; (shifted bit mask)              *
  *  i ^= 0x10; (hexadecimal constant expression) *
  *  i ^= 16; (decimal constant expression)       *
  *  i ^= 020 (octal constant expression);        *
  ************************************************/

  printf("i: %d\n", i);


  return 0;
}
