#include <stdio.h>

// Display a number with its digits reversed
int main(void)
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Reversed: ");
  do
  {
    printf("%d", num % 10);
    num = num / 10;
  } while (num != 0);

  printf("\n");
  return 0;
}