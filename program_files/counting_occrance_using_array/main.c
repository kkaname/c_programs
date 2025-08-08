#include<stdio.h>
//this program basically uses an array for size 10 to store the occurance of number in the corresponding subscripts of the same array
int main(){
    int c, num_of_whiteSpaces, num_of_other_characters, num_of_digits[10];
    for(int i = 0; i < 10; i++){
        num_of_digits[i] = 0;
    }
    num_of_other_characters = num_of_whiteSpaces = 0;

    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9'){
            ++num_of_digits[c - '0'];
        }
        else if(c == ' ' || c == '\n' || c == '\t'){
            ++num_of_whiteSpaces;
        }
        else{
            ++num_of_other_characters;
        }
    }
    printf("\nThe digits present are:");
    for(int i = 0; i < 10; i++){
        printf("%d: %d, ", i, num_of_digits[i]);
    }
    printf(", white spaces = %d, other characers = %d.\n", num_of_whiteSpaces, num_of_other_characters);
    return 0;
}
