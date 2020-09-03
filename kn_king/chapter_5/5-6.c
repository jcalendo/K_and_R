#include <stdio.h>

// Modify the upc.c program to check whether the UPC is valid
int main(void){
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
      first_sum, second_sum, total, check_digit,
      check_result;

  printf("Enter the UPC code (with check digit): ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
                                                &j1, &j2, &j3, &j4, &j5,
                                                &check_digit);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;
  check_result = 9 - (total - 1) % 10;

  if (check_digit == check_result) {
    printf("VALID");
  } else {
    printf("INVALID");
  }

  return 0;
}