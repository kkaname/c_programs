#include<stdio.h>
/* This program is basically for conversion from fahrenhieit to celsius where it outputs this converstion in a form of table.*/

int main()
{
	//first we declare the required variables that we will be using in the program under float datatype to be more precise.
	float fahr, celsius, lower, upper, step;
	//now we decide the upper and lower bound for the calculation
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("Fahrenfiet\tcelsius\n");
	while(fahr <= upper)
	{
		celsius = (5/9)*(fahr - 32);
		printf("%10.1f%12.2f\n", fahr, celsius);
		fahr += step;	
	}
	while(step >= 0)
	{
		printf("_");
		step -= 1;
	}
	printf("\n");
	return 0;
}
