/* line.c (Chapter 15, page 364) */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define EXTRA_SPACE_ON_LEFT true
#define EXTRA_SPACE_ON_RIGHT false

int line_len = 0;
int num_words = 0;
bool left_or_right = EXTRA_SPACE_ON_RIGHT;

struct word {
  struct word *next;
  char letters[];
};

struct word *line = NULL;

void clear_line(void)
{
  struct word *temp;

  while (line) {
    temp = line;
    line = line->next;
    free(line);
  }
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  int word_len = strlen(word);

  struct word *new_word;
  if ((new_word = malloc(sizeof(struct word) + (word_len + 1))) == NULL) {
    printf("\nError: malloc failed\n");
    exit(EXIT_FAILURE);
  }
  strcpy(new_word->letters, word);
  new_word->next = NULL;

  struct word **pp;
  for (pp = &line; *pp != NULL; pp = &(*pp)->next) ;
  *pp = new_word;

  line_len += word_len;
  if (num_words > 0) {
    line_len++;
  }
  num_words++;
}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  int extra_spaces, spaces_to_insert, i;
  struct word *p = line;
  int letter_cnt = 0;

  left_or_right = !left_or_right;
  extra_spaces = space_remaining();

  while (p && letter_cnt < line_len) {
    printf("%s", p->letters);
    if (num_words > 1) {
      spaces_to_insert = extra_spaces / (num_words - 1);
      if (left_or_right == EXTRA_SPACE_ON_LEFT && extra_spaces > 0) {
        spaces_to_insert++;
      }
      for (i = 1; i <= spaces_to_insert + 1; i++) {
        putchar(' ');
      }
      extra_spaces -= spaces_to_insert;
    }
    letter_cnt += strlen(p->letters) + 1;
    num_words--;
    p = p->next;
  }
  putchar('\n');
}

void flush_line(void)
{
  if (line_len > 0) {
    struct word *p = line;
    int i;
    for (i = 0, p = line; p; i++, p = p->next) {
      if (i > 0 && p->next != NULL); {
        putchar(' ');
      }
      printf("%s", p->letters);
    }
  }
  printf("\n");
  clear_line();
}
