#include <stdio.h>

// Write a program that asks the user to enter the amount of taxable income
// then siplays the tax due
int main(void) 
{
  float income, tax;

  printf("Enter the amount of taxable income: ");
  scanf("%f", &income);

  if (income <= 750.00f) {
    tax = income * 0.01f;
  } else if (income > 750.00f && income <= 2250.00f) {
    tax = 7.50f + ((income - 750.00f) * 0.02f);
  } else if (income > 2250.00f && income <= 3750.00f) {
    tax = 37.50f + ((income - 2250.00f) * 0.03f);
  } else if (income > 3750.00f && income < 5250.00f) {
    tax = 82.50f + ((income - 3750.00f) * 0.04f);
  } else if (income > 5250.00f && income <= 7000.00f) {
    tax = 142.50f + ((income - 5250.00f) * 0.05f);
  } else {
    tax = 230.00f + ((income - 7000.00f) * 0.06f);
  }

  printf("Amount of tax to pay on $%.2f: $%.2f\n", income, tax);

  return 0;
}