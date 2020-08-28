#include <stdio.h>

// Write a program that computes the volume of a sphere with a 10-meter
// radius using the formula v = 4/3 * pi * r^3
int main(void)
{
  int r = 10;
  float pi = 3.14159;

  printf("The volume of a %d m (radius) sphere: %.1f m^3", r, (4.0f / 3.0f) * pi * r * r * r);

  return 0;
}
