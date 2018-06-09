/* Chapter 9 Programming Project 3 */
 // Chapter 8 Programming Project 9 -
 // done with : generate_random_walk func
 //           & print_array func
 #include <stdlib.h>
 #include <stdio.h>
 #include <stdbool.h>
 #include <time.h>

 #define NUM_ROWS 10
 #define NUM_COLS 10
 #define EMPTY '.'

 #define LEFT 0
 #define UP 1
 #define RIGHT 2
 #define DOWN 3

 #define BLOCKED (blocked[LEFT] && blocked[UP] && blocked[RIGHT] && blocked[DOWN])

 void generate_random_walk(char walk[NUM_ROWS][NUM_COLS]);
 void print_array(char walk[NUM_ROWS][NUM_COLS]);

 int main(void)
 {
   int row, col;
   char ten_by_ten[NUM_ROWS][NUM_COLS];

   /* Populate ten_by_ten array with '.' */
   for (row = 0; row < NUM_ROWS; row++) {
     for(col = 0; col < NUM_COLS; col++) {
       ten_by_ten[row][col] = '.';
     }
   }
   printf("\n");
   generate_random_walk(ten_by_ten);
   print_array(ten_by_ten);
   printf("\n");

   return 0;
 }

 void print_array(char walk[NUM_ROWS][NUM_COLS]) {
   int row, col;
   for (row = 0; row < NUM_ROWS; row++) {
     for (col = 0; col < NUM_COLS; col++) {
       printf(" %c ", walk[row][col]);
     }
     printf("\n");
   }
 }

 void generate_random_walk(char walk[NUM_ROWS][NUM_COLS]){
   int dir, row = 0, col = 0;
   bool blocked[4] = {false};
   char ch = 'A';
   /* Seed Random Fucntion */
   srand((unsigned) time(NULL));
   /* Start of random walk */
   walk[row][col] = ch;
   for (++ch; ch <= 'Z'; ch++) {
     if ( BLOCKED ) { break; }
     while (!BLOCKED) {
       dir = rand() % 4;
       switch (dir) {
         case LEFT:
             if (col - 1 >= 0 && walk[row][col-1] == EMPTY) {
               col--; break;
             } else {
               blocked[LEFT] = true; continue;
             }
         case   UP:
             if (row - 1 >= 0 && walk[row-1][col] == EMPTY) {
               row--; break;
             } else {
               blocked[UP] = true; continue;
             }
         case RIGHT:
             if (col + 1 < NUM_COLS && walk[row][col+1] == EMPTY) {
               col++; break;
             } else {
               blocked[RIGHT] = true; continue;
             }
         case DOWN:
             if (row + 1 < NUM_ROWS && walk[row+1][col] == EMPTY) {
               row++; break;
             } else {
               blocked[DOWN] = true; continue;
             }
       }
       blocked[0] = false; blocked[1] = false;
       blocked[2] = false; blocked[3] = false;
       break;
     } if (!BLOCKED) { walk[row][col] = ch; }
   }
 }
