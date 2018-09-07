/* Chapter 17 Exercise 12 */

/* Write the following function */

struct node *find_last(struct node *list, int n);

/* The list parameter points to a linked list; the function should return
 * a pointer to the last node that contains n; it should return NULL if
 * n doesn't appear in the list. Assume that the node is the one that is
 * defined in Section 17.5.
*/

struct node {
  int value;
  struct node *next;
};

struct node *find_last(struct node *list, int n)
{
  struct node *last = NULL;

  while (list) {
    if (list->value == n) {
      last = list;
    }
    list = list->next;
  }
  return last;
}
