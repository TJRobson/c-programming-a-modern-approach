/* Chapter 12 Programming Project 2 */
/* Checks for palindrome */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 50

int read_message(char m[], int n);
bool is_palindrom(const char m[], int n);

int main(void)
{
  char message[SIZE];
  int n = 0;

  printf("\nEnter a message: ");
  n = read_message(message, SIZE);
  printf("%s\n", is_palindrom(message, n)
                ? "Palindrome"
                : "Not a Palindrome");

  return 0;
}

int read_message(char m[], int n)
{
  char *ptr = m, ch;

  while ((ch = getchar()) != '\n' && ptr < m + n) {
    if (tolower(ch) >= 'a' && toupper(ch) <= 'Z') {
      *ptr = tolower(ch);
      ptr++;
    }
  }
  return ptr - m;
}

bool is_palindrom(const char m[], int n)
{
  const char *left = m, *right = m + n - 1;
  for (; left < m + n && right >= m; left++, right--) {
    if (*left != *right) {
      return false;
    }
  }
  return true;
}
