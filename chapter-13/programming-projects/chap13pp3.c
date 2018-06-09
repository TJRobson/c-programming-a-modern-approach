/* Chapter 13 Programming Project */
/* deal.c from section 8.2 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int num_cards, rank, suit;
  const char *rank_strs[] =  {"Two", "Three", "Four", "Five", "Six",
                              "Seven", "Eight", "Nine", "Ten",
                              "Jack","Queen", "King", "Ace"};

  const char *suit_strs[] = {"Clubs", "Diamonds",
                             "Hearts", "Spades"};

  srand((unsigned) time(NULL));

  printf("\nEnter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("\nYour hand:");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;
    rank = rand() % NUM_RANKS;
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf("\n%s of %s", *(rank_strs + rank), *(suit_strs + suit));
    }
  }
  printf("\n");

  return 0;
}
