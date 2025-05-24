#include<stdio.h>
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
