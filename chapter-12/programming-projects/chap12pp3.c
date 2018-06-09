/* Chapter 12 Programming Project 3 */
/* Programming Project 1, with arr name as pointer */
#include <stdio.h>

#define SIZE 50

char *read_sentence(char s[], int n);
void print_reverse(const char *s, const char *p);

int main(void)
{
  char *last, sentence[SIZE];

  printf("\nEnter a sentence max len = %d: ", SIZE);
  last = read_sentence(sentence, SIZE);
  print_reverse(sentence, last);

  return 0;
}

char *read_sentence(char s[], int n)
{
  char *ptr;
  for (ptr = s; (*ptr = getchar()) != '\n' && ptr < s + n; ptr++);
  return ptr;
}

void print_reverse(const char *s, const char *p)
{
  const char *ch;

  printf("\nIn reverse: ");
  for (ch = p; ch >= s; ch--)
  {
    putchar(*ch);
  }
  printf("\n");
}
