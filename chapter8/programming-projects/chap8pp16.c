/* Chapter 8 Programming Project 16 */
/* Checks whether two words are anagrams */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 20
#define ALPHA_LEN ((int) (sizeof(alpha_tele) / sizeof(alpha_tele[0])))

int main(void)
{
  int i, word_l, let_val, alpha_tele[26] = {0};
  char ch;
  bool anagram = false, isword = true;

  printf("\nEnter first word: ");
  for (i = 0; (ch = tolower(getchar())) != '\n' && i <= LEN; i++) {
    if (isalpha(ch)) {
      let_val = ch - 'a';
      alpha_tele[let_val]++;
    } else {
      isword = false;
    }
  }
  word_l = i;

  printf("Enter second word: ");
  for (i = 0; (ch = tolower(getchar())) != '\n' && i < word_l; i++) {
    if (isalpha(ch)) {
      let_val = ch - 'a';
      alpha_tele[let_val]--;
    } else {
      isword = false;
    }
  }

  if (!isword) {
    printf("Not a word, only letters.\n");
    return 0;
  }

  for (i = 0; alpha_tele[i] == 0 && i < ALPHA_LEN; i++) {
    if (i == ALPHA_LEN - 1) { anagram = true; }
  }

  printf("The words are %s anagrams\n", anagram ? "are" : "are not");

  return 0;
}
