#include <stdio.h>

// Write a program that asks the user to enter a USD amount and then shows 
// how to pay that amount using the smallest number of $20, $10, $5, and $1
// bills

int main(void)
{
  int dollars;
  int twenties, tens, fives, ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollars);

  twenties = dollars / 20;
  dollars = dollars - (twenties * 20);
  
  tens = dollars / 10;
  dollars = dollars - (tens * 10);

  fives = dollars / 5;
  dollars = dollars - (fives * 5);

  ones = dollars;

  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d", ones);

  return 0;
}