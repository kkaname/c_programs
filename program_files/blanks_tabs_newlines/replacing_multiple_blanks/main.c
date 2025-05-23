#include<stdio.h>
/*This program reads the user input and outputs the the same but replaces multiple blank characters present in the user input by only one blank character*/
int main()
{
	int c, i = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(i < 1)
			{
				putchar(c);	//this only prints one blank character
				++i;	//a counter for counting the number of blank character
			}
		}
		else{
			i = 0;
			putchar(c);
		}
	}
	return 0;
}
