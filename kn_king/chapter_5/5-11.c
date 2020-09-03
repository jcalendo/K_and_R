#include <stdio.h>

// Write a program that asks the user for a two-digit number, then prints the
// english word for the number
int main(void) 
{
  int number, tens, ones;

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  tens = number / 10;
  ones = number % 10;

  switch (tens)
  {
  case 9:
    printf("ninety");
    break;
  case 8:
    printf("eighty");
    break;
  case 7:
    printf("seventy");
    break;
  case 6:
    printf("sixty");
    break;
  case 5:
    printf("fifty");
    break;
  case 4:
    printf("forty");
    break;
  case 3:
    printf("thirty");
    break;
  case 2:
    printf("twenty");
    break;
  case 1:
    if (number == 11) {
      printf("eleven");
    } else if (number == 12) {
      printf("twelve");
    } else if (number == 13) {
      printf("thirteen");
    } else if (number == 14) {
      printf("fourteen");
    } else if (number == 15) {
      printf("fifteen");
    } else if (number == 16) {
      printf("sixteen");
    } else if (number == 17) {
      printf("seventeen");
    } else if (number == 18) {
      printf("eighteen");
    } else {
      printf("nineteen");
    }
    break;
  default:
    break;
  }

  switch (ones)
  {
  case 9:
    if (number < 11 || number > 19)
      printf("-nine");
    break;
  case 8:
    if (number < 11 || number > 19)
      printf("-eight");
    break;
  case 7:
    if (number < 11 || number > 19)
      printf("-seven");
    break;
  case 6:
    if (number < 11 || number > 19)
      printf("-six");
    break;
  case 5:
    if (number < 11 || number > 19)
      printf("-five");
    break;
  case 4:
    if (number < 11 || number > 19)
      printf("-four");
    break;
  case 3:
    if (number < 11 || number > 19)
      printf("-three");
    break;
  case 2:
    if (number < 11 || number > 19)
      printf("-two");
    break;
  case 1:
    if (number < 11 || number > 19)
      printf("-one");
    break;
  default:
    break;
  }
  return 0;
}