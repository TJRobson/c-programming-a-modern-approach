/* Chapter 9 Programming Project 8 */
/* Game of Craps */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

#define LOSE (dice == 2 || dice == 3 || dice == 12)
#define WIN (dice == 7 || dice == 11)

int roll_dice(void);
bool play_game(void);

int main(void)
{
  int wins = 0, loses = 0;
  char ch;
  bool keep_playing = true;

  srand((unsigned) time(NULL));

  do {

    if (play_game()) {
      wins++; printf("You win!\n");
    } else {
      loses++; printf("You lose!\n");
    }
    
    printf("\nPlay again (y/n)? ");
    while ((ch = tolower(getchar())) != 'y' && ch != 'n') ;
    ch == 'n' ? keep_playing = false : keep_playing;

  } while(keep_playing);

  printf("\nWins: %d Loses: %d\n", wins, loses);

  return 0;
}

int roll_dice(void) {
  int die1 = (rand() % 6) + 1;
  int die2 = (rand() % 6) + 1;
  return die1 + die2;
}

bool play_game(void) {
  int dice, point;
  bool point_set = false;

  while(true) {
    dice = roll_dice();
    printf("You rolled: %d\n", dice);

    if (!point_set) {
       if (WIN) {
         return true;
       }
       if (LOSE) {
         return false;
       }
       point = dice;
       printf("Your point is: %d\n", point);
       point_set = true;

    } else {
      if (dice == point) {
        return true;
      }
      if (dice == 7) {
        return false;
      } else {
        continue;
      }
    }
  }
}
