/* Chapter 17 Exercise 11 */

/* Write the following fuction: */

int count_occurrences(struct node *list, int n);

/* The list parameter points to a linked list; the function should return
 * the number of times that n appears in this list. Assume that the node
 * is the one that is defined in Section 17.5.
*/

struct node {
  int value;
  struct node *next;
};

int count_occurrences(struct node *list, int n)
{
  int count = 0;

  while (list != NULL) {    /* could use while (list)... */
    if (list->value == n) {
      count++;
    }
    list = list->next;
  }
  return count;
}
