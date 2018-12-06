#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct queue_type {
  Item *contents;
  int head;
  int tail;
  int len;
  int size;
};

static void terminate(const char *message)
{
  printf("\n%s\n", message);
  exit(EXIT_FAILURE);
}

Queue create(int size)
{
  Queue q;
  if ((q = malloc(sizeof(struct queue_type))) == NULL) {
    terminate("Error in create: queue could not be create.");
  }
  if ((q->contents = malloc(sizeof(Item) * size)) == NULL) {
    terminate("Error in create: queue array could not be create.");
  }
  q->size = size;
  q->len = 0;
  q->head = 0;
  q->tail = 0;
  return q;
}

void destroy(Queue q)
{
  free(q);
}

void end_insert(Queue q, Item i)
{
  if (is_full(q)) {
    terminate("Error in end_insert(): queue is full.");
  }
  q->contents[q->tail++] = i;
  q->len++;
}

Item dequeue(Queue q)
{
  if (is_empty(q)) {
    terminate("Error in dequeue(): queue is empty.");
  }
  Item i = q->contents[q->head++];
  q->len--;
  return i;
}

Item get_first(Queue q)
{
  if (is_empty(q)) {
    terminate("Error in get_first(): queue is empty.");
  }
  return q->contents[q->head];
}

Item get_last(Queue q)
{
  if (is_empty(q)) {
    terminate("Error in get_last(): queue is empty.");
  }
  return q->contents[q->tail - 1];
}

bool is_empty(Queue q)
{
  return q->len == 0;
}

bool is_full(Queue q)
{
  return q->len == q->size;
}

void empty_queue(Queue q)
{
  while (!is_empty(q)) {
    dequeue(q);
  }
}
