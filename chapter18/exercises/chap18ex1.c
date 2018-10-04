/* Chapter 18 Exercises 1a-1d */

/* For each of the following declarations, identify the storage
 * class, type qualifiers, type specifiers, declarators and initializers.
*/

/* a) */
static char **lookup(int level);
/* static - storage class, char - type specifier
 * **lookup(int level); - declarator.
*/

/* b) */
volatile unsigned long io_flags;
/* volatile - type qualifier, unsigned long - type specifier
 * io_flags - declarator.
*/

/* c) */
extern char *file_name[MAX_FILES], path[];
/* extern - storage class, char - type specfier
 * *file_name[MAX_FILES], path[] - declarators.
*/

/* d) */
static const char token_bug[] = "";
/* static - storage class, const - type qualifier
 * char - type specfier, token_bug[] - declarator
 * = ""; - initializer.
*/
