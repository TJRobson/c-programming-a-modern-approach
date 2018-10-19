/* Chapter 19 Exercise 1 */
#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item
typedef struct queue_type *Queue

/* Appends Item I to the end of the queue */
void end_insert(Item i);

/* Removes and returns Item i from the front of the queue */
Item dequeue(void);

/* Returns but doesn't remove Item i from the front of the queue */
Item get_first(void);

/* Returns but doesn't remove Item i from the end of the queue */
Item get_last(void);

/* Returns true if the queue is empty */
bool is_empty(void);

#endif
