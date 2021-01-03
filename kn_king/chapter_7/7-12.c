#include <stdio.h>

// Write a program that evaluates an expression. The expression is evaluated 
// left to right (no operator takes precedence over any other)
int main(void)
{
  char c;
  float v, result;

  printf("Enter an expression: ");
  scanf("%f", &result);
  while ((c = getchar()) != '\n') 
  {
    switch (c)
    {
    case '+':
      scanf("%f", &v);
      result += v;
      break;
    case '-':
      scanf("%f", &v);
      result -= v;
      break;
    case '*':
      scanf("%f", &v);
      result *= v;
      break;
    case '/':
      scanf("%f", &v);
      result /= v;
      break;
    default:
      break;
    }
  }
  printf("The value of the expression is %.1f\n", result);
  return 0;
}