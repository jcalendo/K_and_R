#include <stdio.h>

// Write a program that asks the user for a 24-hour time then displays the time in
// 12-hoour form
int main(void)
{
  int h1, m, h2;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h1, &m);

  if (h1 > 12) {
    h2 = 12 - (24 - h1);
  } else if (h1 < 12 & h1 > 0) {
    h2 = h1;
  } else 
  h2 = 12;

  printf("Equivalent 12-hour time: %d:%.2d", h2, m);

  return 0;
}