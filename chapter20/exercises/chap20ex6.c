/* Chapter 20 Exercises 6 */
#include <stdio.h>

/* Exercise 6a) */
unsigned short swap_bytes(unsigned short i);

/* Exercise 6b */
unsigned short swap_bytes_b(unsigned short i);

int main(void)
{
  unsigned short hex_num;

  printf("\nEnter a hexadecimal number: ");
  scanf("%hx", &hex_num);
  printf("Number with bytes swaped: %hx\n", swap_bytes_b(hex_num));

  return 0;
}

unsigned short swap_bytes(unsigned short i)
{
  unsigned short b0_moved_left = i << 8;
  unsigned short b1_moved_right = i >> 8;

  return b0_moved_left | b1_moved_right;
}

unsigned short swap_bytes_b(unsigned short i)
{
  return i << 8 | i >> 8;
}
