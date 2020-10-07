#include <stdio.h>
#include <ctype.h>


// Write a program that computes the value of SCRABBLE word
int main(void) 
{
  int c, u, sum = 0;

  printf("Enter a word: ");
  while((c = getchar()) != '\n')
  {
    u = toupper(c);
    switch (u)
    {
      case 'A':
      case 'E': 
      case 'I':
      case 'L':
      case 'N':
      case 'O':
      case 'R':
      case 'S':
      case 'T':
      case 'U': sum += 1;
        break;
      case 'D':
      case 'G': sum += 2;
        break;
      case 'B':
      case 'C':
      case 'M':
      case 'P': sum += 3;
        break;
      case 'F':
      case 'H':
      case 'V':
      case 'W':
      case 'Y': sum += 4;
        break;
      case 'K': sum += 5;
        break;
      case 'J':
      case 'X': sum += 8;
        break;
      case 'Q':
      case 'Z': sum += 10;
        break;
      default: sum += 0;
        break;
    }
  }
  printf("Srabble value: %d\n", sum);
  return 0;
}