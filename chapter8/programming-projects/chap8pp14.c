/* Chapter 8 Programming Project 14 */
#include <stdio.h>
#include <ctype.h>

#define END_CHARS (ch == '.' || ch == '?' || ch == '!')

int main(void)
{
  int i, j, len;
  char ch, end_char, strings[100];

  printf("\nEnter a sentence: ");
  for (i = 0; (ch = getchar()) != '\n'; i++) {
    if (END_CHARS) { end_char = ch; }
    else { strings[i] = ch; }
  }
  len = i;
  printf("Reversal of sentence:");
  for ( ; i >= 0; i--) {
    if (strings[i] == ' ' || i == 0) {
      if (i == 0) { putchar(' '); }
      for (j = i; j < len; j++) {
        putchar(strings[j]);
      }
      len = i;
    }
  }
  printf("%c\n", end_char);

  return 0;
}
