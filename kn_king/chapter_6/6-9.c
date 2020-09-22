#include <stdio.h>

/* modify 2-8 to ask the user to enter the number of payments and then 
displays the balance remaining after each of these payments */
int main(void)
{
  float loan, rate, payment, balance;
  int n;

  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  printf("Enter the number of payments: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      balance = loan + (loan * (rate / 100.0 / 12.0));
      balance = balance - payment;
      printf("Balance remaining after payment %d: $%.2f\n", i, balance);
    } else {
      balance = balance + (balance * (rate / 100.0 / 12.0));
      balance = balance - payment;
      printf("Balance remaining after payment %d: $%.2f\n", i, balance);
    }
  }
  return 0;
}