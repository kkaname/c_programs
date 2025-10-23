#include<stdio.h>

/*Exercise 1.23: Program  to remove all comments from a c program.*/

#define MAXLEN 200

#define TRUE (1 == 1)
#define FALSE !TRUE

int get_str(char str[]);
void removeComments(char str[], char no_comm_str[]);

int main(void)
{
    char str[MAXLEN], no_comm_str[MAXLEN];

    get_str(str);
    removeComments(str, no_comm_str);
    printf("%s\n", no_comm_str);

    return 0;
}

int get_str(char str[])
{
    int c, i;

    for (i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF; i++)
    {
        str[i] = c;
    }

    str[i] = '\0';
    putchar('\n');

    return i;
}

void removeComments(char str[], char no_comm_str[])
{           
    unsigned int i, j;
    int in_multiline_comm, in_singleline_comm;

    in_multiline_comm = FALSE;
    in_singleline_comm = FALSE;

    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '/' && str[i + 1] == '*'){
            in_multiline_comm = TRUE;
            i += 2;
        }
        if (str[i] == '/' && str[i + 1] == '/'){
            in_singleline_comm = TRUE;
            i += 2;
        }

        if (in_multiline_comm)    //here we check whether the iterator is inside a comment or not, if not
        {
            if (str[i] == '*' && str[i + 1] == '/'){
                in_multiline_comm = FALSE;
                i += 2;
                no_comm_str[j++] = '\n';
            }
            else
                continue;
        }
        else if (in_singleline_comm)
        {
            if (str[i] == '\n'){
                in_singleline_comm = FALSE;
            }
            else
                continue;
        }

        if (!in_multiline_comm && !in_singleline_comm)
        {
            no_comm_str[j++] = str[i];
        }
    }
    no_comm_str[j] = '\0';
}
