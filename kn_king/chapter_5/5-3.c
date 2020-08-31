#include <stdio.h>

// Modify the broker.c program 
int main(void)
{
  int n;
  float commision, price, value, rival;

  printf("Enter the number of shares: ");
  scanf("%d", &n);
  printf("Enter the price per share: ");
  scanf("%f", &price);

  value = price * n;

  // our commision  
  if (value < 2500.00f) {
    commision = 30.00f + 0.017f * value;
  } else if ( value < 6250.00f) {
    commision = 56.00f + 0.0066f * value;
  } else if (value < 20000.00f) {
    commision = 76.00f + 0.0022f * value;
  } else if (value < 50000.00f) {
    commision = 100.00f + 0.0022f * value;
  } else if (value < 500000.00f) {
    commision = 155.00f + 0.0011f * value;
  } else
  {
    commision = 255.00f + 0.0009f * value;
  }

  if (commision < 39.00f) {
    commision = 39.00f;
  }

  // rival commision
  if (n < 2000) {
    rival = 33.00f + (0.03f * n);
  } else
  {
    rival = 33.00f + (0.02 * n);
  }

  printf("Commision: $%.2f\n", commision);
  printf("Commision of rival: $%.2f", rival);

  return 0;
}