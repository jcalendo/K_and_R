#include <stdio.h>

/* Write a program that prints a one month calendar. The user specifies the 
number of days on the month and the day of the week on which the month begins */
int main(void)
{
  int days, start, counter;

  printf("Enter munber of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  // pad the start of the calendar
  for (int i = 1; i < start; i++)
  {
    printf("    ");
  }

  counter = start;
  for (int i = 1; i <= days; i++)
  {
    if (counter == 7) 
    {
      printf("%4d\n", i);
      counter = 1;
    } else
    {
      printf("%4d", i);
      counter += 1;
    }
  }
  printf("\n");

  return 0;
}