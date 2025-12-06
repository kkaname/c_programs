#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Problem 2-3:Write the function htoi(s), which converts a string of hexadecimal digits(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.*/

#define MAX_LEN 100

int power(int num, int n){
    int res = 1;
    while(n){
        res = res * num;
        --n;
    }
    return res;
}

void to_lower(char *s){
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32; 
        }
    }
}

int htoi(char hexadecimal[]){
    int res = 0, n = strlen(hexadecimal);
    for (int i = 0; hexadecimal[n - i - 1] != '\0'; i++){
        if (hexadecimal[n - i - 1] >= '0' && hexadecimal[n - i - 1] <= '9'){
            res += ((hexadecimal[n - i - 1] - '0') * power(16, i));
        }
        else if (hexadecimal[n - i - 1] >= 'a' && hexadecimal[n - i - 1] <= 'f'){
            res += ((hexadecimal[n - i - 1] - 87) * power(16, i));
        }
        else {
            printf("Invalid character present!\n");
            exit(1);
        }
    }
    return res;
}

int main(void){
    char hexadecimal[MAX_LEN];
    printf("Enter a hexadecimal value: 0x");
    scanf("%s", hexadecimal);
    to_lower(hexadecimal);
    printf("The integer equivalent value: %d\n", htoi(hexadecimal));

    return 0;
}
