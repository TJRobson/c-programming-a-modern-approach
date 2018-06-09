/* Chapter 8 Exercise 4 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  bool weekend[] = { [0] = true, [6] = true};
  int i;

  for(i = 0; i < 7; i++){
    printf("Day %d is part of the weekend : %s\n", i + 1, weekend[i] ? "true" : "false");
  }

  return 0;
}
