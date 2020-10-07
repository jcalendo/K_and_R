#include <stdio.h>

// Essentially, test the limits of the squares2.c program for 
// different types of input. Run the program to determine 
// the smallest value of n that causes failure.
int main(void)
{
  int n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries in the table: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
    printf("%10d\t%10d\n", i, i * i); 

  return 0;  
}

/* 
* Notes:
* int version seems to fail at i == 46341, squared == -2147479015
* this would imply the number of bits for an int is 32
* short version seems to fail at i == 182, squared == -32412
* this would imply that the number of bits for a short is 16
*/ 