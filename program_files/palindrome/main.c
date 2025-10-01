#include<stdio.h>
#include<string.h>

const int MAX_LEN = 50;

void palindrome(char* str){
    int status = 1, size = strlen(str);
    for(int i = 0; i < size/2; i++){
        if(str[i] != str[size - 1 - i]){
            status = 0;
            break;
        }
    }
    if(status)
        printf("Is a palindrome.\n");
    else
        printf("Not a palindrome.\n");
}

int main(void){
    char str[MAX_LEN];
    printf("Enter a string to find whether its a palindrome or not: ");
    scanf("%s", str);
    palindrome(str);
    return 0;
}
