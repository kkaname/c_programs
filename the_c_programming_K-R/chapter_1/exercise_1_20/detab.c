#include<stdio.h>

/*Exercise 1.20: Program that replaces tabs in the input with the peoper number of blanks to space to the next tab stop.*/

#define TAB_WIDTH 8

int main(void)
{
    int c, i, tab_stop = 1;
    unsigned int no_spaces;

    i = 0;
    while((c = getchar()) != EOF)
    {
        if (c == '\t'){
            no_spaces = tab_stop - i - 1;
            while(no_spaces){
                putchar(' ');
                --no_spaces;
            }

        }
        else {
            putchar(c);
        }
        ++i;
        printf("%d\n", i);
        printf("%d\n", tab_stop);
        if (tab_stop < i)
            tab_stop += TAB_WIDTH; 
        printf("%d\n", i);
        printf("%d\n", tab_stop);
    }
    
    return 0;
}
