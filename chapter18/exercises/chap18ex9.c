/* Chapter 18 Exericses 8a-8d */

/* Use a series of type definitions to simplify each of the declarations
 * in Exercise 8
*/

/* a) */
char (*x[10]) (int);

typedef char *Func(int);
typedef Func *Func_ptr;
typedef Func_ptr Func_ptr_array[10];
Func_ptr_array x;

/* b) */
int (*x(int)) [5];

typedef int Array[5];
typedef Array *Func(int);
Func *x;

/* c) */
float *(*x(void)) (int);

typedef float *Outer_func(int);
typedef Outer_func *Inner_func(void);
Inner_func x;

/* d) */
void (*x(int, void (*y) (int))) (int);

typedef void Outer_func(int);
typedef void *Arr_fn(int) ;
typedef int Outer_func *Inner_func(int, Arr_fn);
Inner_func x;
