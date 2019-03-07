/* Chapter 22 Exercise 7 */

/* Suppose that we call scanf as follows: */

n = scanf("%d%f%d", &i, &x, &j);

/* (i, j adn n are int variales and x is float variable.) Assumming that the
 * input stream contains the characters shown, give the values i, j, n and x
 * after the call. In addition, indicate which characters were consumed by
 * the call.
*/

/* a) 10●20●30¤ -   i = 10, x = 20.0, j = 30, n = 3
 * b) 1.0●2.0●3.0¤  i = 1, x = 0.0, j = 2, n = 3
 * c) 0.1●0.2●0.3¤  i = 0, x = 0.1, j = 0, n = 3
 * d) .1●.2●.3¤     i = undefined, x = undefined, j = undefined, n = 0
*/
