/* Chapter 8 Programming Project 15 */
/* Ceasar cipher */
#include <stdio.h>
#include <ctype.h>

#define LEN ((int) (sizeof(sentence) / sizeof(sentence[0])))
#define CAPS ((sentence[i] - 'A') + shift) % 26 + 'A'
#define LOWS ((sentence[i] - 'a') + shift) % 26 + 'a'

int main(void)
{
  int i, print_len, shift = 0;
  char sentence[80];

  printf("\nEnter message to be encrypted: ");
  for (i = 0; (sentence[i] = getchar()) != '\n' && i < LEN; i++)/*Empty*/;

  print_len = i;

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  printf("Encrypted message: ");
  for (i = 0; i <= print_len; i++) {
    if (sentence[i] >= 'A' && 'Z' >= sentence[i])
    {
      putchar(CAPS);
    }
    else if (sentence[i] >= 'a' && 'z' >= sentence[i])
    {
      putchar(LOWS);
    }
    else
    {
      putchar(sentence[i]);
    }
  }
  printf("\n");

  return 0;
}
