#include <stdio.h>

/*Exercise 2.9: In a two's complement number system, x &= (x - 1) deletes the rightmost 1-bit in x. Explain why. Use this obsevation to write a faster version of bitcount.*/

/*Explaination: For a gives x != 0, its right most 1-bit may or may not be trailed by zero,
 * and when 1 is subtracted from it, the right most 1-bit toggles to zero and trailing zero if the exist are toggled to 1.
 * And performing bitwise AND operation between x and x - 1 gives a result where the rightmost bit is made or toggles to zero
 * and lower 1-bits remain uneffected.*/

int bitcount(unsigned x){
    int i = 0;
    while(x){
        x &= x - 1;
        ++i; 
    }
    return i;
}

int main(void){
    unsigned int x;
    printf("Enter a number: ");
    scanf("%u", &x);
    printf("Numver of 1-bits: %d\n", bitcount(x));
}
