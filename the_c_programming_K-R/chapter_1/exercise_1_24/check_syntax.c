#include<stdio.h>

/*Exercise 1.24: Program to check for rudimentary syntax errors like unmatched parenthesis, brackets, braces , single and double quotes, and comments*/

#define MAXLEN 200

#define TRUE (1 == 1)
#define FALSE !TRUE

int get_str(char str[]);
void check_syntax(char str[]);

int main(void)
{
    char str[MAXLEN];

    get_str(str);
    check_syntax(str);

    return 0;
}

int get_str(char str[])
{
    int c, i;

    for (i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF; ++i){
        str[i] = c;
    }

    str[i] = '\0';

    return i;
}

void check_syntax(char str[])
{
    int parentheses, brackets, braces;
    int in_single_quotes, in_double_quotes, block_comment;

    parentheses = brackets = braces = 0;
    in_single_quotes = in_double_quotes = block_comment = FALSE; 

    for (int i = 0; str[i] != '\0'; ++i){ 
        if (in_single_quotes){
            if (str[i] == '\''){
                in_single_quotes = FALSE;
                continue;
            }
        }

        if (in_double_quotes){
            if (str[i] == '\"'){
                in_double_quotes = FALSE;
                continue;
            }
        }

        if (block_comment){
            if (str[i] == '*' && str[i +1] == '/'){
                block_comment = FALSE;
                continue;
            }
        }


        //for parenthesis -> (  ) 
        if (str[i] == '('){
            ++parentheses;
            continue;
        }
        else if (str[i] == ')'){
            --parentheses;
            continue;
        } 

        //for brackets .> [ ]
        if (str[i] == '['){
            ++brackets;
            continue;
        }
        else if (str[i] == ']'){
            --brackets;
            continue;
        }

        //for braces -> {  } 
        if (str[i] == '{'){
            ++braces;
            continue;
        }
        else if (str[i] == '}'){
            --braces;
            continue;
        }

        //for single quotes -> '  '  
        if (str[i] == '\''){
           in_single_quotes = !in_single_quotes;  
            continue;
        }

        //for double quotes -> "  " 
        if (str[i] == '\"'){
            in_double_quotes = TRUE;
            continue;
        }
        
        //for block comment --> /* -----*/
        if (str[i] == '/' && str[i + 1] == '*'){
            block_comment = TRUE;
            ++i; //to skip the last * symbol
            continue;
        }


    }

    if (parentheses != 0)
    {
        printf("Error: unbalanced parentheses.\n");
    }

    if (brackets != 0)
    {
        printf("Error: unbalanced brackets.\n");
    }

    if (braces != 0)
    {
        printf("Error: unbalanced braces.\n");
    }

    if (in_single_quotes == TRUE)
    {
        printf("Error: unbalanced single quotes.\n");
    }

    if (in_double_quotes == TRUE)
    {
        printf("Error: unbalanced double quotes.\n");
    }

    if (block_comment == TRUE)
    {
        printf("Error: block comment not closed.\n");
    } 
}


