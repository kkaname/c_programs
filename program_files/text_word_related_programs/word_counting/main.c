#include<stdio.h>

/*This program counts the number of word from the user input untill the end of line(EOF) is encountered and outputs the exact number of words to the output console */

#define IN 1
#define OUT 0

int main(void)
{
	int c, state, num_of_words;
	num_of_words = 0;
	state = OUT;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n'){
			if(state == IN){
				state = OUT;
				++num_of_words;
			}
		}
		else
			state = IN;
	}
    if (state == IN) /*in case the inputs ends without training backspaces*/
        ++num_of_words;

	printf("\n");
	printf("From the given input, there are %d words.\n", num_of_words);
	return 0;
}
