/* Chapter 8 Programming Project 11 */
/* Extention of Chapter 7 Programming Project 4 */
#include <ctype.h>
#include <stdio.h>

#define LEN ((int) (sizeof(phone_num) / sizeof(phone_num[0])))

int main(void)
{
  int i;
  char ch, phone_num[15];

  printf("\nEnter phone number max=15: ");
  for (i = 0; (ch = getchar()) != '\n' && i < LEN; i++) {
    switch (toupper(ch)) {
      case 'A': case 'B': case 'C': phone_num[i] = '2'; break;
      case 'D': case 'E': case 'F': phone_num[i] = '3'; break;
      case 'G': case 'H': case 'I': phone_num[i] = '4'; break;
      case 'J': case 'K': case 'L': phone_num[i] = '5'; break;
      case 'M': case 'N': case 'O': phone_num[i] = '6'; break;
      case 'P': case 'R': case 'S': phone_num[i] = '7'; break;
      case 'T': case 'U': case 'V': phone_num[i] = '8'; break;
      case 'W': case 'X': case 'Y': phone_num[i] = '9'; break;
      default: phone_num[i] = ch;
    }
  }
  printf("In numeric form: ");
  for (i= 0; i < LEN; i++) {
    printf("%c", phone_num[i]);
  }
  printf("\n");

  return 0;
}
