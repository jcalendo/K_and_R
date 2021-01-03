#include <stdio.h>

// Write a program that asks the user for a time in 12-hour format, then displays
// the time in 24-hour form

int main(void) {
  int in_hr, in_min, time;
  char indicator[3];

  printf("Enter a 12-hour time: ");
  scanf("%d:%d%s", &in_hr, &in_min, indicator);

  in_hr = (in_hr == 12) ? 0 : in_hr;
  if (indicator[0] == 'a' || indicator[0] == 'A')
  {
    time = in_hr * 60 + in_min;
  } else if (indicator[0] == 'p' || indicator[0] == 'P') 
  {
    time = (in_hr + 12) * 60 + in_min; 
  }
  printf("Equivalent 24-hour time: %d:%.2d\n", time / 60, time % 60);
  return 0;
}