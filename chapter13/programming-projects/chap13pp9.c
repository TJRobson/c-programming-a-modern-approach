/* Chapter 13 Programming Project 9 */
/* from Chapter 7 Programming Project 10 */
#include <stdio.h>
#include <ctype.h>

#define LEN 80

int compute_vowel_count(const char *sentence);

int main(void)
{
  char sentence[LEN + 1];

  printf("\nEnter a sentence max = %d: ", LEN);
  // scanf("%[^\n]", sentence);
  fgets(sentence, sizeof(sentence), stdin);
  printf("Your sentence contains %d vowels.\n",
                   compute_vowel_count(sentence));
  return 0;
}

int compute_vowel_count(const char *sentence)
{
  int vowels = 0;
  const char *ptr = sentence;
  while (*ptr) {
    switch (toupper(*ptr++)) {
      case 'A': case 'E': case 'I': case 'O': case 'U':
        vowels++;
        break;
    }
  }
  return vowels;
}
