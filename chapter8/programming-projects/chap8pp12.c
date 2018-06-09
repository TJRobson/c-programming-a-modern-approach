/* Chapter 8 Programming Project 12 */
/* Extention of Chapter 7 Programming Project 5 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int letter, sum = 0,
  alpha_val[26] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                /*  A  B  C  D  E  F  G  H  I  J  K  L  M  */
                    1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
                /*  N  O  P  Q   R  S  T  U  V  W  X  Y  Z */
  char ch;

  printf("\nEnter a word: ");

  while ((ch = toupper(getchar())) != '\n') {
    if(ch >= 'A' && ch <= 'Z') {
      letter = ch - 'A';
      sum += alpha_val[letter];
    } else {
      printf("Only letters please!");
    }
  }

  printf("Scrabble Value: %d\n", sum);

  return 0;
}
