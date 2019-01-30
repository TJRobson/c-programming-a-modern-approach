/* Chapter 20 Exercise 10 */
#include <stdio.h>
#include <string.h>

#define INT_BITS (sizeof(int) * 8 - 1)

unsigned int reverse_bits(unsigned int n);
char *byte_to_binary_str(int byte);
void print_int_bits(int val);

int main(void)
{
  unsigned int n = 0xfabfe74d;

  printf("\nOriginal: ");
  print_int_bits(n);
  n = reverse_bits(n);
  printf("Reversed: ");
  print_int_bits(n);

  return 0;
}

unsigned int reverse_bits(unsigned int n)
{
  int mask, rev_n;

  for (mask = INT_BITS; mask >= 0; mask--) {
    if (n & (1 << mask)) {
      rev_n |= (1 << ((INT_BITS) - mask));
    }
  }
  return rev_n;
}


char *byte_to_binary_str(int byte)
{
  static char bit_string[9];
  bit_string[0] = '\0';

  int mask;
  for (mask = 0x80; mask > 0; mask >>= 1) {
    /* Check if the mask bit is set */
    strcat(bit_string, byte & mask ? "1" : "0");
  }

  return bit_string;
}

void print_int_bits(int val)
{
  static int i;

  for (i = sizeof(int) - 1; i >= 0; i--) {
    printf("%s ", byte_to_binary_str(val >> (i * 8)));
  }
  printf("\n");
}
