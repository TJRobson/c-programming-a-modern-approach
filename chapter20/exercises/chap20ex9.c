/* Chapter 20 Exercise 9 */
#include <stdio.h>

/* a) White the folling function: */
int count_ones(unsigned char ch);

/* b) Write the function in part a) without using a loop. */
// int count_ones_b(unsigned char ch);

int main(void)
{
  unsigned char ch;

  printf("\nEnter a unsigned char value: ");
  scanf("%c", &ch);

  printf("# of 1's in char: %d\n", count_ones(ch));

  return 0;
}

int count_ones(unsigned char ch)
{
  unsigned char mask;
  short count = 0;

  for(mask = 1 << 7; mask > 0; mask >>= 1) {
    if (mask & ch) {
      count ++;
    }
  }
  return count;
}
