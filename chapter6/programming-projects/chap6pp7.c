
/* Chapter 6 Programming Project 7 */

#include <stdio.h>

int main(void)
{
    int i, n, k = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in a table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++, k = i + k)
    {
        printf("%10d%10d\n", i, k);
        k += i;
    }

    return 0;
  }

// int main(void)
// {
//     int i, n, odd, square;
//
//     printf("This program prints a table of squres.\n");
//     printf("Enter a number of entries in table: ");
//     scanf("%d", &n);
//
//     for (i = 1, odd = 3, square = 1; i <= n; i++, square += odd, odd += 2)
//         printf("%10d%10d\n", i, square);
//
//     return 0;
// }
