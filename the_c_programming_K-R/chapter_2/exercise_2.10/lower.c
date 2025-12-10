#include <stdio.h>

/*Exercise 2.10: Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.*/

#define MAXLEN 100

void lower(char *s){
    for(int i = 0; s[i] != '\0'; i++){
        s[i] = (s[i] >= 97 && s[i] <= 122 || s[i] == ' ')? s[i] : s[i] + 32;
    }
}

int main(void){
    char s[MAXLEN];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", s);

    lower(s);
    
    printf("%s\n", s);

    return 0;
}

