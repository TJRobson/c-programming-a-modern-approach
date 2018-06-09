/* Chapter 13 Exercise 12 */
#include <stdio.h>
#include <string.h>

#define N 12

int read_line(char arr[], int n);
void get_extension(const char *file_name, char *extension);

int main(void)
{
  char file[N], extension[4];

  printf("\nEnter a file name: ");
  read_line(file, N);
  get_extension(file, extension);
  printf("Extension is: %s\n", extension);

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

// void get_extension(const char *file_name, char *extension)
// {
//   char *e = extension;
//
//   while (*file_name) {
//     if (*file_name++ == '.') {
//       while (*file_name) {
//         *e++ = *file_name++;
//       }
//     }
//   }
//   *e = '\0';
// }

void get_extension(const char *file_name, char *extension)
{
  while (*file_name) {
    if (*file_name++ == '.') {
      strcpy(extension, file_name);
      return;
    }
  }
  strcpy(extension, "");
}
