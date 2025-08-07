#include<stdio.h>
/*This program is basically for conversion from celsius to fahrenhiet where it outputs this converstion in a form of table.*/

int main()
{
	float fahr, celsius, lower, upper, step;
	//now we decide the upper and lower bound for the calculation.
	lower = -20;	
	upper = 200;	//setting the upper limit for the temperature table.
	step = 10;	//step size for the temperature reading to range from the lower to upper limit.
	celsius = lower;

	printf("\n");
	printf("%10s %12s\n", "celsius", "fahrenhiet");
	while(celsius <= upper)
	{
		fahr = (9.0/50)*celsius + 32;
		printf("%10.1f%11.2f\n", celsius, fahr);
		celsius += step;	
	}
	printf("\n");
	return 0;
}
