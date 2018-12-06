#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct node {
  Item item;
  struct node *next;
};

struct queue_type {
  struct node *head;
  struct node *tail;
  int len;
};

static void terminate(const char *message)
{
  printf("\n%s\n", message);
  exit(EXIT_FAILURE);
}

Queue create(void)
{
  Queue q;
  if ((q = malloc(sizeof(struct queue_type))) == NULL) {
    terminate("Error in create: queue could not be create.");
  }
  q->head = NULL;
  q->tail = NULL;
  q->len = 0;
  return q;
}

void destroy(Queue q)
{
  empty_queue(q);
  free(q);
}

void end_insert(Queue q, Item i)
{
  if (is_full(q)) {
    terminate("Error in end_insert(): queue is full.");
  }
  struct node *new_node = malloc(sizeof(struct node));

  if (new_node == NULL) {
    terminate("Error in end_insert(): queue is full.");
  }

  new_node->item = i;
  new_node->next = NULL;

  if (is_empty(q)) {
    q->head = new_node;
    q->tail = new_node;
  } else {
    q->tail->next = new_node;
    q->tail = new_node;
  }
  q->len++;
}

Item dequeue(Queue q)
{
  if (is_empty(q)) {
    terminate("Error in dequeue(): queue is empty.");
  }

  Item i = q->head->item;
  struct node *old_head = q->head;

  if (q->len == 1) {
    q->head = NULL;
    q->tail = NULL;
  } else {
    q->head = q->head->next;
  }

  free(old_head);
  q->len--;

  return i;
}

Item get_first(Queue q)
{
  if (is_empty(q)) {
    terminate("Error in get_first(): queue is empty.");
  }
  return q->head->item;
}

Item get_last(Queue q)
{
  if (is_empty(q)) {
    terminate("Error in get_last(): queue is empty.");
  }
  return q->tail->item;
}

bool is_empty(Queue q)
{
  return q->len == 0;
}

bool is_full(Queue q)
{
  return false;
}

void empty_queue(Queue q)
{
  while (!is_empty(q)) {
    dequeue(q);
  }
}
