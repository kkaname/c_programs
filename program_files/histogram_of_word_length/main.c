/*this program basically takes the user input and returns the frequency of number of words according to the letters present in each word*/

#include<stdio.h>
#include<string.h>

#define OUT 0
#define IN 1
#define MAX 100

int main(){
    int c, num_of_word, arr[MAX], state, len; 
    state = OUT;
    int maxLen = 0; 
    for(int i = 0; i < MAX; i++){
        arr[i] = 0;
    }

    num_of_word = len = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if (state == IN){
                if (len > 0 && len < MAX){
                    ++num_of_word;
                    ++arr[len];
                    if(maxLen < len){
                        maxLen = len;
                    }
                }
                len = 0;
            }
            state = OUT;
        }
        else {
            ++len;
            state = IN;
        }
    }
    if(state == IN){
        ++num_of_word;
        ++arr[len];
        if(maxLen < len){
            maxLen = len;
        }
    }
    printf("\nnum of words = %d\n", num_of_word);

    //then we print the histogram of the frequency of word corrording their letter
    for(int i = 1; i <= maxLen; i++){
        if(arr[i] > 0){
            printf("Length %2d | ", i);
            for(int j = 0; j < arr[i]; j++){
                printf("#");
            }
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
