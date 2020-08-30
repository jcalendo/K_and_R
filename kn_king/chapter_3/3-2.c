#include <stdio.h>

// Write a program that formats product information entered by the user.

int main(void)
{
  int item_number, year, month, day;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_number);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\t\tPurchase\n");
  printf("    \tPrice\t\tDate\n");
  printf("%d\t$%7.2f\t%.2d/%.2d/%d", item_number, unit_price, month, day, year);

  return 0;
}