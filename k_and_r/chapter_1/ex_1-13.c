#include <stdio.h>

/* Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; a vertical orientation
is more challenging */

#define MAX_WORD 21  // maximum word length + 1

int main() 
{
    int c, i, j, word_len;
    int len[MAX_WORD];  

    for (i = 0; i < MAX_WORD; i++)
        len[i] = 0;

    word_len = 0;
    while ((c = getchar()) != EOF)
    {
    if (c != '\n' && c != '\t' && c != ' ')
        {
            ++word_len;
        }
        else
        {
            ++len[word_len];
            word_len = 0;
        }
    }

    for (i = 0; i < MAX_WORD; i++)
    {
        printf("%3d : ", i);
        for (j = 0; j < len[i]; j++)
            {
            putchar('#');
            }
        putchar('\n');
    }
}