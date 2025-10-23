//this program uses self-implemented strcmp() function, without needing string.h header file, to compare two given strings
#include<stdio.h>
//here we create our own implementation of strcmp, used to compare two given strings
int strComp(char s1[], char s2[]){
    int i = 0;
    while(s1[i] && s2[i]){
        if(s1[i] != s2[i]){
            break;
        }
        ++i;
    }
    return (s1[i] - s2[i]);
}

int main(){
    char s1[50], s2[50];
    int state;

    printf("Enter two strings to compare them:\n");
    scanf("%s%s", s1, s2);
    state = strComp(s1, s2);
    
    if(state == 0){
        printf("Both the string are equal.\n");
    }
    else{
        printf("%d: Both the string are not equal.\n", state);
    }

    return 0;
}

