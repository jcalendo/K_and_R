#include <stdio.h>
#include <math.h>

#define PRECISION 0.00001

// Write a program that uses Newton's method to compute the root of
// a positive floating point number
int main(void)
{
  double x, y = 1.0, avg;

  printf("Enter a positive number: ");
  scanf("%lf", &x);

  avg = (y + (x / y)) / 2.0f;
  while (fabs(y - avg) >= PRECISION * avg)
  {
    y = avg;
    avg = (y + (x / y)) / 2.0f;
  }

  printf("Square root: %lf\n", avg);
  return 0;
}