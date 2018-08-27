/* Chapter 17 Exercise 6 */

/* Modify the  delete_from_list  function so that it uses only
 * one pointer variable instead of two (cur and prev).
*/

void *delete_from_list(struct node **list, int n)
{
  struct node p = *list;

  while (p) {
    if (p->value == n) {
      *list = p->next;
      free(p);
    }
    list = &p->next;
    p = p->next;
  }
}
