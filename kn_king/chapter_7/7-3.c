#include <stdio.h>


// Modify sum2.c to sum a series of double values
int main(void)
{
  double n, sum = 0;

  printf("This program sums a series of doubles.\n");
  printf("Enter doubles (0 to terminate): ");

  scanf("%lf", &n);
  while (n != 0)
  {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is:  %.2lf\n", sum);

  return 0;
}