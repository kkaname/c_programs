#include <stdio.h>

#define MAXLEN 100

int str_len(char s[]){
    int i;
    
    while (s[i] != '\0')
        ++i;
    return i;
} 

int main(void){
    char s[MAXLEN];
    printf("Enter a string to determine its length:");
    scanf("%s", s);
    printf("Length of string: %d\n", str_len(s));
    return 0;
}