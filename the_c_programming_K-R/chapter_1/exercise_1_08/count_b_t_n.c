#include<stdio.h>

/*Exercise 1-8: counts the number of blanks, tabs and newlines.*/

int main(void)
{
    int num_blank, num_tab, num_newline, c;
    num_blank = num_tab = num_newline = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            ++num_newline;
        }

        if(c == '\t')
        {
            ++num_tab;
        }

        if(c == ' ')
        {
            ++num_blank;
        }
    }

    printf("\nThere are %d of blank characters , %d of tab characters, and %d of newlie-characters.\n", num_blank, num_tab, num_newline);
    
    return 0;

}
