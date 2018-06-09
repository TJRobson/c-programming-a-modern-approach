/* Chapter 12 Exercise 7 */
#include <stdio.h>
#include <stdbool.h>

#define NUM 6

bool search(const int a[], int n, int key);

int main(void)
{
  int *p, key, arr[NUM];

  printf("\nEnter %d ints: ", NUM);
  for (p = arr; p < arr + NUM; p++) {
    scanf(" %d", p);
  }
  printf("Enter a int to look for: ");
  scanf("%d", &key);

  printf("%s\n", search(arr, NUM, key) ? "True" : "False");

  return 0;
}

bool search(const int a[], int n, int key) {
  int *p = a;

  while (p < a + n) {
    if (*p++ == key) {
      return true;
    }
  }
  return false;
}
