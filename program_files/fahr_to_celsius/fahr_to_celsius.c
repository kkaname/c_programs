#include<stdio.h>
/*This program is basically for conversion from fahrenhieit to celsius where it outputs this converstion in a form of table.*/

int main()
{
	//first we declare the required variables that we will be using in the program under float datatype to be more precise.
	float fahr, celsius, lower, upper, step;
	//now we decide the upper and lower bound for the calculation.
	lower = 0;	//setting the lower limit for the temperature table.
	upper = 300;	//setting the upper limit for the temperature table.
	step = 20;	//step size for the temperature reading to range from the lower to upper limit.
	fahr = lower;
	for(int i = 0; i <= step; i++)
	{
		printf("_");
	}
	printf("\n");
	printf("Fahrenhiet\tcelsius\n");
	while(fahr <= upper)
	{
		celsius = (5.0/9.0)*(fahr - 32);    //this is the formulla to convert the fahrenhiet degree to celsius degree of 
						    //temperature.
		printf("%10.1f%12.2f\n", fahr, celsius);
		fahr += step;	
	}
	/*for(fahr = 0, fahr <= upper, fahr++)   \\this is the alternate way of printing fahrenhiet to celcius conversion table
	 * {
	 * 	celsius = (5.0/9.0)*(fahr - 32);
	 * 	printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	 * 	}*/
	while(step >= 0)	//This was unnecessary, but added a line to know the end of the table.
	{
		printf("_");
		step -= 1;
	}
	printf("\n");
	return 0;
}
