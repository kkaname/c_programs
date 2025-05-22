#include<stdio.h>
//this program counts and outputs the number of characters present in a string input until EOF is not encountered
int main()
{
	long int i = 0;
	printf("Enter string input:\n");
	while(getchar() != EOF)
	{
		++i;
	}
	printf("\n");
	/*we can also use for loop for this, insted of while*/
	/*for(i = 0; getchar() != EOF; i++)
	 * ; <--- this is called 'null statement', cause the required process is dont in the testing and incrementing part of the f		     or loop*/
	printf("%ld\n", i);
	return 0;
}
