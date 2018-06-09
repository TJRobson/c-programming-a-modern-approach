/* Chapter 13 Programming Project 11 */
/* from Chapter 7 Programming Project 13 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 100

double compute_average_word_length(const char *sentence);

int main(void)
{
  char sentence[LEN + 1];

  printf("\nEnter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("Adverage word length: %.1lf\n",
         compute_average_word_length(sentence));

  return 0;
}

double compute_average_word_length(const char *sentence)
{
  const char *ptr = sentence;
  int words = 0, letters = 0;

  while (*ptr == ' '){
    ptr++;
  }

  for (; *ptr && *ptr != '\n'; ptr++) {
    if (*ptr == ' ') {
      if (*(ptr - 1) != ' ') {
        words++;
      }
      continue;
    }
    if (*(ptr + 1) == '\n') {
      words++;
    }
    if (isalpha(*ptr)) {
      letters++;
    }
  }
  printf("\nwords: %d\nletter: %d\n", words, letters);

  return words != 0 ? ((double) letters) / words : 0;
}
