#include <stdio.h>

// Write a program that asks the user to enter a time (expressed in 
// hours and minutes using the 24-hour clock) then display the 
// departure and arrival times for the flight whose departure time
// is closest to that entered by the user
int main(void)
{

  // Enter the table of departure times
  // convert to minutes since midnight
  int d1 = 8 * 60;
  int d2 = 9 * 60 + 43;
  int d3 = 11 * 60 + 19;
  int d4 = 12 * 60 + 47;
  int d5 = 14 * 60;
  int d6 = 15 * 60 + 45;
  int d7 = 19 * 60;
  int d8 = 21 * 60 + 45;

  int in_hours, in_minutes, time, 
      departure, d_hours, d_minutes,
      a_hours, a_minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &in_hours, &in_minutes);

  time = in_hours * 60 + in_minutes;
  
  // Answer in the book is strange
  // Should display the next available departure
  // not absolute closest (you can't go back in time)
  if (time < d1) {
    departure = d1;
    a_hours = 10;
    a_minutes = 16;
  } else if (time >= d1 && time < d2) {
    departure = d2;
    a_hours = 11;
    a_minutes = 52;
  } else if (time >= d2 && time < d3) {
    departure = d3;
    a_hours = 13;
    a_minutes = 31;
  } else if (time >= d3 && time < d4) {
    departure = d4;
    a_hours = 15;
    a_minutes = 0; 
  } else if (time >= d4 && time < d5) {
    departure = d5;
    a_hours = 16;
    a_minutes = 8;
  } else if (time >= d5 && time < d6) {
    departure = d6;
    a_hours = 17;
    a_minutes = 55;
  } else if (time >= d6 && time < d7) {
    departure = d7;
    a_hours = 21;
    a_minutes = 20;
  } else {
    departure = d8;
    a_hours = 23;
    a_minutes = 58;
  }

  d_hours = departure / 60;
  d_minutes = departure % 60;

  if (d_hours < 12) {
    printf("Next closest departure time is %d:%.2d a.m.,", d_hours, d_minutes);
  } else {
    printf("Next closest departure time is %d:%.2d p.m.", 12 - (24 - d_hours), d_minutes);
  }

  if (a_hours < 12) {
    printf(" arriving at %d:%.2d a.m.", a_hours, a_minutes);
  } else
  {
    printf(" arriving at %d:%.2d p.m.", 12 - (24 - a_hours), a_minutes);
  }
  
  return 0;
}