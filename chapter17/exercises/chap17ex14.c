/* Chapter 17 Exercise 14 */

struct node {
  int value;
  struct node *next;
};


struct node *delete_from_list(struct node *list, int n)
{
  struct node *cur, *prev;

  for (curr = list, prev = NULL;
       cur != NULL && cur->value != n;
       prev = cur, cur = cur->next)
    ;
    if (cur == NULL) {
      return list;              /* n wasn't found */
    }
    else if (prev == NULL) {
      list = list->next;        /* n is in the first node */
    }
    else {
      prev->next = cur->next;   /* n is in some other node */
    }
    free(cur);
    return list;
}

void delete_from_list(struct node **list_pp, int n)
{
  struct node *entry = *list_pp;

  while (entry) {
    if (entry->value == n) {
      *list_pp = entry->next;
      free(entry)
    }
    list_pp = &entry->next;
    entry = entry->next;
  }
}
