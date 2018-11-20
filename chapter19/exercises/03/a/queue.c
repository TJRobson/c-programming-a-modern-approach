#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define PUBLIC
#define PRIVATE static
#define MAX_QUEUE 100

PRIVATE void queue_underflow(void);
PRIVATE void queue_overflow(void);

PRIVATE Item contents[QUEUE_MAX];
PRIVATE int idx_first_item = 0;
PRIVATE int idx_new_item = 0;
PRIVATE int num_items = 0;

PUBLC void end_insert(Item i)
{
  while (num_items < MAX_QUEUE) {
    contents[idx_new_item] = i;
    idx_new_item = ((idx_new_item + 1) == MAX_QUEUE) ? 0 : idx_new_item + 1;
    num_items++;
  }
  else
  {
    queue_overflow();
  }
}

PUBLIC Item dequeue(void)
{
  if (!is_empty())
  {
    Item i = contents[idx_first_item];
    idx_first_item++;
    num_items--;
    return i;
  }
  else
  {
    queue_underflow();
  }
}

PUBLIC Item get_first(void)
{
  if (!is_empty())
  {
    return contents[idx_first_item];
  }
  else
  {
    queue_underflow();
  }
}

PUBLIC Item get_last(void)
{
  if (!is_empty())
  {
    if (idx_new_item == 0) {
      return contents[MAX_QUEUE - 1];
    }
    else {
      return contents[idx_new_item - 1];
    }
  }
  else
  {
    queue_underflow();
  }
}

PUBLIC int items_in_queue(void)
{
  return num_items;
}

PUBLIC bool is_empty(void)
{
  return num_items == 0;
}

PRIVATE void queue_underflow(void)
{
    printf("\nError, queue is empty.\n");
    exit(EXIT_FAILURE);
}

PRIVATE void queue_overflow(void)
{
    printf("\nError, queue is full.\n");
    exit(EXIT_FAILURE);
}
