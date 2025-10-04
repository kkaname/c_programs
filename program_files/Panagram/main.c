/*
 *This program checks whether a given string is panagram or not.
 *Panagram is a string which as atleast one of all the letters in alphabet
 */
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
const int MAX_LEN = 100;

bool isPanagram(char s[]) {
    int num_alpha = 26, j;
    if(strlen(s) < num_alpha)
        return false;
    
    bool status = true;
    
    for(int i = 0; i < num_alpha; i++){
        for(j = 0; j < strlen(s); j++){
            if(tolower(s[j]) != i + 97)
                status = false;
            else{
                status = true;
                break;
            }
        }
        if(!status)
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
        printf("\nThe string in not a Panagram\n");
    return 0;
}
