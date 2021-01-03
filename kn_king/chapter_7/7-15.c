#include <stdio.h>

// Write a program that computes the factorial of a postive integer
int main(void)
{
  int n;
  short short_f;
  int int_f;
  long long_f;
  long long llong_f;
  float float_f;
  double double_f;
  long double ldouble_f;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // initialize the values
  short_f = n;
  int_f = n;
  long_f = n;
  llong_f = n;
  float_f = n;
  double_f = n;
  ldouble_f = n;

  while (n > 1)
  {
    short_f *= n - 1;
    int_f *= n - 1;
    long_f *= n - 1 ;
    llong_f *= n - 1;
    float_f *= n - 1;
    double_f *= n - 1;
    ldouble_f *= n - 1;
    n--;
  }

  printf("Factorial of %d: %hd (short)\n", n, short_f);
  printf("Factorial of %d: %d (int)\n", n, int_f);
  printf("Factorial of %d: %ld (long)\n", n, long_f);
  printf("Factorial of %d: %lld (long long)\n", n, llong_f);
  printf("Factorial of %d: %f (float)\n", n, float_f);
  printf("Factorial of %d: %le (double)\n", n, double_f);
  printf("Factorial of %d: %Le (long double)\n", n, ldouble_f);
  
  return 0;
}