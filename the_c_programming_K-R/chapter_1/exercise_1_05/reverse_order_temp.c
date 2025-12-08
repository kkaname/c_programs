#include<stdio.h>

/*Exercise 1-5: program to print a conversion table of celcius to fahrenheit from 300^o to 0^o, e.i., in reverse order.*/

int main(void)
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius\t\tFahrenheit\n");
    printf("--------------------------\n");

    celcius = upper;
    while(celcius >= lower)
    {
        fahr = (9.0 / 5.0) * celcius - 32.0f;
        printf("%3.0f\t\t%6.2f\n", celcius, fahr);
        celcius -= step;
    }

    /*Alternate way to do is by using for loop:
     * >for(celcius = upper; celcius >= lower; celcius -= step){
     * >    fahr = (9.0 / 5.0) * celcius - 32.0f;
     * >    printf("%3.0f\t\t%6.2f\n", celcius, fahr);
     * >}
     */

    return 0;
}
