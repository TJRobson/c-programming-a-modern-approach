/* Chapter 18 Exercise 3 */

/* List the storage duration (static or automatic), scope (block or file),
 * and linkage (internal, external, or none) or each variable and
 * parameter in the following file:
*/

extern float a;

void f(register double b)
{
  static int c;
  auto char d;
}

/* variable a
 * storage duration: static?
 * scope: file.
 * linkage: external.
*/

/* variable b
 * storage duration: static.
 * scope: file.
 * linkage: internal.
*/

/* variable c
 * storage duration: static.
 * scope: block.
 * linkage: none.
*/

/* variable d
 * storage duration: auto.
 * scope: block.
 * linkage: none.
*/
