/* Chapter 22 Exercise 3 */

/* Find the error in the following program fragment and show how to fix it */
#include <stdio.h>

FILE *fp

if (fp = fopen(filename, "r")) {
  /* read characters until end-of-file */
}
fclose(fp);

/* Fixed */

FILE *fp

if ((fp = fopen(filename, "r")) == NULL) {
  printf("Error: could not open file %s.\n", filename);
  exit(EXIT_FAILURE);
}
else {
  /* read characters until end-of-file */
}
fclose(fp);
