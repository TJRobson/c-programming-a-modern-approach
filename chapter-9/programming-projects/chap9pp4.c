/* Chapter 9 Programming Project 4 */
/* Chapter 8 Programming Project 16 */
/* With functions read_word & equal_array */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define LEN 20

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
  int counts1[26] = {0}, counts2[26] = {0};
  bool anagram;

  printf("\nEnter first word: ");
  read_word(counts1);

  printf("Enter Second word: ");
  read_word(counts2);

  anagram = equal_array(counts1, counts2);

  printf("The words are %s anagrams\n", anagram ? "are" : "are not");

  return 0;
}

void read_word(int counts[26]) {
  int i, let_val; char ch;
  for (i = 0; (ch = tolower(getchar())) != '\n' && i <= LEN; i++) {
    if (isalpha(ch)) {
      let_val = ch - 'a';
      counts[let_val]++;
    }
  }
}

bool equal_array(int counts1[26], int counts2[26]) {
  int i;
  for (i = 0; i < 26; i++) {
    if (counts1[i] != counts2[i]) { return false; }
  }
  return true;
}
