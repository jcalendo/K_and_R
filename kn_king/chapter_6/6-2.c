#include <stdio.h>
#include <stdbool.h>

/* Write a program that asks the user to enter two integers, then calculates 
* and displays the GCD */
int main(void) 
{
  int m, n, r, gcd;

  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

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

  printf("Greatest common divisor: %d\n", gcd);
  return 0;
}