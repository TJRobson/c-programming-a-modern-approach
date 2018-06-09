/* Chapter 13 Programming Project 14 */
/* from Chapter 8 Programming Project 16 */
/* Checks whether two words are anagrams */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 20 + 1

bool get_word(char *word, int n);
bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
  char word1[LEN], word2[LEN];
  bool is_word = false;

  printf("\nEnter first word: ");
  is_word = get_word(word1, LEN);

  if (!is_word) {
    printf("Not a word, only letters.\n");
    return 0;
  }

  printf("Enter second word: ");
  is_word = get_word(word2, LEN);

  if (!is_word) {
    printf("Not a word, only letters.\n");
    return 0;
  }

  printf("The words are %s anagrams\n",
          are_anagrams(word1, word2) ? "are" : "are not");

  return 0;
}

bool get_word(char *word, int n)
{
  char ch, *ptr = word;

  for (;(ch = getchar()) != '\n' && ptr < word + n; ptr++) {
    if (isalpha(ch)) {
      *ptr = tolower(ch);
    } else {
      return false;
    }
  }
  *ptr = '\0';
  return true;
}

bool are_anagrams(const char *word1, const char *word2)
{
  const char *p1 = word1, *p2 = word2;
  int i, alpha_tele[26] = {0};

  while(*p1 && *p2) {
    alpha_tele[*p1++ - 'a']++;
    alpha_tele[*p2++ - 'a']--;
  }

  for (i = 0; i < 26; i++) {
    if (alpha_tele[i] != 0) {
      return false;
    }
  }
  return true;
}
