/* Chapter 17 Programming Project 7 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MSGS 50
#define MSG_MAX 20

struct vstring {
  int len;
  char chars[];
};

void *my_malloc(int bytes);
int read_line(char *str, int n);
int compare_words(const void *p, const void *q);
void sort_and_print(struct vstring **pp, int n);

int main(void)
{
  char *msg_str;
  struct vstring **msgs, *msg_vstring;
  int size = 1, num_msgs = 0;

  printf("\n");
  msgs = my_malloc(sizeof(struct vstring *));

  for (; num_msgs < MSG_MAX; ) {

    msg_str = my_malloc(MSG_MAX + 1);

    printf("Enter a message: ");
    read_line(msg_str, MSG_MAX);

    if (strcmp(msg_str, "") == 0) {
      break;
    }

    msg_vstring = my_malloc(sizeof(struct vstring) + strlen(msg_str));

    strcpy(msg_vstring->chars, msg_str);
    msg_vstring->len = strlen(msg_str);

    *(msgs + num_msgs) = msg_vstring;

    num_msgs++;

    if (num_msgs == size) {
      msgs = realloc(msgs, sizeof(struct vstring *) * (size *= 2));
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
  return strcmp( (*(struct vstring **)p)->chars,
                 (*(struct vstring **)q)->chars );
}

void sort_and_print(struct vstring **pp, int n)
{
  qsort(pp, n, sizeof(struct vstring *), compare_words);
  struct vstring **entry;

  printf("\nDay Reminder:\t");
  for (entry = pp; entry < pp + n; entry++) {
    printf("%s\t", (*entry)->chars);
  }
  printf("\n");
}
