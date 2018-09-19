/* Chapter 17 Programming Project 6 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MSGS 50
#define MSG_MAX 20

void *my_malloc(int bytes);
int read_line(char *str, int n);
int compare_words(const void *p, const void *q);
void sort_and_print(char **pp, int n);

int main(void)
{
  char **msgs, *msg_str;
  int size = 1, num_msgs = 0;

  printf("\n");
  msgs = my_malloc(sizeof(char *));

  for (; num_msgs < MSG_MAX; ) {

    msg_str = my_malloc(MSG_MAX + 1);

    printf("Enter a message: ");
    read_line(msg_str, MSG_MAX);

    if (strcmp(msg_str, "") == 0) {
      break;
    }

    *(msgs + num_msgs) = msg_str;
    num_msgs++;

    if (num_msgs == size) {
      msgs = realloc(msgs, sizeof(char *) * (size *= 2));
    }
  }

  sort_and_print(msgs, num_msgs);

  return 0;
}

void *my_malloc(int bytes)
{
  void *p;

  if ((p = malloc(bytes)) == NULL) {
    printf("\nError: NULL pointer, malloc failed.\n");
    exit(EXIT_FAILURE);
  }
  return p;
}

int read_line(char *str, int n)
{
  char *p = str;

  while ((*p = getchar()) != '\n'){
    if (p < str + n) {
      p++;
    }
  }

  if (p[strlen(p)-1] == '\n') {
    p[strlen(p)-1] = '\0';
  }

  return p - str;
}

int compare_words(const void *p, const void *q)
{
  return strcmp( *(char **)p, *(char **)q );
}

void sort_and_print(char **pp, int n)
{
  qsort(pp, n, sizeof(char *), compare_words);
  printf("\nSorted Messages:");

  int i;
  for (i = 0; i < n; i++) {
    printf("   %s - %d", *(pp + i), i);
  }
  printf("\n");
}
