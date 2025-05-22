#include<stdio.h>
//this program takes the user input and outputs the number of lines.
int main()
{
	int c, i = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			++i;
		}
	}
	printf("\n%d\n", i);
	return 0;
}
