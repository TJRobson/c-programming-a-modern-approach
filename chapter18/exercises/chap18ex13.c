/* Chapter 18 Exercise 13 */

/* Which of the following declarations are legal? (Assume that PI is a
 * macro that represents 3.14159.)
*/
 /* a) */
 char c = 65; /* Legal */

 /* b */
 static int i = 5, j = i * i; /* Illegal  - i in not a constant expression */

 /* c */
 double d = 2 * PI; /* Legal */

 /* d */
 double angles[] = {0, PI / 2, PI, 3 * PI / 2}; /* Legal */
