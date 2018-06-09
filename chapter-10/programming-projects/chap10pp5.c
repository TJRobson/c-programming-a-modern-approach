/* Chapter 10 Programming Project 5 */
/* Ace-low straigh */
/* Classifies a poker hand */
#include <stdbool.h>    /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5

/* external variables */
int hand[NUM_CARDS][2];
bool straight, flush, royal, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************
 * main: Calls read_cards, analyze hand, and print_result *
 *       repeatedly.                                      *
 *********************************************************/
int main(void)
{
    for (;;)
    {
        read_cards();
        analyze_hand();
        print_result();
    }
}

/**********************************************************
 * read_cards: Reads the cards into the external          *
 *             variables hand - array                     *
 *             checks for bad cards and duplicate cards.  *
 *********************************************************/
void read_cards(void)
{
    char ch, rank_ch, suit_ch;
    int rank, suit, i;
    bool bad_card, duplicate_card = false;
    int cards_read = 0;


    for (rank = 0; rank < NUM_CARDS; rank++) {
      for (suit = 0; suit < 2; suit++) {
        hand[rank][suit] = 0;
      }
    }

    printf("\n");

    while (cards_read < NUM_CARDS) {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch)
        {
            case '0':           exit(0);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch) {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n') {
          if (ch != ' ') bad_card = true;
        }
        /* Check for duplicate_card */
        if (cards_read > 0) {
          for (i = cards_read - 1; i >= 0; i--) {
            if (hand[i][0] == rank && hand[i][1] == suit) {
              duplicate_card = true;
              break;

            }
          }
        }

        if (bad_card) {
            printf("Bad card; ignored.\n");
        } else if (duplicate_card) {
            printf("Duplicate card; ignored.\n");
            duplicate_card = false;
        } else {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

/**********************************************************
 * analyze_hand: Determines whether the hand contains a   *
 *               straight, a flush, four-of-a-kind,       *
 *               and/or three-of-a-king; determines the   *
 *               number of pairs; stores the results into *
 *               the external variables straight, flush,  *
 *               four, three, and pairs                   *
 *********************************************************/
void analyze_hand(void)
{
    int num_consec;
    int nxt, rank;

    royal = false;
    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    /* Sort the hand array */
    int i, j, small, temp_rank, temp_suit;

    for (i = 0; i < NUM_CARDS; i++) {
      small = i;
      for (j = i+1; j < NUM_CARDS; j++) {
        if (hand[j][0] < hand[small][0]) {
          small = j;
        }
      }
      temp_rank = hand[i][0];
      temp_suit = hand[i][1];
      hand[i][0] = hand[small][0];
      hand[i][1] = hand[small][1];
      hand[small][0] = temp_rank;
      hand[small][1] = temp_suit;
    }

    /* checks for flush */
    for (rank = 1; rank < NUM_CARDS; rank++) {
      if (hand[rank][1] != hand[0][1]) {
        flush = false;
        break;
      }
    }

    /* check for straight */
    for (rank = 1; rank < NUM_CARDS; rank++) {
      if (hand[rank][0] - hand[rank-1][0] != 1) {
        /* check for ace-low */
        if (hand[rank][0] == 12 && hand[rank-1][0] == 3) {
          continue;
        }
        straight = false;
        break;
      }
    }
    /* Checks for a royal flush */
    /* first card must be rank 8 (number 10) for royal flush to be a possibility */
    if (hand[0][0] == 8 && straight && flush) {
        royal = true;
    }

    /* check for 4-of-a-kind, 3-of-a-kind, and pairs */
    for (rank = 0; rank < NUM_CARDS; rank++) {
      num_consec = 0;
      for (nxt = rank + 1; nxt < NUM_CARDS; nxt++) {
          if (hand[rank][0] == hand[nxt][0]) {
             num_consec++;
           }
      }
      if (num_consec == 3) {
        four = true;
      } else if (num_consec == 2) {
        rank++;
        three = true;
      } else if (num_consec == 1) {
        pairs++;
      }
    }
}

/**********************************************************
 * print_result: Prints the classification of the hand,   *
 *               based on the values of the external      *
 *               variables straight, flush, four, three,  *
 *               and pairs                                *
 *********************************************************/
void print_result(void)
{
    printf("\n");
    if (royal)             printf("Royal flush");
    else if (straight
             && flush)     printf("Straight flush");
    else if (four)         printf("Four of a kind");
    else if (three &&
             pairs == 1)   printf("Full house");
    else if (flush)        printf("Flush");
    else if (straight)     printf("Straight");
    else if (three)        printf("Three of a kind");
    else if (pairs == 2)   printf("Two pairs");
    else if (pairs == 1)   printf("Pair");
    else                   printf("High card");

    printf("\n\n");
}
