/* Chapter 14 Exercise 10 */

/* Functions can often - but not always - be written as parameterized
 * macros. Discuss what function would make it unsuitable as a macro.
*/

/* Answer:
 * Functions that may often be passed arguments with side effects of assignment,
 * such as the arguments supplied with the prefix and postfix operators
 * shouldn't be used in a macro.
*/
