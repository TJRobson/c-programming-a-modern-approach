/* Chapter 13 Exercise 16 */
/* count_spaces func 13.4 */
#include <stdio.h>
#include <ctype.h>

#define N 100

int read_line(char arr[], int n);
int count_spaces(const char *s);

int main(void)
{
  char str[N];
  int num_of_spaces = 0;

  printf("\nEnter a sentence: ");
  read_line(str, N);
  num_of_spaces = count_spaces(str);
  printf("Number of spaces: %d\n", num_of_spaces);

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

int count_spaces(const char *s)
{
  int count = 0;

  while(*s) {
    if (isspace(*s++)) {
      count++;
    }
  }
  return count;
}
