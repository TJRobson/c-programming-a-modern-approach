/* Chapter 16 Exercise 20 */
#include <stdio.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void)
{
  int x = 0, y = 0;

  printf("\nEnter a number 0 & 3: ");
  scanf("%d", &direction);

  switch (direction) {
    case NORTH: y--; break;
    case SOUTH: y++; break;
    case EAST:  x++; break;
    case WEST:  x--; break;
    default : break;
  }

  printf("x: %d, y: %d\n", x, y);

  return 0;
}
