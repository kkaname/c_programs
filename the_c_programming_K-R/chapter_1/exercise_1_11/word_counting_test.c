#include<stdio.h>

/*Exercise 1.11: Program that prints number of words and number of characters in user input.*/

#define IN 1 //specifies inside a word
#define OUT 0 //specifies outside a word

int main(void){
    int c, n_words, n_char, state;

    n_words = n_char = 0;
    state = OUT; 
    while((c = getchar()) != EOF)
    {
        ++n_char;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        
        else if (state == OUT)
        {
            state = IN;
            ++n_words;
        }
        
    }
    printf("\nNumber of words = %d\nNumber of characters = %d.\n", n_words, n_char);
    
    return 0;
}
