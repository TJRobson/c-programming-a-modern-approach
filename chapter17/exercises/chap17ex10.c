/* Chapter 17 Exercise 10 */

/* Modify the print_part function of Section 16.2 so that its parameter
 * is a pointer to a part structure. Use the -> operator in your Answer
*/

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
}

void print_part(struct part *p)
{
  printf("Part Number: %d\n", p->number);
  printf("Part Name: %s\n", p->name);
  printf("Quantity On Hand: %d\n", p->on_hand);
}
