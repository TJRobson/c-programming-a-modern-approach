/* Chapter 16 Exercise 22 */

/* a) */
enum chess_pieces {KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN};

const int piece_value_a[6] = {200, 9, 5, 3, 3, 1};

/* b) */
const int piece_value_b[6] = {
  [KING]   = 200,
  [QUEEN]  = 9,
  [ROOK]   = 5,
  [BISHOP] = 3,
  [KNIGHT] = 3,
  [PAWN]   = 1
};
