/* Chapter 13 Programming Project 10 */
/* from Chapter 7 Programming Project 11 */
/* Write a program that takes the first name and last name entered by
   the user and displays the last name, a comma, and the first
   initial, followed by a period:

   Enter a first and last name: Lloyd Fosdick
   Fosdick, L.

   Ths user's input may contain extra spaces before the first name,
   between the first and last names, and after the last name.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define N 30

void reverse_name(char *name);

int main(void)
{
  char name[N + 1];

  printf("\nEnter a first and last name: ");
  fgets(name, sizeof(name), stdin);
  reverse_name(name);

  return 0;
}

void reverse_name(char *name)
{
  char *ptr = name, initial;

  while(*ptr && *ptr == ' ') {
    ptr++;
  }; /* Kills white space */

  initial = toupper(*ptr++);

  while (*ptr && *ptr++ != ' ');

  while(*ptr && *ptr == ' ') {
    ptr++;
  }; /* Kills white space */

  putchar(toupper(*ptr++));

  while (*ptr && *ptr != '\n' && *ptr != ' ') {
    putchar(*ptr++);
  }
  printf(", %c.\n", initial);
}
