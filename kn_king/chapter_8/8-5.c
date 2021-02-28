#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value)) / (sizeof(value[0])))
#define INITIAL_BALANCE 100.00

// Modify interest.c so that it compunds monthly instead of annually
int main(void)
{
  int i, j, low_rate, num_years, year;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears   ");
  for (i = 0; i < (int) NUM_RATES; i++) {
    printf("%9d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
    printf("%5d   ", year);
    for (i = 0; i < (int) NUM_RATES; i++) {
      for (j = 0; j < 12; j++) {
        value[i] += (low_rate + i) / 100.00 * value[i];
      }
      printf("%10.2f", value[i]);
    }
    printf("\n");
  }
  return 0;
}