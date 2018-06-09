/* Chapter 13 Exercise 17 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define N 20

int read_line(char arr[], int n);
bool test_extension(const char *file_name, const char *extension);

int main(void)
{
  char file[N], ex[4];
  bool match;

  printf("\nEnter a file name: ");
  read_line(file, N);
  printf("Enter the extention type: ");
  read_line(ex, 4);
  match = test_extension(file, ex);
  printf("File name matches extention type: %s\n", match
                                                   ? "True"
                                                   : "False");

  return 0;
}

int read_line(char arr[], int n)
{
  int i, ch;
  for (i = 0; (ch = getchar()) != '\n' && i < n - 1; i++) {
    arr[i] = ch;
  }
  arr[i] = '\0';
  return i;
}

bool test_extension(const char *file_name, const char *extension)
{
  while (*file_name++ != '.');
  if (strlen(file_name) != strlen(extension)) {
    return false;
  }
  while (*file_name) {
    if (toupper(*file_name++) != toupper(*extension++)) {
      return false;
    }
  }
  return true;
}
