/* Chapter 14 Exercise 16 */

/* (C99) Assume that the following macro definitions are in effect */
#define INDENT(x) PRAGMA(indent #x)
#define PRAGMA(x) _Pragma(#x)

/* What will the following line look like after macro expansion? */
INDENT(foo)

/* Answer:
 *
 * #pragma indent "foo"
 *
*/


/* The C99 standard states:
 * A parameter in the replacement list, unless preceded by a # or ## preprocessing token or
 * followed by a ## preprocessing token, is replaced by the corresponding argument after all
 * macros contained therein have been expanded.
 *
 * Therefore the parameter in IDENT is stringized before being expanded to the PRAGMA macro:
 * PRAGMA(ident "foo")

 * This expands the PRAGMA macro to:
 * _Pragma(#ident #"foo")

 * which stringizes the arguments to:
 * _Pragma("ident" "\"foo\"")

 * which is finally destringized by _Pragma to:
 * #pragma ident "foo"
*/
