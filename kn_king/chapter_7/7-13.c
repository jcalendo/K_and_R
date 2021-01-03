#include <stdio.h>
#include <stdbool.h>


// Write a program that calculates the average word length for a sentence
int main(void)
{
  char c;
  float words = 0.0, letters = 0.0;
  bool in_word = false;

  printf("Enter a sentence: ");
  while ((c = getchar()) != '\n')
  {
    if (c != ' ')
    {
      letters++;
      if (!in_word)
        words++;      
      in_word = true;
    } else {
      in_word = false;
    }
  }
  printf("Average word length: %.1f\n", letters / words);
  return 0;
}