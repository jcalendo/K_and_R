#include <stdio.h>

// Modify the programming project 6 from chapter 3 so that the user may 
// add, subtract, multiply, or divide two fractions
int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  char op;

  printf("Enter two fractions separated by a their operation: ");
  scanf("%d/%d%s%d/%d", &num1, &denom1, &op, &num2, &denom2);

  switch (op)
  {
  case '+' : 
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    break;
  case '-' :
    result_num = num1 * denom2 - (num2 * denom1);
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    break;
  case '*' :
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    break;
  case '/' :
    result_num = num1 * denom2;
    result_denom = denom2 * num2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    break;
  default:
    break;
  }
  return 0;
}