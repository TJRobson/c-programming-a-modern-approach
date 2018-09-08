/* Chapter 17 Exercise 13 */

/* The following function is suppose to new node into its proper place
 * in an ordered list. Unfortunately, the function doesn't work correctly
 * in all cases. Explain what's wrong with it and show how to fix it.
 * Assume the node structure is the one defined in Section 17.5.
*/

struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node)
{
  struct node *cur = list, *prev = NULL;

  while (cur->value <= new_node->value) {
    prev = cur;
    cur = cur->next;
  }
  prev->next = new_node;
  new_node->next = cur;
  return list;
}

/* If new_node->value greater than any of those in the list the loop
 * will move to the last node in the list, the NULL node. Or the list
 * is empty.
 *
 * Or if prev remains NULL, meaning that new_node->value will be the first
 * node in the list.
*/

/* fixed */

struct node *insert_into_ordered_list(struct node *list,
                                      struct node *new_node)
{
  struct node *cur = list, *prev = NULL;

  for (; cur; prev = cur, cur = cur->next) {
    if (cur->value > new_node->value) {
      break; /* found the node that is great than new_node */
    }
  }
  if (list == NULL) {
    return new_node;
  }
  else if (prev == NULL) {
    list->next = new_node;
    new_node->next = cur;
  }
  else {
    prev->next = new_node;
    new_node->next = cur;
  }

  return list;
}


/* Pointer to pointer version: */

struct node *insert_into_ordered_list(struct node *list, struct node *new_node)
{
  struct node **pp = &list;

  while (list) {
    if (list->value >= new_node->value) {
      break;
    }
    pp = &list->next;
    list = list->next;
  }
  *pp = new_node;
  new_node->next = list;
  return list;
}
