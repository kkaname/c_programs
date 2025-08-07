#include<stdio.h>
//this program identifies the blank spaces, tabs and newlines characters and instead of printing them to the screen, it will replace them with the actual character string saying " ", "\b", "\t" etc
int main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			printf("\'\\b\'");
		}
		else if(c == '\t')
		{
			printf("\'\\t\'");
		}
		else if(c == '\\')
		{
			printf("\'\\\\\'");
		}
		else if(c == '\n'){
			putchar(c);
		}
		else{
			putchar(c);
		}
	}
	return 0;
}
