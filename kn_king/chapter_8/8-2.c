#include <stdio.h>


// Modify 8-1 so that it prints a table showing how many times each digit 
// appears in the number
int main(void)
{
  int digit_count[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0)
  {
    digit = n % 10;
    digit_count[digit] += 1;
    n /= 10;
  }

  printf("Digit:      ");
  for (int i = 0; i < (int) (sizeof(digit_count) / sizeof(digit_count[0])); i++) {
    printf("%d ", i);
  }
  printf("\n");
  printf("Ocurrences: ");
  for (int i = 0; i < (int) (sizeof(digit_count) / sizeof(digit_count[0])); i++) {
    printf("%d ", digit_count[i]);
  }
  printf("\n");
  return 0;
}