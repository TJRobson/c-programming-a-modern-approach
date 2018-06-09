/* Chapter 12 Programming Project 4 */
/* Programming Project 2, with arr name as pointer */
/* Checks for palindrome */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 50

char *read_message(char *m, int n);
bool is_palindrom(const char *m, const char *end);

int main(void)
{
  char *end, message[SIZE];

  printf("\nEnter a message: ");
  end = read_message(message, SIZE);
  printf("%s\n", is_palindrom(message, end)
                ? "Palindrome"
                : "Not a Palindrome");

  return 0;
}

char *read_message(char *m, int n)
{
  char *ptr = m, ch;

  while ((ch = getchar()) != '\n' && ptr < m + n) {
    if (tolower(ch) >= 'a' && toupper(ch) <= 'Z') {
      *ptr = tolower(ch);
      ptr++;
    }
  }
  return --ptr; /* counteracting a final increment at loop exit */
}

bool is_palindrom(const char *m, const char *end)
{
  const char *left = m, *right = end;
  for (; left < end && right >= m; left++, right--) {
    if (*left != *right) {
      return false;
    }
  }
  return true;
}
