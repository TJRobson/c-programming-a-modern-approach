/* Chapter 7 Programming Project 13 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
  int word_count = 0, total_letters = 0;
  char ch;
  bool new_word = false;

  printf("Enter a sentence: ");

  while((ch = getchar()) != '\n') {
    if (ch == ' ') {
      new_word = true;
    } else if(new_word) {
      word_count++; total_letters++;
      new_word = false;
    } else {
      total_letters++;
    }
  }
  word_count++; /* Incremented due to break condtion */

  printf("Adverage word length: %.1f\n", (float) total_letters / word_count);

  return 0;
}
