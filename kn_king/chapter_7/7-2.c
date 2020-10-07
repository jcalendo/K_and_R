#include <stdio.h>


// Modify squares2.c so that it pauses after every 24 squares
int main(void)
{
  int n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries in the table: ");
  scanf("%d", &n);
  getchar();  // get the new line character left hanging from scanf
  
  for (int i = 1; i <= n; i++)
  {
    if (i % 24 == 0)
    {
      printf("%10d\t%10d\n", i, i * i);
      printf("Press Enter to Continue...");
      getchar();
    }
    printf("%10d\t%10d\n", i, i * i);
  }
  return 0;
}