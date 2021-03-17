#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 255

// Write a BIFF filter that reads a message entered by the user and translates
// it into BIFF-speak
int main(void)
{
  char c, message[MAX_LEN+1];

  printf("Enter message: ");
  fgets(message, sizeof(message), stdin);

  printf("In BIFF-speak: ");
  for (int i = 0; i < sizeof(message) / sizeof(message[0]); i++)
  {
    if (message[i] == '\0' || message[i] == '\n')
      break;
    
    c = toupper(message[i]);
    switch (c)
    {
    case 'A':
      printf("4");
      break;
    case 'B':
      printf("8");
      break;
    case 'E':
      printf("3");
      break;
    case 'I':
      printf("1");
      break;
    case 'O':
      printf("0");
      break;
    case 'S':
      printf("5");
      break;
    default:
      printf("%c", c);
      break;
    }
  }

  printf("!!!!!!!!!!\n");
  
  return 0;
}