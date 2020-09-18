#include <stdio.h>
#include <stdbool.h>

/* Write a program that asks the user to enter a fraction and then
* reduces the fraction to the lowest terms */
int main(void)
{
  int m, n, r, gcd, num, den, r_num, r_den;

  printf("Enter a fraction: ");
  scanf("%d/%d", &m, &n);
  num = m;
  den = n;

  // Compute the GCD
  while (true) 
  {
    if (n == 0) 
    {
      gcd = m;
      break;
    }

  r = m % n;
  m = n;
  n = r; 
  }

  // Reduce the fraction
  r_num = num / gcd;
  r_den = den / gcd;

  printf("In lowest terms: %d/%d\n", r_num, r_den);
  return 0;
}