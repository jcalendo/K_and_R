#include <stdio.h>

// Write a program that calculates how many digits a number contains.
// Assume the number has no more than 4 digits. Use if statements to test
// the number
int main(void)
{
  int n, ndigits;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 10) {
    ndigits = 1;
  } else if (n >= 10 & n <= 99) {
    ndigits = 2;
  } else if (n >= 100 & n <= 999) {
    ndigits = 3;
  } else 
  ndigits = 4;

  printf("The number %d has %d digits", n, ndigits);

  return 0;
}