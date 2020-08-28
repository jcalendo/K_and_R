#include <stdio.h>

// Modify 2-2 to prompt the user for the radius
int main(void) 
{
  float r;
  float pi = 3.14159;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &r);
  printf("The volume of a %.2f m (radius) sphere: %.1f m^3", r, (4.0f / 3.0f) * pi * r * r * r);

  return 0;
}