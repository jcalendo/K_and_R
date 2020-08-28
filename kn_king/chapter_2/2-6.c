#include <stdio.h>

// modify 2-5 so that the polynomila is evaulated using Horner's Rule
int main(void)
{
  float x, expr;

  printf("Enter a value for x: ");
  scanf("%f", &x);
  
  expr = ((((((((3 * x + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6;
  printf("Result: %.2f", expr);

  return 0;
}