/* Chapter 13 Programming Project 12 */
/* from Chapter 8 Programming Project 14 */
#include <stdio.h>
#include <ctype.h>

#define END_CHARS (ch == '.' || ch == '?' || ch == '!' || ch == '\n')
#define MAX_WORDS 30
#define WORD_LEN 20 + 1

char (*get_sentence(char sentence[][WORD_LEN]))[WORD_LEN];

void print_in_reverse(char (*first_word)[WORD_LEN],
                      char (*end_word)[WORD_LEN]);

int main(void)
{
  char sentence[MAX_WORDS][WORD_LEN], (*last_word)[WORD_LEN];

  printf("\nEnter a sentence (max word = %d): ", MAX_WORDS);
  last_word = get_sentence(sentence);
  printf("last_word: %s\n", last_word[0]);
  print_in_reverse(sentence, last_word);

  return 0;
}

char (*get_sentence(char sentence[][WORD_LEN]))[WORD_LEN]
{
  char ch, end_char = '!';
  char (*end_word_ptr)[WORD_LEN] = sentence;
  char *char_ptr = end_word_ptr[0];

  while ((ch = getchar()) && end_word_ptr < sentence + (MAX_WORDS-1)) {
  if (END_CHARS) {
     end_char = ch != '\n' ? ch : end_char;
     *char_ptr = '\0';
     break;
   } else if (!isspace(ch)) {
     *char_ptr++ = ch;
   } else {
     *char_ptr = '\0';
     end_word_ptr++;
     char_ptr = end_word_ptr[0];
   }
  }

  if (char_ptr == sentence[0]) {
    sentence[0][0] = '\0';
  }

  for (char_ptr = sentence[0]; *char_ptr && char_ptr < sentence[0] +
        (WORD_LEN-1); char_ptr++); /* EMPTY */

  *char_ptr++ = end_char;
  *char_ptr = '\0';

  return end_word_ptr;
}

void print_in_reverse(char (*first_word)[WORD_LEN],
                      char (*end_word)[WORD_LEN])
{
  char *char_ptr;
  while (end_word >= first_word) {
      for (char_ptr = end_word[0]; *char_ptr; char_ptr++) {
        printf("%c", *char_ptr);
      }
      end_word--;
      printf(" ");
    }
  printf("\b");
  printf("\n");
}
