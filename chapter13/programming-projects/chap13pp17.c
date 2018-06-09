/* Chapter 13 Programming Project 17 */
/* from Chapter 12 Programming Project 2 */
/* Checks for palindrome */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 50

void read_message(char *message, int n);
bool is_palindrom(const char *m);

int main(void)
{
  char message[SIZE];

  printf("\nEnter a message: ");
  read_message(message, SIZE);
  printf("%s\n", is_palindrom(message)
                ? "Palindrome"
                : "Not a Palindrome");

  return 0;
}

void read_message(char *message, int n)
{
  char ch;

  while ((ch = getchar()) != '\n' && message < message + n) {
    if (tolower(ch) >= 'a' && toupper(ch) <= 'Z') {
      *message++ = tolower(ch);
    }
  }
  *message = '\0';
}

bool is_palindrom(const char *message)
{
  const char *left = message;

  while (*message) {
    message++;
  }
  const char *right = --message;
  
  while (left++ < right--) {
    if (*left != *right) {
      return false;
    }
  }
  return true;
}
