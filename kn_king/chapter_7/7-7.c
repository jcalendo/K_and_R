#include <stdio.h>

// Modify the programming project 6 from chapter 3 so that the user may 
// add, subtract, multiply, or divide two fractions
int main(void)
{
  int n1, d1, n2, d2, rn, rd;
  char op;

  printf("Enter two fractions separated by a their operation: ");
  scanf("%d/%d%c%d/%d", &n1, &d1, &op, &n2, &d2);
  switch (op)
  {
  case '+': 
    rn = (n1 * d2) + (n2 * d1);
    rd = d1 * d2;
    printf("The sum is %d/%d\n", rn, rd);
    break;
  case '-':
    rn = (n1 * d2) - (n2 * d1);
    rd = d1 * d2;
    printf("The difference is %d/%d\n", rn, rd);
    break;  
  case '*':
    rn = n1 * n2;
    rd = d1 * d2;
    printf("The product is %d/%d\n", rn, rd);
    break;
  case '/':
    rn = n1 * d2;
    rd = d1 * n2;
    printf("The quotient is %d/%d\n", rn, rd);
  default:
    break;
  }
  return 0;
}