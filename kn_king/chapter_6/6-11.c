#include <stdio.h>


// Write a program that approximates e by computing the infinite series
int main(void)
{
  int n, d;
  float denom, e = 1.0;

  printf("Enter an integer to specify the number of terms: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      e += 1.0f;
    } else 
    {
      d = i;
      denom = 1.0;
      while (d > 0)
      {
        denom *= (float) d;
        d--;
      }
      e += (1.0 / denom);
    }
  }
  printf("%.6f\n", e);
  return 0;
}