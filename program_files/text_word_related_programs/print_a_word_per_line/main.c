#include<stdio.h>

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
                printf("\n");
			}
		}
		else{
			state = IN;
            putchar(c);
        }
	}
    if (state == IN) /*in case the inputs ends without training backspaces*/
        ++num_of_words;

	printf("\n");
	printf("From the given input, there are %d words.\n", num_of_words);
	return 0;
}
