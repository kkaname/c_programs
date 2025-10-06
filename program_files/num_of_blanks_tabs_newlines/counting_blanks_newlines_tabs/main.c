#include<stdio.h>
//this program counts the number of blank spaces, new line characters and tab characters present in the user input
int main(void){
	int c, num_of_blanks = 0, num_of_tabs = 0, num_of_newlines = 0;
	while((c = getchar()) != EOF){
		if(c == ' ')
			++num_of_blanks;

		else if(c == '\t')
			++num_of_tabs;

		else if(c == '\n')
			++num_of_newlines;
	}
	printf("\nIn your input, there are %d number of blanks, %d number of tabs and %d number of newline\n", num_of_blanks, num_of_tabs, num_of_newlines);
	return 0;
}
