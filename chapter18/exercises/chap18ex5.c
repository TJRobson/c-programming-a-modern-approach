/* Chapter 18 Exercises 5a-5d */

/* State whether each of the following statements is true or false.
 * Justify each answer
 *
 * a) Every variable with static storage duration has file scope.
 *    False - A static variable declered within a block would have
 *            block scope
 *
 * b) Every variable declared inside a function has no linkage.
 *    False - It would not if it is declered as extern.
 *            Internal - if decleared within the file.
 *            External, otherwise.
 *
 * c) Every variable with internal linkage has static storage duration.
 *    True  - The only way to give a variable internal linkage is by
 *            declaring it tatic and this variable must be declared
 *            outside of a function.
 *
 * d) Every parameter has block scope.
 *    True  - Function parameters always has block scope.
 *            The parameters are copied with the function body is executed,
 *            these copies have automatic storage duration and are discarded
 *            Using pointers is a way around this.
 *
*/
