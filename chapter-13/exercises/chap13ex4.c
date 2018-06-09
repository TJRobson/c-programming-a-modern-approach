/* Chapter 13 Exercise 4 */
#include <stdio.h>
#include <ctype.h>

#define N 20

int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);
int read_line_d(char str[], int n);
void print_line(char str[]);

int main(void)
{
  char sentence[N];

  printf("Enter a sentence (max = %d): ", N);
  read_line_d(sentence, N);
  print_line(sentence);
  printf("\n");

  return 0;
}

int read_line_a(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) !=  '\n' && ch != EOF) {
    if (i == 0 && isspace(ch)) ;
    else if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}

int read_line_b(char str[], int n)
{
  int ch, i = 0;

  while (!isspace(ch = getchar())) {
    if (i < n) {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;
}

int read_line_c(char str[], int n)
{
  int ch, i = 0;

  do {
    ch = getchar();
    if (i < n) {
      str[i++] = ch;
    }
  } while (ch != '\n');
  str[i] = '\0';
  return i;
}

int read_line_d(char str[], int n)
{
  int i, ch;
  for (i = 0; (ch = getchar()) != '\n' && i < n - 1; i++) {
    str[i] = ch;
  }
  str[i] = '\0';
  return i;
}

void print_line(char str[])
{
  char *ptr;

  for (ptr = str; *ptr != '\0'; ptr++) {
    printf("%c", *ptr);
  }
}
