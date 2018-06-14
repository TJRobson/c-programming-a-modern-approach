/* Chapter 14 Exercise 15 */
#include <stdio.h>

// #define ENGLISH
#define FRENCH
// #define SPANISH

int main(void)
{

  #if defined(ENGLISH)
      printf("\nInsert Disk 1\n");
  #elif defined(FRENCH)
      printf("\nInserez Le Disque 1\n");
  #elif defined(SPANISH)
      printf("\nInserte El Disco 1");
  #endif

  return 0;
}
