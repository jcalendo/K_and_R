#include <stdio.h>

#define MIN    0   // min temp in fahrenheit
#define MAX   300  // max temp
#define STEP   10  // temp step size

double fahr_to_celsius(int fahr);

/* Rewrite the temperature conversion program of Section 1.2 to use a function
for conversion */
int main() 
{
    int i;

    printf("%3c\t%6c\n", 'F', 'C');
    printf("--------------\n");
    for (i = MIN; i <= MAX; i = i + STEP)
    {
        printf("%3.1d\t%6.1f\n", i, fahr_to_celsius(i));
    }
}

double fahr_to_celsius(int fahr)
{
    return (5 * (fahr-32) / 9);
}
