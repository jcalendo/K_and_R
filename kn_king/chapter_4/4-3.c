#include <stdio.h>

// Rewrite 4-2 so that it prints the reversal of the three digit 
// number without using arithmetic to split the number into digits.
int main(void)
{
  int i1, i2, i3;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &i1, &i2, &i3);
  printf("The reversal: %d%d%d", i3, i2, i1);

  return 0;
}