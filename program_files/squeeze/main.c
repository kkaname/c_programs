#include <stdio.h>

/*Program which removes all occurrences of the character c from the string*/

#define MAX_LEN 100

void squeeze(char s[], int c){
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++){
        if (s[i] != c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

int main(void){
    char c, s[MAX_LEN];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter a character to be removed:");
    scanf("%c", &c);
    squeeze(s, c);
    printf("%s\n", s);

    return 0;
}
