#include <stdio.h>


// Modify repdigit.c so that it shows which digits were repeated
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

  // First pass look for any repeats
  printf("Repeated digit(s): ");
  for (int i = 0; i < sizeof(digit_count) / sizeof(digit_count[0]); i++) {
    if (digit_count[i] > 1) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}