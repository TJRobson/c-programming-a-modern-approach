#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct queue_type {
  Item item;
  int idx_first_item;
  int idx_last_item;
  int num_items;
} *Queue;

/* Appends Item I to the end of the queue */
void end_insert(Queue q, Item i);

/* Removes and returns Item i from the front of the queue */
Item dequeue(Queue q);

/* Returns but doesn't remove Item i from the front of the queue */
Item get_first(Queue q);

/* Returns but doesn't remove Item i from the end of the queue */
Item get_last(Queue q);

/* Returns the number of items currently in the queue */
int items_in_queue(Queue q);

/* Returns true if the queue is empty */
bool is_empty(Queue q);

#endif
