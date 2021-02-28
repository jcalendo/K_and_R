#include <stdio.h>
#include <stdbool.h>

#define MAX_NUMBERS 100

// Modify the repdigit program so that the user can enter more than one number
// to be tested for repeated digits
int main(void) 
{

  bool digit_seen[10] = {false};
  long numbers[MAX_NUMBERS], n;
  int digit;

  printf("Enter space-separated numbers (0 or negative to terminate): ");
  for (int i = 0; i < MAX_NUMBERS; i++) {
    scanf("%ld", &numbers[i]);
  }

  for (int i = 0; i < MAX_NUMBERS; i++)
  {
    n = numbers[i];
    if (n <= 0)
      break;
    
    while (n > 0) {
      digit  = n % 10;
      if (digit_seen[digit])
        break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0)
      printf("Repeated digit: %ld\n", numbers[i]);
    else
      printf("No repeated digit: %ld\n", numbers[i]);
    
    // clear digit_seen
    for (int i = 0; i < 10; i++)
      digit_seen[i] = false;
  }
  
  return 0;

}