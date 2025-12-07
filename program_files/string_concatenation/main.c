#include <stdio.h>

#define MAX_LEN 1000

void str_cat(char *s, char *t){
    int i, j;
    i = j = 0;
    while (s[i] != '\0')  
        ++i;
    s[i++] = ' ';

    while (t[j] != '0')
        s[i++] = t[j++];
}

int main(void){
    char str1[MAX_LEN], str2[MAX_LEN];

    printf("Enter string 1:");
    scanf(" %[^\n]%*c", str1);
    printf("Enter string 2:");
    scanf(" %[^\n]%*c", str2);

    str_cat(str1, str2);
    printf("string 1 = %s\n", str1);

    return 0;
}
