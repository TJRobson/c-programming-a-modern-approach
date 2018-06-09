/* Chapter 8 Programming Project 13 */
/* Extention of Chapter 7 Programming Project 11 */
#include <stdio.h>
#include <ctype.h>

#define LEN ((int) (sizeof(surname) / sizeof(surname[0])))

int main(void)
{
  int i, print_len;
  char ch, initial, surname[20];

  printf("\nEnter a first and last name: ");
  while((ch = getchar()) == ' '); /* Kills white space */

  initial = toupper(ch);

  while((ch = getchar()) != ' '); /* Kills remainder of first name */

  for (i = 0; (ch = getchar()) != '\n' && i < LEN; i++) {
    if(i == 0) {
      ch = toupper(ch); surname[i] = ch;
    } else {
      ch = tolower(ch); surname[i] = ch;
    }
  }
  print_len = i;

  printf("You entered the name: ");
  for (i = 0; i <= print_len; i++) {
    printf("%c", surname[i]);
  }
  printf(", %c.\n", initial);

  return 0;
}
