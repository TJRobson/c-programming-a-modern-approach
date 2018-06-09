/* Chapter 13 Exercise 6 */
#include <stdio.h>

#define N 30

int read_line(char arr[], int n);
void censor(char *arr);
void print_line(char arr[]);

int main(void)
{
  char sentence[N];

  printf("\nEnter a sentence to be censored max = %d: ", N);
  read_line(sentence, N);
  censor(sentence);
  printf("Censored: ");
  print_line(sentence);
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

void censor(char *arr)
{
  char *p, *f = "foo";

  for (p = arr; *p; p++) {
    if (*p == *f && *(p+1) == *(f+1) && *(p+2) == *(f+2)) {
      *p = *(p+1) = *(p+2) = 'x';
    }
  }
}

void print_line(char arr[])
{
  char *ptr;

  for (ptr = arr; *ptr != '\0'; ptr++) {
    printf("%c", *ptr);
  }
}
