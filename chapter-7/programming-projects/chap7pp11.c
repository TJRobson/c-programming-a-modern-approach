/* Chapter 7 Programming Project 11 */

/* Write a program that takes the first name and last name entered by
   the user and displays the last name, a comma, and the first
   initial, followed by a period:

   Enter a first and last name: Lloyd Fosdick
   Fosdick, L.

   Ths user's input may contain extra spaces before the first name,
   between the first and last names, and after the last name.
 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
  char ch, initial;
  bool first_letter = true, surname = false;

  printf("Enter a first and last name: ");

  while((ch = getchar()) == ' '); /* Kills white space */

  initial = toupper(ch);

  while((ch = getchar()) != '\n') {
    if(ch != ' ' && !surname) {
      continue;
    } else if(ch == ' '  && !surname) {
      surname = true;
    } else if(ch != ' ') {
      if(first_letter) {
        ch = toupper(ch);
        putchar(ch);
        first_letter = false;
      } else {
        putchar(ch);
      }
    }
  }

  printf(", %c.\n", initial);

  return 0;
}
