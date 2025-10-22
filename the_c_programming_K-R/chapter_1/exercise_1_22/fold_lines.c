#include<stdio.h>

/*Exercise 1.22: Program to 'fold' long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input.*/

#define MAXLEN 200
#define BREAKPOINT 40

int get_line(char line[]);
void fold_line(char line[], char str_fold[], int no_break);


int main()
{
    char line[MAXLEN], str_fold[MAXLEN];

    while (get_line(line) > 0)
    {
        fold_line(line, str_fold, BREAKPOINT);
        printf("%s\n", str_fold);
    }

    return 0;
}

int get_line(char line[])
{
    int c, i;

    for (i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }

    if (c == '\n'){
        line[i++] = c;
    }

    line[i] = '\0';

    return i;
}

void fold_line(char line[], char str_fold[], int no_break)
{
    unsigned int i, j, column_num;

    column_num = 1; 
    for (i = 0, j = 0; line[i] != '\0'; ++i, ++j)
    {
        str_fold[j] = line[i];

        if (str_fold[j] == '\n')
        {
            column_num = 1;
        }

        ++column_num;

        if(column_num == no_break - 2){
            if(line[i] != ' ' && line[i] != '\t' && line[i+1] != '\0' && line[i+1] != ' ' && line[i+1] != '\t'){
                if (j < MAXLEN - 2) {
                    str_fold[++j] = '-';
                    str_fold[++j] = '\n';
                    column_num = 1;
                }
            }
        }
    }
    
    str_fold[j] = '\0';
}
