#include <stdio.h>

/*Exercise 2-6: Write a function setbits(x, p, n, y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bitrs unchaged.*/

int setbits(unsigned x, int p, int n, int y){
    return (x & ~(~(~0 << n) << n)) | (y & ~(~0 << n)) << (p - (n - 1));
}


int main(void){
    unsigned int  x;
    int p, n, y;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter position: ");
    scanf("%d", &p);
    printf("Enter number of bits: ");
    scanf("%d", &n);
    printf("Enter secome number: ");
    scanf("%d", &y);

    printf("result: %d\n", setbits(x, p, n, y));
    
    return 0;
}

