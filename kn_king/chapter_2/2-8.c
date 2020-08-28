#include <stdio.h>

// Write a program that calculates the remaining balance on a loan
// after the first, second and third monthly payments
int main(void)
{
  float loan, rate, payment, balance;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  balance = loan + (loan * (rate / 100.0 / 12.0));
  balance = balance - payment;
  printf("Balance remaining after first payment: %.2f\n", balance);
  balance = balance + (balance * (rate / 100.0 / 12.0));
  balance = balance - payment;
  printf("Balance remaining after second payment: %.2f\n", balance);
  balance = balance + (balance * (rate / 100.0 / 12.0));
  balance = balance - payment;
  printf("Balance remaining after third payment: %.2f", balance);

  return 0;
}