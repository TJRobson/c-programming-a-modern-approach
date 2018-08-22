/* Chapter 17 Exercise 4 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct point { int x, y; };
  struct rectangle { struct point upper_left, lower_right; };
  struct rectangle *p;

  if ((p = malloc(sizeof(struct rectangle))) == NULL) {
    printf("\nError: malloc failed\n");
    exit(EXIT_FAILURE);
  }

  p->upper_left.x = 10;
  p->upper_left.y = 25;
  p->lower_right.x = 20;
  p->lower_right.y = 15;

  printf("\nUpper Left x:%d y:%d\n", p->upper_left.x, p->upper_left.y);
  printf("Lower Right x:%d y:%d\n", p->lower_right.x, p->lower_right.y);

  return 0;
}
