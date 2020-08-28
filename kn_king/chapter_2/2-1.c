#include <stdio.h>

#define C '*'

/* Write a program that prints a check mark to the screen */
int main(void)
{
  printf("%8c\n", C);
  printf("%7c\n", C);
  printf("%6c\n", C);
  printf("%c%4c\n", C, C);
  printf("%2c%2c\n", C, C);
  printf("%3c\n", C);

  return 0;
}