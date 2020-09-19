#include <stdio.h>
#include <stdbool.h>


/* add a loop to the broker.c programso that the user can enter more than one trade
and the program can will calculate the commision on each */
int main(void)
{
  float commision, value;

  while (true)
  {
    printf("Enter the value of trade: ");
    scanf("%f", &value);

    if (value == 0)
      break;
    else if (value < 2500.00f)
      commision = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
      commision = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
      commision = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
      commision = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
      commision = 155.00f + 0.0011f * value;
    else 
      commision = 255.00f + 0.0009f * value;
    
    if (commision < 39.00f)
      commision = 39.00f;
    
    printf("Commssion: $%.2f\n", commision);
  }
  return 0;
}