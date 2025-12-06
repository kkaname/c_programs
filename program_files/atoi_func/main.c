#include <stdio.h>

/*Implementing the atoi() funtion from the stdlib.h library*/

#define MAXLEN 100

int atoi(char s[]){
    int num = 0;
    for (int i = 0; s[i] != '\0'; i++){
        num = num * 10 + (s[i] - '0');
    }
    return num;
}

int main(void){
    char num_str[MAXLEN];
    printf("Enter a string of numbers:");
    scanf("%s", num_str);
    printf("output: %d\n",  atoi(num_str));

    return 0;
}
