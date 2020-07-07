#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// Print Fahrenheit-Celsius table in reverse order
int main()
{
    int fahr;

    // Add header to the table
    printf("%3c %6c\n", 'F', 'C');
    printf("-----------\n");

    for (fahr = UPPER; fahr >= LOWER;  fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}