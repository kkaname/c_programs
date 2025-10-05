#include<stdio.h>
/*This program is basically for conversion from fahrenhieit to celsius where it outputs this converstion in a form of table.*/

int main()
{
	float celsius, fahr;
    int lower, upper, step;

	lower = 0;	//setting the lower limit for the temperature table.
	upper = 300;	//setting the upper limit for the temperature table.
	step = 20;	//step size for the temperature reading to range from the lower to upper limit.
	fahr = lower;
    //this is unnecessary, but helps in defining the table
	for(int i = 0; i <= step; i++)
	{
		printf("*");
	}
	printf("\n");
	printf("Fahrenhiet\tcelsius\n");
	while(fahr <= upper)
	{
		celsius = (5.0/9.0)*(fahr - 32);    
		printf("%10.1f%11.2f\n", fahr, celsius);
		fahr += step;	
	}

	/*[This here is a alternate way to do this program]
     * for(fahr = 0, fahr <= upper, fahr++)   
	 * {
	 * 	celsius = (5.0/9.0)*(fahr - 32);
	 * 	printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	 * 	}*/
	for(int i = 0; i <= step; i++)     //This is unnecessary, but just added a line to make the table pretty
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
