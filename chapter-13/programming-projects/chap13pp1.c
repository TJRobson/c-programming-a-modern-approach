/* Chapter 13 Programming Project 1 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 20

void get_word(char arr[], int n);
void initialize_words(void);
void small_big(void);

char word[N+1], big[N+1], small[N+1];

int main(void)
{
  printf("\n");
  initialize_words();

  while (strlen(word) != 4) {
    small_big();
  }

  printf("\nSmallest word: %s", small);
  printf("\nLargest word: %s\n", big);

  return 0;
}

void get_word(char arr[], int n)
{
  int i, ch;

  printf("Enter word: ");

  for (i = 0; (ch = getchar()) != '\n' && i < n - 1; i++) {
    arr[i] = tolower(ch); /* turning all letters lowercase for this func */
  }
  arr[i] = '\0';
}

void initialize_words(void)
{
  get_word(word, N);
  strcpy(small, word);
  strcpy(big, word);
}

void small_big(void)
{
  get_word(word, N);

  if (strcmp(word, small) < 0) {
    strcpy(small, word);
  }

  if (strcmp(word, big) > 0) {
    strcpy(big, word);
  }
}
