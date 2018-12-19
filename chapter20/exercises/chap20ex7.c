/* Chapter 20 Exercise 7 */
#include <stdio.h>
#include <string.h>

unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i , int n);
char *byte_to_binary_str(int byte);
void print_int_bits(int val);

int main(void)
{
  unsigned int hex_n;
  int shift_n;

  printf("\nEnter a hexadecimal number: ");
  scanf("%x", &hex_n);
  printf("Enter a shift amount: ");
  scanf("%d", &shift_n);

  printf("\nOriginal hex value\n");
  print_int_bits(hex_n);

  printf("\nRotated left by %d bit(s)\n", shift_n);
  print_int_bits(rotate_left(hex_n, shift_n));
  printf("Hex\t%x\n\n", rotate_left(hex_n, shift_n));

  printf("\nRotated right by %d bit(s)\n", shift_n);
  print_int_bits(rotate_right(hex_n, shift_n));
  printf("Hex\t%x\n\n", rotate_right(hex_n, shift_n));

  return 0;
}

unsigned int rotate_left(unsigned int i, int n)
{
  return (i << n) | (i >> ((sizeof(int) * 8) - n));
}

unsigned int rotate_right(unsigned int i , int n)
{
  return (i << ((sizeof(int) * 8) - n)) | (i >> n);
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

  printf("Binary\t");
  for (i = sizeof(int) - 1; i >= 0; i--) {
    printf("%s ", byte_to_binary_str(val >> (i * 8)));
  }
  printf("\n");
}
