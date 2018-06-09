/* Chapter 3 Exercise 1 & 2 */
#include "stdio.h"

int main(void)
{
  /* Exercise 1 */
  printf("%6d,%4d\n", 86, 1040);
  printf("%12.5e\n", 30.253);
  printf("%.4f\n", 83.162);
  printf("%-6.2g\n", .0000009979);

  /* Exercise 2 */
  float x;
  printf("Enter a float: ");
  scanf("%f", &x);
  printf("%-8.1e", x);
  printf("%10.6e", x);
  printf("%-8.3f", x);
  printf("%6.0f", x);

  return 0;
}
