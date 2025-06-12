#include<stdio.h>
//this program counts the number of word from the user input untill the end of line(EOF) is encountered and outputs the exact number of words to the output console
#define IN 1
#define OUT 0

int main()
{
	int c, status, n_word, n_char, n_new_line, n_tab, n_blank;
	status = OUT;
	n_word = n_char = n_new_line = n_tab = n_blank = 0;

	while((c = getchar()) != EOF)
	{
		++n_char;
		if(c == ' ' || c == '\t' || c == '\n'){
			if(c == ' '){
				++n_blank;
			}
			else if(c == '\t'){
				++n_tab;
			}
			else{
				++n_new_line;
			}
			if(status = IN){
				status = OUT;
				++n_word;
			}
			else
				status = OUT;
		}
		else
			status = IN;
	}
	printf("\n");
	printf("From the input, there are %d words, %d characters, %d tab characters, %d new line character and %d blank spaces\n", n_word, n_char, n_tab, n_new_line, n_blank);
	return 0;
}
