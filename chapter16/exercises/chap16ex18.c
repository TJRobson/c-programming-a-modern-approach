/* Chapter 16 Exercise 18 */
#include <stdio.h>

/* a) */
typedef enum {EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING} Piece;
typedef enum {BLACK, WHITE} Colour;

/* b) */
typedef struct {
  Piece piece;
  Colour colour;
} Square;

/* c) & d) */
Square board[8][8] = {
    {{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK},
    {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK}},
    {{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},
    {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}},

    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},
    {{EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},
    {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK}},

    {{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},
    {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}},
    {{ROOK, WHITE}, {KNIGHT,WHITE}, {BISHOP,WHITE}, {QUEEN, WHITE},
    {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE}},
};

int main(void)
{
  int row, col;

  printf("\n\n");

  for (row = 0; row < 8; row++) {
    for (col = 0; col < 8; col++) {
      if(board[row][col].piece == EMPTY) {
        printf("%d%c ", board[row][col].piece, 'e');
      } else if (board[row][col].colour == BLACK) {
        printf("%d%c ", board[row][col].piece, 'B');
      } else if (board[row][col].colour == WHITE) {
        printf("%d%c ", board[row][col].piece, 'W');
      }
    }
    printf("\n");
  }

  printf("\n");

  return 0;
}
