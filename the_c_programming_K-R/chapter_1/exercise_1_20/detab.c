#include<stdio.h>

/*Exercise 1.20: Program that replaces tabs in the input with the peoper number of blanks to space to the next tab stop.*/

#define TAB_WIDTH 8

int main(void)
{
    int c, current_col, tab_stop;
    unsigned int no_spaces;

    current_col = 1;
    while((c = getchar()) != EOF)
    {
        if (c == '\t'){
            no_spaces = TAB_WIDTH - (current_col % TAB_WIDTH);
            while(no_spaces){
                putchar(' ');
                --no_spaces;
                ++current_col;

            }

        }
        else {
            ++current_col;
            putchar(c);
            if (c == '\n'){
                current_col = 0;
            }
        }
    }
    
    return 0;
}
