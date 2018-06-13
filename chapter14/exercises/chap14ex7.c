/* Chapter 14 Exercise 7a 7b 7c */

/* Let GENERIC_MAX(type) */

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
    return x > y ? x : y;       \
}


/* a) Show the preprocessor's expansion of GENERIC_MAX(long).
 * Answer:
 * #define long long_max(long x, long y)
 * {
 *    return x > y ? x: y;
 * }
 *
 * b) Explain why GENERIC_MAX doesn't work for basic types such as
 * unsigned long.
 * Answer:
 * GENERIC_MAX take a type name and attaches it dirrectly to _max. To declear
 * an type as unsigned would require a space, which would cause an error in
 * this function.
 *
 * c) Describe a technique that would allow us to use GENERIC_MAX with basic
 * types such as unsigned long. Hint Don't change the defintion of GENERIC_MAX.
 * Answer:
 */

typedef unsigned long un_long;

#define GENERIC_MAX(type)       \
type type##_max(type x, type y) \
{                               \
   return x > y ? x: y;         \
}
