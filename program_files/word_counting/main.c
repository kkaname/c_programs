#include<stdio.h>
//this program counts the number of word from the user input untill the end of line(EOF) is encountered and outputs the exact number of words to the output console
#define IN 1
#define OUT 0

int main()
{
	int c, state, num_of_words, num_of_char, num_of_newlines, num_of_tabs, num_of_blanks;
	num_of_words = num_of_char = num_of_newlines = num_of_tabs = num_of_blanks = 0;
	state = OUT;

	while((c = getchar()) != EOF)
	{
		++num_of_char;
		if(c == ' ' || c == '\t' || c == '\n'){
			if(c == ' '){
				++num_of_blanks;
			}
			else if(c == '\t'){
				++num_of_tabs;
			}
			else{
				++num_of_newlines;
			}
			if(state == IN){
				state = OUT;
				++num_of_words;
			}
		}
		else
			state = IN;
	}
    if (state == IN) //in case the inputs ends without training backspaces
        ++num_of_words;

	printf("\n");
	printf("From the input, there are %d words, %d characters, %d tab characters, %d new line character and %d blank spaces\n", num_of_words, num_of_char, num_of_tabs, num_of_newlines, num_of_blanks);
	return 0;
}
