#include<stdio.h>

/*Exercise 1.14: Program to print a histogram of the frequencies of differnt characters in its input.*/

#define ALPHA 26 //26 alphabets from a to z
#define NUM 10 //10 decimal digit 

int main(void){
    int c, freq[ALPHA + NUM + 1]; // +1 is for other character other than alphabets and numbers.

    int i;
    for(i = 0; i < (ALPHA + NUM + 1); i++){
        freq[i] = 0;
    }

    while((c = getchar()) != EOF){
        if (c >= 97 && c <= 122)   {
            ++freq[c - 97];
        }

        /*else if (c >= 65 && c <= 97){ 
            ++freq[c - 65];
        }*/
        
        else if (c >= '0' && c <= '9'){
            ++freq[c - '0' + ALPHA];
        }

        else
           ++freq[ALPHA + NUM];
    }

    for(i = 0; i < (ALPHA + NUM + 1); i++)
    {
        if (freq[i] > 0){
            if (i < ALPHA){
                printf("%c: ", 'a' + i);
            }
            else if (i >= ALPHA && i < (ALPHA + NUM)){
                printf("%c: ", '0' + (i - ALPHA));
            }
            else{
                printf("others:");
            }

            for(int j = 0; j < freq[i]; j++){
                printf("#");
            }
            putchar('\n');
        }

    }

    return 0;
}
