/* Chapter 12 Exercise 12 */
#include <stdio.h>

void find_two_largest(const int *a, int n,
                      int *largest, int *second_largest);

int main(void)
{
  int n;

  printf("\nEnter a Nunber: ");
  scanf("%d", &n);

  int *p, l, nxt_l, arr[n];

  printf("\nEnter %d ints: ", n);
  for (p = arr; p < arr + n; p++) {
    scanf(" %d", p);
  }
  find_two_largest(arr, n, &l, &nxt_l);
  printf("Largest: %d\tSecond Largest: %d\n", l, nxt_l);

  return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
  const int *ptr, *biggest, *next;

  ptr = biggest = next = a;

  while (ptr < a + n) {
    if (*biggest < *ptr) {
        next = biggest;
        biggest = ptr;
    } else if (*next < *ptr) {
        next = ptr;
    }
    ptr++;
  }
  *largest = *biggest;
  *second_largest = *next;
}
