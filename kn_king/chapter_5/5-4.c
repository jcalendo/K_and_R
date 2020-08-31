#include <stdio.h>

// Write a program that asks the user to enter a wind speed in knots and then
// displays the cooresponding description
int main(void)
{
  int knots;

  printf("Enter a speed in knots: ");
  scanf("%d", &knots);

  if (knots > 63)
    printf("Hurricane\n");
  else if (knots >= 48 & knots <= 63)
    printf("Storm\n");
  else if (knots >= 28 & knots <= 48)
    printf("Gale\n");
  else if (knots >= 4 & knots <= 27)
    printf("Breeze\n");
  else if (knots >= 1 & knots <= 3)
    printf("Light air\n");
  else
    printf("Calm\n");
  
  return 0;
}