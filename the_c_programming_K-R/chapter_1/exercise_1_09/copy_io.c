#include<stdio.h>

/*Exercise 1.09: Program to copy its input to its output, replacing each string of one or more blanks by a single blank.*/

int main(void)
{
    int c, last_c = '\0';

    while((c = getchar()) != EOF)
    {
        if(c != ' ' || last_c != ' ')
        {
            putchar(c);
        }
        
        last_c = c;    //stores the character for comparision with the next character.
    }

    return 0;
}
