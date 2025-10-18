#include<stdio.h>

/*Exercise 1.15: Program, that is rewrite the temerature conversion program which is written earlier inside main() function, is written using a dedicated function printing the tempurature conversion.*/

void fahr_to_celcius(float fahr)
{
    float celcius;
    celcius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f\t\t%.2f\n", fahr, celcius);
    return;
}


int main(void)
{
    int lower, upper, step;
    float fahr;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit\tCelcius\n-------------------------\n");
    fahr = lower;
    while(fahr <= upper){
        fahr_to_celcius(fahr);
        fahr += step;
    }

    return 0;
}
