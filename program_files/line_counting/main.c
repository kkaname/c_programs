#include<stdio.h>
//this program takes the user input and outputs the number of lines.
int main()
{
	int c, num_of_lines = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			++num_of_lines;
		}
	}
	printf("\n%d\n", num_of_lines);
	return 0;
}
