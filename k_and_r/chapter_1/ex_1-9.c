#include <stdio.h>

/* Write a program to copy its input to its output, 
replacing each string of one or more blanks with a 
single blank */
int main()
{
    int c, in_blank;

    in_blank = 0;
    while((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            putchar(c);
            in_blank = 0;
        } else if (c == ' ' && in_blank == 0)
        {
            putchar(c);
            in_blank = 1;
        }
    }
}