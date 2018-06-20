/* Chapter 15 Exercise 3 */

/* We saw that writing #include <file> instead of #include "file" may
 * not work if file is one that we're written. Would there be any problem
 * with writing #include "file" instead of #include <file> if file is a
 * system header?
 *
 * Sort of, but it will work, the compiler would look for the file within the
 * project header files, as a <file> is part system header files it will look
 * there, if the file isn't found in the project ones first.
*/
