/* Chapter 12 Programming Project 5 */
/* From Chap 8 Programming Project 14 */
#include <stdio.h>
#include <ctype.h>

#define SIZE 100
#define END_CHARS (ch == '.' || ch == '?' || ch == '!')

int main(void)
{
  int i, len = 0;
  char ch, end_char = '.', strings[SIZE] = {0};
  char *p, *pt;

  printf("\nEnter a sentence: ");
  for (i = 0; (ch = getchar()) != '\n' && i < SIZE; i++) {
    if (END_CHARS) {
      end_char = ch;
      break;
    } else {
      strings[i] = ch;
      len++;
    }
  }

  printf("Reversal of sentence:");
  for (p = strings + len - 1; p >= strings; p--) {
    if (*p == ' ' || p == strings) {
      if (p == strings) {
        printf("%c", ' ');
      }
      for (pt = p; pt < strings + len; pt++) {
        printf("%c", *pt);
      }
      len = (p - strings);
    }
  }
  printf("%c\n", end_char);

  return 0;
}
