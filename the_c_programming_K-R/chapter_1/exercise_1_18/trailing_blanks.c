#include<stdio.h>

/*Exercise 1.18: program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.*/
#define MAXLEN 1000

int getLine(char line[]);
void remove_trailing_blanks(char line[], int len);

int main(void)
{
    int len;
    char line[MAXLEN];

    while((len = getLine(line)) > 0)
    {
        remove_trailing_blanks(line, len);
        printf("%s\n", line);
    }

    return 0;
}

int getLine(char line[])
{
    int c, i;

    for(i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }

    if (c == '\n'){
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void remove_trailing_blanks(char line[], int len)
{
    for(int i = 2; (line[i - 1] != '\0' || line[i - 1] != '\t') && (line[i] == '\0' || line[i] == '\t'); i++){
        line[i] = '\n';
        line[i + 1] = '\0';
    }
    return;
}
