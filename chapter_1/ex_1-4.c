#include <stdio.h>

/* Write a program to display the corresponding Celsius 
to Fahrenheit table*/
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // Lower limit of step
    upper = 300;    // Upper limit of step
    step = 20;      // Size of step

    // Add header to the table
    printf("%3c %6c\n", 'F', 'C');
    printf("-----------\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%3.0f %6.1f\n", fahr, celsius);
        celsius = step + celsius;
    }
}