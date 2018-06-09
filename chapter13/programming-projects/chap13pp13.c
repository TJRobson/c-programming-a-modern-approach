/* Chapter 13 Programming Project 13 */
/* from Chapter 8 Programming Project 15 */
/* Ceasar cipher */
#include <stdio.h>

#define LEN ((int) (sizeof(sentence) / sizeof(sentence[0])))
#define CAPS ((*ptr - 'A') + shift) % 26 + 'A'
#define LOWS ((*ptr - 'a') + shift) % 26 + 'a'

void encrypt(char *message, int shift);

int main(void)
{
  int shift = 0;
  char sentence[80 + 1];

  printf("\nEnter message to be encrypted: ");
  fgets(sentence, LEN, stdin);

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  encrypt(sentence, shift);

  printf("\n");

  return 0;
}

void encrypt(char *message, int shift)
{
  char *ptr;
  printf("Encrypted message: ");
  for (ptr = message; *ptr; ptr++) {
    if (*ptr >= 'A' && 'Z' >= *ptr)
    {
      putchar(CAPS);
    }
    else if (*ptr >= 'a' && 'z' >= *ptr)
    {
      putchar(LOWS);
    }
    else
    {
      putchar(*ptr);
    }
  }
}
