/* Chapter 13 Exercise 5 */
#include <stdio.h>
#include <ctype.h>

#define N 25

int read_line(char arr[], int n);
void capitalize_a(char arr[]);
void capitalize_b(char *arr);
void print_line(char arr[]);

int main(void)
{
  char arr[N];

  printf("\nEnter a message (max = %d): ", N);
  read_line(arr, N);
  capitalize_b(arr);
  print_line(arr);
  printf("\n");

  return 0;
}

int read_line(char arr[], int n)
{
  int i, ch;
  for (i = 0; (ch = getchar()) != '\n' && i < n - 1; i++) {
    arr[i] = ch;
  }
  arr[i] = '\0';
  return i;
}

void capitalize_a(char arr[])
{
  int i = 0;
  while (arr[i] != '\0') {
    arr[i++] = toupper(arr[i]);
  }
}

void capitalize_b(char *arr)
{
  char *p;
  for (p = arr; *p; p++) {
    *p = toupper(*p);
  }
}

void print_line(char arr[])
{
  char *ptr;

  for (ptr = arr; *ptr != '\0'; ptr++) {
    printf("%c", *ptr);
  }
}
