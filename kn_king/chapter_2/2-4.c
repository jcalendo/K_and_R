#include <stdio.h>

#define TAX 0.05f

// Write a program that asks the user to enter a dollar and cents amount
// then displays the amount with 5% tax added

int main(void)
{
  float dollars;

  printf("Enter an amount: ");
  scanf("%f", &dollars);
  printf("With tax added: %.2f", (dollars + (dollars * TAX)));

  return 0;
}