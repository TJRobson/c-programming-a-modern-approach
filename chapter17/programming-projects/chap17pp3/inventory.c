/* inventory.c (Chapter 17.5, page 434) */
/* Maintains a parts database (linked list version) */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  struct part *next;
};

struct part *inventory = NULL;

struct part *find_part(int n);
void insert(void);
void search(void);
void update(void);
void print(void);
int compare_parts(const void *p, const void *q);

/**********************************************************
 * main: Prompts the user to enter an operation code,     *
 *       then calls a function to perform the requested   *
 *       action. Repeats until the user enters the        *
 *       command 'q'. Prints an error message if the user *
 *       enters an illegal code.                          *
 **********************************************************/
 int main(void)
{
  char code;

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n') ; /* skips to end of line */
    switch (code) {
      case 'i': insert(); break;
      case 's': search(); break;
      case 'u': update(); break;
      case 'p': print();  break;
      case 'q': return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

/**********************************************************
 * find_part: Looks up a part number in the inventory     *
 *            linked list. Returns the struct part        *
 *            matching the number if it exists. If not    *
 *            found, returns NULL.                        *
 **********************************************************/
struct part *find_part(int n)
{
  struct part *p;

  for (p = inventory; p != NULL && p->number < n; p = p->next) ;

  if (p != NULL && p->number == n) {
    return p;
  }

  return NULL;
}

/**********************************************************
 * insert: Prompts the user for information about a new   *
 *         part and then inserts the part into the        *
 *         database. Prints an error message and returns  *
 *         prematurely if the part already exists or the  *
 *         database is full.                              *
 **********************************************************/
void insert(void)
{
  int part_number;

  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number)) {
    printf("\nPart already exists.\n");
    return;
  }

  struct part *new_part;
  if ((new_part = malloc(sizeof(struct part))) == NULL) {
    printf("Error: malloc failed.\n");
    return;
  }

  new_part->number = part_number;
  printf("Enter part name: ");
  read_line(new_part->name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &(new_part->on_hand));

  /* Inserts new part into correct place (sorted) */

  struct part **pp = &inventory;

  while (*pp) {
    if ((*pp)->number > part_number) {
      break;
    }
    pp = &(*pp)->next;
  }
  new_part->next = *pp;
  *pp = new_part;
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the database. If the part *
 *         exists, prints the name and quantity on hand;  *
 *         if not, prints an error message.               *
 **********************************************************/
void search(void)
{
  int number;

  printf("Enter part number: ");
  scanf("%d", &number);
  struct part *p = find_part(number);
  if (p) {
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
  } else {
    printf("Part not found.\n");
  }
}

/**********************************************************
 * update: Prompts the user to enter a part number.       *
 *         Prints an error message if the part doesn't    *
 *         exist; otherwise, prompts the user to enter    *
 *         change in quantity on hand and updates the     *
 *         database.                                      *
 **********************************************************/
void update(void)
{
  int number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  struct part *p = find_part(number);
  if (p) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    p->on_hand += change;
  } else {
    printf("Part not found.\n");
  }
}

/**********************************************************
 * print: Prints a listing of all parts in the database,  *
 *        showing the part number, part name, and         *
 *        quantity on hand. Parts are printed in the      *
 *        sorted order via part number.                   *
 **********************************************************/
void print(void)
{
  struct part *p = inventory;
  // qsort(inventory, sizeof(inventory) / sizeof(inventory[0]),
  //       sizeof(struct part), compare_parts);
  printf("Part Number   Part Name                  "
         "Quantity on Hand\n");
  for (; p != NULL; p = p->next)
    printf("%7d       %-25s%11d\n", p->number,
           p->name, p->on_hand);
}


// int compare_parts(const void *p, const void *q)
// {
//     return ((struct part *) q)->number -
//            ((struct part *) p)->number;
// }

/**********************************************************
 * erase: Prompts the user to enter a part number.        *
 *        Prints an error message if the part doesn't     *
 *        exit. Then removes the part from the database.  *
 **********************************************************/
