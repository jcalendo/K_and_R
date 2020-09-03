#include <stdio.h>

// Write a program that finds the largest and smallest of four integers
// entered by the user
int main(void)
{
  int i, j, k, l;
  int max1, min1, max2, min2;
  int largest, smallest;

  printf("Enter 4 integers separated by spaces: ");
  scanf("%d %d %d %d", &i, &j, &k, &l);

  // Test first set of numbers
  if (i > j) {
    max1 = i;
    min1 = j;
  } else {
    max1 = j;
    min1 = i;
  }

  // test the second set of numbers
  if (k > l) {
    max2 = k;
    min2 = l;
  } else {
    max2 = l;
    min2 = l;
  }

  // Test the min/max of each set
  if (max1 > max2) {
    largest = max1;
  } else {
    largest = max2;
  }

  if (min1 < min2) {
    smallest = min1;
  } else {
    smallest = min2;
  }
  
  printf("Largest: %d\n", largest);
  printf("Smallest: %d\n", smallest);

  return 0;
}