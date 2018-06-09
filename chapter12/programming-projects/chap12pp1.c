/* Chapter 12 Programming Project 1 */
#include <stdio.h>

#define SIZE 50

int read_sentence(char s[], int n);
void print_reverse(const char s[], int n);

int main(void)
{
  int n;
  char sentence[SIZE];

  printf("\nEnter a sentence max len = %d: ", SIZE);
  n = read_sentence(sentence, SIZE);
  print_reverse(sentence, n);

  return 0;
}

int read_sentence(char s[], int n)
{
  char *ptr;
  for (ptr = s; (*ptr = getchar()) != '\n' && ptr < s + n; ptr++);
  return ptr - s;
}

void print_reverse(const char s[], int n)
{
  const char *ch;

  printf("\nIn reverse: ");
  for (ch = s + n; ch >= s; ch--)
  {
    putchar(*ch);
  }
  printf("\n");
}
