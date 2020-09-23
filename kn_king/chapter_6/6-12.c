#include <stdio.h>

#define MAX_TERMS 1000


// Approximate e using infinite series up to epsilon precision
int main(void)
{
  int d;
  float denom, epsilon;
  float e = 1.0;

  printf("Enter a value for epsilon (e.g. 0.0001): ");
  scanf("%f", &epsilon);

  for (int i = 1; i <= MAX_TERMS; i++)
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

      if (e - (e * (1.0 / denom)) < epsilon)
      {
        break;
      } else
      {
        e += (1.0 / denom);
      }
    }
  }
  printf("%.6f\n", e);
  return 0;
}