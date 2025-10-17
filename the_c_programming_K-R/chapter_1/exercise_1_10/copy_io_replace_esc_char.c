#include<stdio.h>

/*Exercise 1.10: Program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.*/

int main(void)
{
    int c;

    while((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar('\\');
            putchar('b');
        }

        else if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
            putchar(c);
    }

    return 0;
}
