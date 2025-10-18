#include<stdio.h>

/*Exercise 1-3: Program to print conversion table of fahrenheit to celcius degree with a heading above the table.*/

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t\t%6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    /*
     * Alternate way is to use a for loop instead of while loop:
     * >for(fahr = lower; fahr <= upper; fahr = fahr + step);
     * >celsius = (5.0/9.0) * (fahr - 32);
     * > printf("%3.0f\t\t%6.2f\n", fahr, celsius);
     */

    return 0;
}
