#include <stdio.h>

// Using the switch statement write a program that converts 
// a numerical grade into a letter grade

int main(void)
{
  int grade, tens;
  char letter;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade > 100 || grade < 0) {
    printf("ERROR: invalid grade");
  } else {
      tens = grade / 10;
      switch (tens)
      {
        case 9: letter = 'A';
                break;
        case 8: letter = 'B'; 
                break;
        case 7: letter = 'C';
                break;
        case 6: letter = 'D';
                break;
        default: letter = 'F'; 
                break;
      }
      printf("Letter grade: %c", letter);
  }
  return 0;
}