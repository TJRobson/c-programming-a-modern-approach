/* Chapter 16 Exercise 1 */

/* In the folling declarations, the x and y structures have members named
 * x and y:
*/

struct { int x, y; } x;
struct { int x, y; } y;

/* Are these declarations legal on an individual basis? Could both declarations
 * appear as a shown in a program? Justify your answer.
*/

/* Answer: Yes they are legal, because a struct has its own block scope
 * meaning that the variables one struct cannnot see the others.
 * The two structs have differing names and the variables it contains
 * can only accessed by using the name
 * as in: x.x x.y or y.x of y.y
*/ 
