/* Chapter 13 Programming Project 16 */
/* from Chapter 12 Programming Project 1 */
#include <stdio.h>
#include <string.h>

#define SIZE 50 + 1

void reverse(char *message);

int main(void)
{
  char sentence[SIZE];

  printf("\nEnter a sentence max len = %d: ", SIZE - 1);
  fgets(sentence, sizeof(sentence), stdin);
  reverse(sentence);
  printf("In reverse: %s\n", sentence);

  return 0;
}

void reverse(char *message)
{
  char temp;
  char *start = message, *end = message;

  while (*end) {
    end++;
  }
  end--; /* move back from '\0' */

  for (; start < end; start++, end--) {
    if (*end == '\n') {
      --end;
    }
    temp = *end;
    *end = *start;
    *start = temp;
  }
}
