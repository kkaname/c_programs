#include<stdio.h>
/*This program just copy pastes the input to the output untill a EOF i.e., End-Of-File(represents the end of the input stream) is  encountered*/
void main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		putchar(c);
	}
}
