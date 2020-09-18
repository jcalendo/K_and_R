#include <stdio.h>
#include <stdbool.h>

/* Write a program that finds the largest in a series of numbers entered by the 
* user. The program must prompt the user to enter numbers one by one. When the
* user enters a 0 or a negative number, the program must display the largest
* non-negative number entered */
int main(void)
{
  double n, largest = 0;

  while (true) {
    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n <= 0) {
      printf("The largest number entered was %.2lf\n", largest);
      break;
    } 

    if (n > largest) {
      largest = n;
    }
  }
  return 0; 
}