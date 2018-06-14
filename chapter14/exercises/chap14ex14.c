/* Chapter 14 Exercise 14 */

/* Show what the following program will look like after preprocessing. Some lines of the
 * program may cause compilation errors; find all such errors.
*/

#define N = 10
#define INC(x) x+1
#define SUB(x,y) x-y
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR(x) * (x))
#define M1(x,y) x##y
#define M2(x,y) #x #y

int main(void)
{
    int a[N], i, j, k, m;

#ifdef N
    i = j;
#else
    j = i;
#endif

    i = 10 * INC(j);
    i = SUB(j, k);
    i = SQR(SQR(j));
    i = CUBE(j);
    i = M1(j, k);
    puts(M2(i, j));

#undef SQR
    i = SQR(j);
#define SQR
    i = SQR(j);

    return 0;
}

/* Answer:
 *
 * int main(void)
 * {
 *    int a[= 10], i, j, k, m;
 *    Error, array is given a size with an '=' sign in it which is illegal
 *
 *
 *    i = j;    *Undefined behavior, j isn't initialized yet
 *
 *
 *
 *
 *    i = 10 * j+1;               *Undefined behavior, j isn't initialized yet
 *    i = j-k;                    *Undefined behavior, j and k aren't initialized yet
 *    i = ((((j)*(j))*((j)*(j)))) *Undefined behavior, j isn't initialized yet
 *    i = (((j)*(j)) * (j));      *Undefined behavior, j isn't initialized yet
 *    i = jk;                     *Error, attempt to assign variable jk to i,
 *                                 jk has never been declared
 *    puts("i" "j");              *Only an error if we assume <stdio.h> wasn't included
 *
 *
 *    i = SQR(j);                 *Error here as SQR was undefined the line before,
 *                                 but was called here
 *
 *    i = (j);                     *SQR was redefined the line before,
 *                                  but has no tokens so evaluates to nothing
 *
 *    return 0;
 * }
*/
