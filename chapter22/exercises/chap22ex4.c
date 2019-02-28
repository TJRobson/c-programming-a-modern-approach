/* Chapter 22 Exercise 4 */
#include <stdio.h>

/* Show how each of the following numbers will look if displayed by printf
 * with %#012.5g as the conversion specifier
 *
 * a) 83.7361
 * b) 29748.6670
 * c) 1054932234.0
 * d) 0.0000235218
*/

int main(void)
{

  printf("\n%s", "Show how each of the following numbers will look if \
  \ndisplayed by printf with %#012.5g as the conversion specifier\n");

  printf("\na) 83.7361: %#012.5g", 83.7361);
  printf("\nb) 29748.6670: %#012.5g", 29748.6670);
  printf("\nc) 1054932234.0: %#012.5g", 1054932234.0);
  printf("\nd) 0.0000235218: %#012.5g\n", 0.0000235218);

  return 0;
}
