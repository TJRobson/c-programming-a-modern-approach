/* Chapter 18 Exercise 11 */

/* In Section 18.4, we saw that the following declarations are illegal: */

int f(int) [];    /* functions can't return arrays */
int g(int)(int);  /* functions can't return functions */
int a[10](int);   /* array elements can't be functions */

/* We can, however, achieve similar effects by using pointers: a function
 * can return a pointer the first element in an array, a function can
 * return a pointer to a function, and the elements of an array can be
 * pointers to functions. Revise each of the declarations accordingly.
*/

int *f(int);
int (*g(int))(int);
int (*a[10])(int);
