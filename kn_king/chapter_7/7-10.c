#include <stdio.h>

// Write a program that counts the vowels in a sentence
int main(void)
{
  char c;
  int count = 0;

  printf("Enter a sentence: ");
  while ((c = getchar()) != '\n')    
  {
    switch (c)
    {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U': count++;
                break;
      default:
        break;
    }
  }
  printf("Your sentence contains %d vowels.\n", count);
  return 0;
}