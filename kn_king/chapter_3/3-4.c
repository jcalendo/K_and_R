#include <stdio.h>

// Write a program that prompts the user to enter a telephone 
// number in the form (xxx) xxx-xxxx and then displays the
// number in the form xxx.xxx.xxxx
int main(void)
{
  int area, county, num;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &area, &county, &num);
  printf("You entered: %.3d.%.3d.%.4d", area, county, num);

  return 0;
}