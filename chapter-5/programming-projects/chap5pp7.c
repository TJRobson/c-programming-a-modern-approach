/* Chapter 5 Programming Project */
#include <stdio.h>

int main(void)
{
  int one, two, three, four, lo1, hi1, lo2, hi2;

  printf("Enter four numbers: ");
  scanf("%d %d %d %d", &one, &two, &three, &four);

  if (one < two) { lo1 = one; hi1 = two;
  } else { lo1 = two; hi1 = one; }

  if (four > three){ hi2 = four; lo2 = three;
  } else { hi2 = three; lo2 = four; }

  // one < two ? lo1 = one, hi1 = two : lo1 = two, hi1 = one;
  // four > three ? hi2 = four, lo2 = three : hi2 = three, lo2 = four;

  hi1 > hi2 ? printf("\nLargest: %d\n", hi1)
            : printf("\nLargest: %d\n", hi2);

  lo1 < lo2 ? printf("Smallest: %d\n", lo1)
              : printf("Smallest: %d\n", lo2);

  return 0;
}
