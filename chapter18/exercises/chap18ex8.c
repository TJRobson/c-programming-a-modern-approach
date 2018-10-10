/* Chapter 18 Exercises 8a-8d */

/* Write a complete description of the type of x as specified by
 * each of the following declarations.
*/

/* a) */
char (*x[10]) (int);
/* x is array of ten function pointers,
 * the functions have a single parameter of type int and
 * have the return type of char.
*/

/* b) */
int (*x(int)) [5];
/* x is a function that,
 * that takes in a single parameter of type int,
 * and returns a pointer, that points to an array of five ints.
*/

/* c) */
float *(*x(void)) (int);
/* x is a function with no parameters.
 * that returns a function pointer with a single parameter of type int
 * and returns a pointer to a float.
*/

/* d) */
void (*x(int, void (*y) (int))) (int);
/* x is a function that has two parameters,
 * the first is of type int
 * the second is a pointer to a function
 * with a single parameter of type int and returns nothing.
 * x returns a pointer to a function with a parameter of type int
 * and has return type of void.
*/
