#include <stdio.h>

// Write a program that asks a user to enter a two-digit number
// then prints the number with the digits reversed.
int main(void)
{
 int num;

 printf("Enter a two-digit number: ");
 scanf("%d", &num);
 printf("The reversal is %d%d", num % 10, num / 10);

 return 0;
}