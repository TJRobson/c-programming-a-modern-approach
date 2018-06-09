/* Chapter 13 Exercise 18 */
#include <stdio.h>
#include <string.h>

void remove_filename(char *url);

int main(void)
{
  char url[] = "http://www.knking.com/index.html";

  printf("\nurl with file name: %s", url);
  remove_filename(url);
  printf("\nwithout file name : %s\n", url);

  return 0;
}

void remove_filename(char *url)
{
  while (*url++) {
    if (strncmp(url, ".com/", 4) == 0) {
      *(url+4) = '\0';
      break;
    }
  }
}

// void remove_filename(char *url)
// {
//   while (*url++); /*Empty body */
//   while (*url-- != '/'); /*Empty body */
//   *++url = '\0';
// }
