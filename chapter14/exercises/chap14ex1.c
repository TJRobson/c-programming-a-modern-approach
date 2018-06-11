/* Chapter 14 Exercises 1a 1b 1c */
#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x)) /* 1a */
#define REM_DIVIDE_BY_FOUR(x) ((x) % 4) /* 1b */
#define PRODUCT_XY(x, y) ((x)*(y) < 100 ? 1 : 0) /* 1c */

int main(void)
{
  int x = 9, y = 11;

  printf("\nx: %d, y: %d\n", x, y);
  printf("x cubed: %d\n", CUBE(x));
  printf("Remainder of x divided by four: %d\n",
          REM_DIVIDE_BY_FOUR(x));
  printf("Product of x and y is less that 100: %s\n",
          PRODUCT_XY(x, y) ? "True": "False");
  return 0;
}
