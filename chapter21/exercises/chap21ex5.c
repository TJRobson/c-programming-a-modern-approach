/* Chapter 21 Exercise 5 */

/* The islower function, which belongs to the <ctype.h> header, tests whether
   a character is a lower-case letter. Why would the following macro version
   of islower not be legal, according to the C standard (You may assume that
   the character set is ASCII)? */

#define islower(c) ((c) >= 'a' && (c) <= 'z')

/* Answer: The macro definiton is not legal as it checks the c
           variable at two occations.*/

/* The C standard states that a parameterized macro that substitutes
   for a library function must:
   1. Be fully protected by parentheses.
   2. Evaluate its arguments exactly once. */
