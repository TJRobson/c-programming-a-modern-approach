/* Chapter 20 Exercise 5 */
#include <stdio.h>
#include <string.h>

#define MK_COLOUR(r, g, b) ((long) (r) << 16 | (g) << 8 | (b))
#define GET_RED(colour) ((colour) & 0xff) /* 255 - 1111 1111 */
#define GET_GREEN(colour) ((colour) >> 8 & 0xff)
#define GET_BLUE(colour) ((colour) >> 16 & 0xff)

char *byte_to_binary_str(int byte)
{
    static char bit_string[9];
    bit_string[0] = '\0';

    int mask;
    for (mask = 0x80; mask > 0; mask >>= 1) {
        /* Check if the mask bit is set */
        strcat(bit_string, byte & mask ? "1" : "0");
    }

    return bit_string;
}

int main(void)
{
    int red = 25;
    int green = 195;
    int blue = 98;

    long colors = MK_COLOUR(red, green, blue);
    unsigned int i;

    printf("\nAll bytes in colors\n");
    for (i = 0; i < sizeof(long); i++) {
        printf("Byte %d: %s\n", i, byte_to_binary_str(colors >> (i * 8)));
    }

    printf("\nRed (Byte 0)\n");
    printf("Binary: %s\tDecimal: %ld\n",
    byte_to_binary_str(colors), GET_RED(colors));

    printf("Green (Byte 1)\n");
    printf("Binary: %s\tDecimal: %ld\n",
    byte_to_binary_str(colors >> 8), GET_GREEN(colors));

    printf("Blue (Byte 2)\n");
    printf("Binary: %s\tDecimal: %ld\n\n",
    byte_to_binary_str(colors >> 16), GET_BLUE(colors));

    return 0;
}
