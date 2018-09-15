/* inventory.c (Chapter 16, page 391) */
/* Maintains a parts database (array version) */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  struct part *next;
} *inventory;

int inventory_ct = 1;
int num_parts = 0;

int find_part(int number);
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

  /* Allocate memory for initial part, to be realloc'd later on */
  if ((inventory = malloc(sizeof(struct part) * inventory_ct)) == NULL) {
    printf("\nError: malloc failed\n");
    exit(EXIT_FAILURE);
  }

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
 *            array. Returns the array index if the part  *
 *            number is found; otherwise, returns -1.     *
 **********************************************************/
int find_part(int number)
{
  int i;

  for (i = 0; i < num_parts; i++) {
    if (inventory[i].number == number) {
      return i;
    }
  }
  return -1;
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

  if (num_parts == inventory_ct) {
    if ((inventory = realloc(inventory,
         sizeof(struct part) * (inventory_ct *= 2))) == NULL) {
        printf("\nError: realloc failed.\n");
        exit(EXIT_FAILURE);
      }
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number) >= 0) {
    printf("Part already exists.\n");
    return;
  }

  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[num_parts].on_hand);
  num_parts++;
}

/**********************************************************
 * search: Prompts the user to enter a part number, then  *
 *         looks up the part in the database. If the part *
 *         exists, prints the name and quantity on hand;  *
 *         if not, prints an error message.               *
 **********************************************************/
void search(void)
{
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
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
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand += change;
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
  int i;

  qsort(inventory, sizeof(inventory) / sizeof(inventory[0]),
        sizeof(struct part), compare_parts);

  printf("Part Number   Part Name                  "
         "Quantity on Hand\n");
  for (i = 0; i < num_parts; i++)
    printf("%7d       %-25s%11d\n", inventory[i].number,
           inventory[i].name, inventory[i].on_hand);
}


int compare_parts(const void *p, const void *q)
{
    return ((struct part *) q)->number -
           ((struct part *) p)->number;
}
