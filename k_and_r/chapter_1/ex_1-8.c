#include <stdio.h>

// Program to count blanks, tabs, and newlines
int main()
{
    int blanks, tabs, nl, c;

    blanks = 0;
    tabs = 0;
    nl = 0;

    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;

    printf("%d %d %d\n", blanks, tabs, nl);

}