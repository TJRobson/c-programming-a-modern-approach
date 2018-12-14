/* Chapter 20 Exercise 5 */
#include <stdio.h>

#define MK_COLOUR(r, g, b) ((long) (r) << 16 | (g) << 8 | (b))
#define GET_RED(colour) ((colour) & 0xff) /* 255 - 11111111 */
#define GET_GREEN(colour) ((colour) >> 8 & 0xff)
#define GET_BLUE(colour) ((colour) >> 16 & 0xff)
