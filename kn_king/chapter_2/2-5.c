#include <stdio.h>

// Write a program that asks the user to  enter a value for x 
// and then displays the value of the following polynomial
// 3x^5 + 2x4 - 5x^3 -x^2 + 7x - 6
int main(void)
{
  float x, expr;

  printf("Enter a value for x: ");
  scanf("%f", &x);
  
  expr = (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6;
  printf("Result: %.2f", expr); 

  return 0;
}