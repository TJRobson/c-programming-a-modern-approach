/* Chapter 20 Programming project 1 */
#include <stdio.h>

union {
  float value;
  struct {
    unsigned int fraction: 23;
    unsigned int exponent: 8;
    unsigned int sign_bit: 1;
  } float_parts;
} f;

int main(void)
{
  f.float_parts.sign_bit = 1;
  f.float_parts.exponent = 128;
  f.float_parts.fraction = 0;

  printf("\nf.value: %.1f\n", f.value);
  return 0;
}
