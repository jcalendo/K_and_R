#include <stdio.h>

/* Write a program that prompts the user to enter a number n, 
and then prints all even squares between 1 and n */
int main(void)
{
  int i, n; 

  printf("Enter a number: ");
  scanf("%d", &n);

  for (i = 1; (i * i) <= n; i++) 
  {
    if ((i * i) % 2 == 0)
    {
      printf("%d\n", i * i);
    } 
  }
  return 0;
}