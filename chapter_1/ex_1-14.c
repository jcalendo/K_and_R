#include <stdio.h>

/* Write a program to print a histogram of the frequencies of different 
characters in its input */

int main()
{
    int i, j, c;
    int chr_arr[128]; // initialize array with a bin for each ASCII character type

    for (i = 0; i < 128; i++)
        chr_arr[i] = 0;

    while ((c = getchar()) != EOF)
        ++chr_arr[c];
    
    for (i = 0; i < 128; i++)
    {
        putchar(i);
        printf(" : "); 
        for (j = 0; j < chr_arr[i]; j++)
        {
            putchar('#');
        }
    putchar('\n'); 
    }   
}