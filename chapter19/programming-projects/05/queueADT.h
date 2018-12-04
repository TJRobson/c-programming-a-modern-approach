#ifndef QUEUEADT_H
#define QUEUEADT_H

#include <stdbool.h>

typedef int Item;
typedef struct queue_type *Queue;

/* Creates and returns a Queue */
Queue create(void);
/* Destroys Queue q */
void destroy(Queue q);
/* Appends Item I to the end of Queue q */
void end_insert(Queue q, Item i);
/* Removes and returns Item i from the front of Queue q */
Item dequeue(Queue q);
/* Returns but doesn't remove Item i from the front of Queue q */
Item get_first(Queue q);
/* Returns but doesn't remove Item i from the end of Queue q */
Item get_last(Queue q);
/* Returns true if the Queue q is empty */
bool is_empty(Queue q);
/* Returns true if the Queue is full */
bool is_full(Queue q);
/* Removes all items from Queue q */
void empty_queue(Queue q);

#endif
