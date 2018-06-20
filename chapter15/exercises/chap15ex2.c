/* Chapter 15 Exercise 2 */

/* Which of the following should not be put in a header file?
 * Why not?
 * a) Function prototypes.
 * b) Function defintions. - winner winner chicken dinner.
 * c) Macro defintions.
 * d) Type defintions.
*/

/* You only need function prototypes in header files, as functions
 * will be compiled from the source file. If the there was a function
 * defintion in a header file it would be compiled everytime it was
 * refrenced in a source file. Another effect would be that there would
 * be mulitple instances of the fiunction, causing an error when at the
 * linkage stage.
*/
