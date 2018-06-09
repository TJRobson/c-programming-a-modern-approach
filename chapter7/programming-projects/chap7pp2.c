/* Chapter 7 Programming Project 2 */
#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in a table: ");
    scanf("%d", &n);

    getchar(); //remove the newline char from the buffer

    for (i = 1; i <= n; i++) {
      printf("%10d%10d\n", i, i * i);
      if(i % 24 == 0) {
        printf("Please press enter to continue...");
        while((getchar()) != '\n')  ;
      }
    }

    return 0;
}
