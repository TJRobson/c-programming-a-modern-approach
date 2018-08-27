/* Chapter 17 Exericse 7 */

/* The following loop is suppose to delete all nodes from a linked list
 * and release the memory that they occupy. Unfortunately, the loop is
 * incorrect. Explain what's wrong with it and show how to fix the bug
*/

for (p = first; p != NULL; p = p->next) {
  free(p);
}

/* The loop frees the  p  before p->next is called, causing p to become a
 * dangling pointer.
*/

struct node *p = first, *temp;

while (p != NULL) {
  temp = p;
  p = p->next;
  free(temp);
}
