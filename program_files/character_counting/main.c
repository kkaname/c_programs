//this program counts and outputs the number of characters present in the string that is given by the user
#include<stdio.h>

int main()
{
	long unsigned int i = 0;
	printf("Enter string input:\n");
	while(getchar() != EOF)
	{
		++i;
	}
	printf("\n");
	/*we can also use for loop for this, insted of while*/
	/*for(i = 0; getchar() != EOF; i++)
	 * ; <--- this is called 'null statement', cause the required process is dont in the testing and incrementing part of the for loop*/
	printf("%lu\n", i);
	return 0;
}
