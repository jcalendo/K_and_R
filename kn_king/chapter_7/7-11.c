#include <stdio.h>

#define MAX_LEN 128

// Write a program that takes a first and last name entered by a user and 
// displays the last name, a comma, and the first initial follwed by a period
int main(void) 
{
  char first_name[MAX_LEN];
  char last_name[MAX_LEN];
  
  printf("Enter a first and last name: ");
  scanf("%s", first_name);
  scanf("%s", last_name);
  
  printf("%s, %c\n", last_name, first_name[0]);
  return 0;
}