/* Chapter 20 Exercise 9 */
#include <stdio.h>

/* a) White the folling function: */
int count_ones(unsigned char ch);

/* b) Write the function in part a) without using a loop. */
int count_ones_b(unsigned char ch);

int main(void)
{
  unsigned char ch_a, ch_b;

  printf("\nEnter a char value: ");
  scanf("%c", &ch_a);

  printf("# of 1's in char: %d\n", count_ones(ch_a));

  getchar(); /* discarding enter key char */

  printf("Enter another char value: ");
  scanf("%c", &ch_b);

  printf("# of 1's in char: %d\n", count_ones_b(ch_b));


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

int count_ones_b(unsigned char ch)
{
  return ((ch >> 7) & 1)
        +((ch >> 6) & 1)
        +((ch >> 5) & 1)
        +((ch >> 4) & 1)
        +((ch >> 3) & 1)
        +((ch >> 2) & 1)
        +((ch >> 1) & 1)
        +(ch & 1);
}
