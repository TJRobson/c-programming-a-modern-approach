/* Chapter 20 Exercise 11 */

/* Each of the following macros defines the position of a single bit
 * within and integer:
*/

#define SHIFT_BIT 1
#define CTRL_BIT 2
#define ALT_BIT 4

/* The following statement is supposed to test whether any of the three
 * bits have been set, but it never displays the specified message.
 * Explain why the statement doesn't work and show how to fix it. Assume
 * that key_code is an int variable.
*/

if (key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT) == 0)
    printf("No modifier keys pressed\n");

/* This statement doesn't work because of operator precedence, as the
 * equality operator has higher precedence than bitwise and, we need
 * to use parentheses as follows:
*/

if ((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
    printf("No modifier keys pressed\n");

// This ensures that we & the two ints first and then compare the result to 0.
