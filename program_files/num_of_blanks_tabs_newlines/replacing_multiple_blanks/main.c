#include<stdio.h>
/*This program reads the user input and outputs the the same but replaces multiple blank characters present in the user input by only one blank character*/
int main()
{
	int c, space_flag = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(!space_flag)
			{
				putchar(c);	//this only prints one blank character
				++space_flag; //a mark that the space has been printed
			}
		}
		else{
			space_flag = 0;
			putchar(c);
		}
	}
	return 0;
}
