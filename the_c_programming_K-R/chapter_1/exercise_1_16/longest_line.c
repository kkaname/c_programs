#include<stdio.h>

/*Exercise 1.16:  program that takes set of text lines and prints out the longest one out of them
 *here  a line must atleast contain one single character to be considered as valid or else will be considered as end-of-file,
 *even a line containing only a newline has length of 1
 */

#define MAX_LEN 200   //max input line size

/*now we declare two important function prototypes*/
int getLine(char line[]);
void copy(char longest_line[], char current_line[]);

int main(void)
{
    int current_len, max_len;
    char current_line[MAX_LEN], longest_line[MAX_LEN];

    max_len = 0;

    while((current_len = getLine(current_line)) > 0){
        if(current_len > max_len){
            max_len = current_len;
            copy(longest_line, current_line);
        }
    }

    if(max_len > 0)
        printf("The longest string with a length of %d is \"%s\"\n", max_len, longest_line);

    return 0;
}

int getLine(char line[])
{
    int i, c;

    for(i = 0; i < MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    if(c == '\n'){
        line[i++] == c;
    }
    line[i] = '\0';

    return i;
}

void copy(char longest_line[], char current_line[]){
    for(int i = 0; (longest_line[i] = current_line[i]) != '\0'; i++)
        ; // null statement as the work is done by the condition and incrementatoin inside the loop itself
}
