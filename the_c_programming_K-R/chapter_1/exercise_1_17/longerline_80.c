#include<stdio.h>

#define MAXLEN 200

/*Exercise 1.7: Program  to print all input lines whose length are more than 80 or dont print.*/

int getLine(char line[]);

int main(void)
{
    int c, line_len;
    char  line[MAXLEN];


    while((line_len = getLine(line)) > 0)
    {
        if (line_len > 80)
        {
            printf("%s\n", line);
        }
    }

    return 0;
}

int getLine(char line[])
{
    int c, i, len;

    i = len = 0; 
    while ((c = getchar()) != EOF && c != '\n')
    {
        line[i] = c;
        ++i;
        ++len;
    }
    if (c == '\n'){
        line[i] = '\n';
        ++i;
        ++len;
    }

    c = '\0';

    return len;
}
