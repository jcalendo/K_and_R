#include <stdio.h>

// Write a program that reads an integer enetered by the user and 
// displays it in octal

int main(void)
{
  int i;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &i);
  printf("In octal, your number is: %o", i);

  return 0;
}