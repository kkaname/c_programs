#include<stdio.h>

#define IN 1 //specifies inside a word
#define OUT 0 //specifies outside a word

int main(void){
    int c, n_words, state;

    n_words = 0;
    state = OUT; 
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        
        else if (state == OUT)
        {
            state = IN;
            ++n_words;
        }
        
    }
    printf("\nNumber of words = %d.\n", n_words);
    
    return 0;
}
