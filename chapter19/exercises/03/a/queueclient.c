#include <stdio.h>
#include "queue.h"

int main(void)
{
  int a = 0, b = 0,  c = 0, d = 0;

  printf("\nEnter four ints: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  end_insert(a);
  end_insert(b);
  end_insert(c);
  end_insert(d);

  printf("dequeued: %d\n", dequeue());
  printf("first in queue: %d\n", get_first());
  printf("last in queue:  %d\n", get_last());

  printf("Enter four more ints: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  end_insert(a);
  end_insert(b);
  end_insert(c);
  end_insert(d);

  printf("dequeued: %d\n", dequeue());
  printf("Is empty? %s\n", is_empty() ? "true" : "false");
  printf("first in queue: %d\n", get_first());
  printf("last in queue: %d\n", get_last());
  printf("Items currently in queue: %d\n", items_in_queue());

  return 0;
}
