/* Chapter 13 Programming Project 8 */
/* from Chapter 7 Programming Project 5 */
#include <stdio.h>
#include <ctype.h>

#define N 29

void get_word(char arr[], int n);
int compute_scrabble_value(const char *word);

int main(void)
{
  char word[N];

  get_word(word, N);
  printf("Scrabble Value: %d\n", compute_scrabble_value(word));

  return 0;
}

void get_word(char arr[], int n)
{
  int i, ch;

  printf("\nEnter word: ");

  for (i = 0; (ch = getchar()) != '\n' && i < n - 1; i++) {
    arr[i] = toupper(ch); /* turning all letters uppercase for this func */
  }
  arr[i] = '\0';
}

int compute_scrabble_value(const char *word) {

  const char *ptr = word;
  int total = 0;

  while (*ptr) {

    switch (*ptr++) {
      case 'A': case 'E': case 'I': case 'L': case 'N':
      case 'O': case 'R': case 'S': case 'T': case 'U':
          total += 1;
          break;
      case 'D': case 'G':
          total += 2;
          break;
      case 'B': case 'C': case 'M': case 'P':
          total += 3;
          break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
          total += 4;
          break;
      case 'k':
          total += 5;
          break;
      case 'J': case 'X':
          total += 8;
          break;
      case 'Q': case 'Z':
          total += 10;
          break;
    }
  }
  return total;
}
