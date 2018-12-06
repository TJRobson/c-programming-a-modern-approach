#include <stdio.h>
#include "queueADT.h"

int main(void)
{
  char ch;
  int i;

  printf("\nEnter length of Queue 1: ");
  scanf("%d", &i);

  Queue q1 = create(i);

  printf("Enter ints to add to queue 1: ");
  do {
    scanf("%d", &i);
    end_insert(q1, i);
  } while ((ch = getchar()) != '\n');

  printf("peek at first item of q1: %d\n", get_first(q1));
  printf("peek at last item of q1: %d\n", get_last(q1));
  printf("Is q1 full? %s\n", is_full(q1) ? "True" : "False");

  printf("\nEnter length of Queue 2: ");
  scanf("%d", &i);

  Queue q2 = create(i);

  printf("Enter ints to add to queue 2: ");
  do {
    scanf("%d", &i);
    end_insert(q2, i);
  } while ((ch = getchar()) != '\n');

  printf("dequeued %d from q1\n", dequeue(q1));
  printf("dequeued %d from q2\n", dequeue(q2));

  printf("Is q1 empty? %s\n", is_empty(q1) ? "True" : "False");
  empty_queue(q1);
  printf("Is q1 empty? %s\n", is_empty(q1) ? "True" : "False");

  destroy(q1);
  destroy(q2);

  return 0;
}
