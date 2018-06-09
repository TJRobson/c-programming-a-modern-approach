/* Chapter 5 Exercises 1 & 2 */

/* Ex.1 - The following program fragments illustrate the relational and
   equality operators. Show the output produced by each, assuming that
   i, j, and k are int variables. */

 /* Ex.2 - The following program fragments illustrate the relational and
    equality operators. Show the output produced by each, assuming that
    i, j, and k are int variables. */

 #include <stdio.h>

 int main(void)
 {
   int i = 2, j = 3, k;
   /* Exercise 1 */
   printf("Exercise 1:\n");
   k = i * j == 6; /* 1a */
   printf("%d\n", k);
   i = 5; j = 10; k = 1; /* 1b */
   printf("%d\n", k > i < j);
   i = 3; j = 2; k = 1; /* 1c */
   printf("%d\n", i < j == j < k);
   i = 3; j = 4; k = 5; /* 1d */
   printf("%d\n", i % j + i < k);

   /* Ecercise 2 */
   printf("Exercise 2:\n");
   i = 10; j = 5; /* 2a */
   printf("%d\n", !i < j);
   i = 2; j = 1; /* 2b */
   printf("%d\n", !!i + !j);
   i = 5; j = 0; k = -5; /* 2c */
   printf("%d\n", i && j || k);
   i = 1; j = 2; k = 3; /* 2d */
   printf("%d\n", i < j || k);

   return 0;
 }
