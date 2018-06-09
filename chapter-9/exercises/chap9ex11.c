/* Chapter 9 Exercise 11 */
#include <stdio.h>
#include <ctype.h>

#define N 10

float compute_GPA(char grades[], int n);

int main(void)
{
  int n = N;
  char grades[N] = {'A', 'B', 'b', 'A', 'c', 'D', 'a', 'd', 'A', 'B'};

  printf("\nGPA: %.2f\n", compute_GPA(grades, n));

  return 0;
}

float compute_GPA(char grades[], int n) {
  float total = 0.0; int i; char ch;
  for (i = 0; i < n; i++) {
    ch = toupper(grades[i]);
    switch (ch) {
      case 'A': total += 4; break;
      case 'B': total += 3; break;
      case 'C': total += 2; break;
      case 'D': total += 1; break;
      case 'F': total += 0; break;
    }
  }
  return total / n;
}
