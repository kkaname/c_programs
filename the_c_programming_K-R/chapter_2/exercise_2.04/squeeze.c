#include <stdio.h>

/*Exercise 2-4: Write an alternate version of squeeze (s1, s2) that deletes each character in s1 that matches any character in the string s2.*/

#define MAX_LEN 100

void squeeze(char s1[], char s2[]){
    int i, j, k;
    for (i = 0; s2[i] != '\0'; i++){
        for (j = k = 0; s1[j] != '\0'; j++){
            if (s1[j] != s2[i])
                s1[k++] = s1[j];
        }
    }
}

int main(void){
    char s1[MAX_LEN], s2[MAX_LEN];
    printf("Enter fist string:");
    scanf(" %[^\n]%*c", s1);
    printf("Enter second string:");
    scanf(" %[^\n]%*c", s2);

    squeeze(s1, s2);

    printf("%s\n", s1);

    return 0;
}
