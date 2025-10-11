#include<stdio.h>

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
