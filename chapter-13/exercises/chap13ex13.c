/* Chapter 13 Exercise 13 */
#include <stdio.h>
#include <string.h>

#define N 20

int read_line(char arr[], int n);
void build_index_url(const char *domain, char *index_url);

int main(void)
{
  char domain[N], i_url[50];

  printf("\nEnter a domain: ");
  read_line(domain, N);
  build_index_url(domain, i_url);
  printf("Full url address: %s\n", i_url);

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

void build_index_url(const char *domain, char *index_url)
{
  strcpy(index_url, "http://wwww.");
  strcat(index_url, domain);
  strcat(index_url, "/index.html");
}
