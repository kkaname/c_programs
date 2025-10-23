/*
 *This program checks whether a given string is panagram or not.
 *Panagram is a string which has at least one of all the letters in alphabet
 */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
const int MAX_LEN = 100;

bool isPanagram(char s[]) {
    int num_alpha = 26;
    if(strlen(s) < num_alpha)
        return false;
    
    bool found;
    
    for(int i = 0; i < num_alpha; i++){
        found = false;
        for(int j = 0; j < strlen(s); j++){
            if(tolower(s[j]) == i + 97){
                found = true;
                break;
            }
        }
        if(!found)
            return false;
    }
    return true;
}

int main(void){
    char str[MAX_LEN];
    printf("Enter a string:");
    scanf("%s", str);
    if(isPanagram(str))
        printf("\nThe string is a Panagram.\n");
    else
        printf("\nThe string is not a Panagram\n");
    return 0;
}
