/* Chapter 8 Programming Project 6 */
#include <stdio.h>
#include <ctype.h>

 int main(void)
 {
   int i, len = 0;
   char ch, message[50];

   printf("Enter message: ");

   while((ch = getchar()) != '\n') {
     message[len] = toupper(ch);
     len++;
   }

  // for(len = 0; (message[len] = toupper(getchar())) != '\n'; len++) {
  //   /* Empty */
  // }

   printf("\nIn BIFF-speak: ");

   for(i = 0; i < len; i++) {
     switch (message[i]) {
       case 'A': printf("%c", '4'); break;
       case 'B': printf("%c", '8'); break;
       case 'E': printf("%c", '3'); break;
       case 'I': printf("%c", '1'); break;
       case 'O': printf("%c", '0'); break;
       case 'S': printf("%c", '5'); break;
       default: putchar(message[i]); break;
     }
   }

   printf("!!!!!!!!!!\n");

   return 0;
 }
