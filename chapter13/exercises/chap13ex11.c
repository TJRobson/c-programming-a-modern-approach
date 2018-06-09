/* Chapter 13 Exercise 11 */
#include <stdio.h>

#define N 10

int read_line(char arr[], int n);
int my_strcmp(char *s, char *t);

int main(void)
{
  char s[N], t[N];

  printf("\nEnter a word: ");
  read_line(s, N);
  printf("Enter next word: ");
  read_line(t, N);
  printf("Words compared: %d\n", my_strcmp(s, t));

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

// int my_strcmp(char *s, char *t)
// {
//   char *s_p, *t_p;
//
//   for (s_p = s, t_p = t; s_p == t_p; s_p++, t_p++) {
//     if (*s_p == '\0') {
//       return 0;
//     }
//   }
//   return *s_p - *t_p;
// }

int my_strcmp(char *s, char *t)
{
    while (s == t) {
        if (!*s)
            return 0;
    }
    return *s - *t;
}
