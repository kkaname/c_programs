#include<stdio.h>

/*Exercise 1.19: Program that reverses its input a line at a time, which contains function reverse(s) that reverses the character string s*/

#define MAXLEN 200

int getLine(char line[]);
void reverse(char s[], int len);


int main(void)
{
    int len;
    char line[MAXLEN];
    
    while((len = getLine(line)) > 0)
    {
        reverse(line, len);
        printf("%s\n", line);
    }

    return 0;
}

int getLine(char line[]){
    int i, c;

    for(i = 0; i < MAXLEN - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        line[i] = c;
    }
    
    if (c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

void reverse(char s[], int len)
{
    int i_front, i_last, temp;
    i_last = len - 2;
    for (i_front = 0; i_front < i_last/2; i_front++){
        temp = s[i_last - i_front];
        s[i_last - i_front] = s[i_front];
        s[i_front] = temp;
    }
    return;
}
