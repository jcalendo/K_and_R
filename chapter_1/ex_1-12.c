#include <stdio.h>

#define IN  1
#define OUT 0

/* Write a program that prints its input one word per line*/
int main()
{
    int c, state;

    state = IN;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            putchar('\n');
        } else
        {
            putchar(c);
        }        
    }
}
