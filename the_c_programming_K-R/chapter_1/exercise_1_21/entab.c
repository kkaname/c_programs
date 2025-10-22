#include<stdio.h>

/*Exercise 1.21: Program that replaces strings of blanks by minimum number of tabs and blanks to achieve to achive the same spacing.*/

#define TAB_WIDTH 8 //defines the width of the tab character

int main(void)
{
    int c;
    unsigned int line_pos, no_spaces;

    
    line_pos = no_spaces = 0;
    while ((c = getchar()) != EOF)
    {
        ++line_pos;
        if (c == ' '){
            ++no_spaces;

            if ((line_pos % TAB_WIDTH) == 0 && no_spaces > 1){
                putchar('\t');
                no_spaces = 0;
            }
        }
        else {
            while (no_spaces){
                putchar(' ');
                --no_spaces;
            }

            if (c == '\n'){
                line_pos = 0;
            }

            putchar(c);
        }
    }

    return 0;
}

