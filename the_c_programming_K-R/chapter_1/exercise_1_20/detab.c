#include<stdio.h>

/*Exercise 1.20: Program that replaces tabs in the input with the peoper number of blanks to space to the next tab stop.*/

#define TAB_WIDTH 8

int main(void)
{
    int c;
    unsigned int no_spaces;

    while((c = getchar()) != EOF)
    {
        if (c == '\t'){
            no_spaces = TAB_WIDTH;
            
            while(no_spaces){
                putchar(' ');
                --no_spaces;
            }
        }
        else {
            putchar(c);
        }
    }
    
    return 0;
}
