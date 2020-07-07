#include <stdio.h>

// Print Fahrenheit-Celsius table  
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

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = step + fahr;
    }
}