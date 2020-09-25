#include <stdio.h>

#define MAX_TERMS 10


// Write a program that approximates e by computing the infinite series
// Exit when the current term is less than the user supplied epsilon
int main(void)
{
  int d, terms;
  float denom, epsilon, e = 1.0;

  printf("Enter an the tolerance (e.g. 0.0001): ");
  scanf("%f", &epsilon);

  terms = 0;
  for (int i = 1; i <= MAX_TERMS; i++)
  {
    terms += 1;
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

      if (((e + (1.0f / denom)) - e) < epsilon)
        break;

      e += (1.0f / denom);
    }
  }
  printf("Final value of approximate e: %.6f\n", e);
  printf("Number of terms used: %d\n", terms);

  return 0;
}