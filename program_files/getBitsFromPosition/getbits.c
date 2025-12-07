#include "stdio.h"

/*function getbits(x, p, x) that returns the the rightr adjusted n-bit field of x that begins at position p, assuming that bit position 0 is at the right end and that n and p are sensible positive values.*/

unsigned getbits(unsigned x, unsigned p, unsigned n){
    return (x>>(p - n + 1)) & (~(~0<<n));
}

int main(void){
    unsigned int x, p, n;
    printf("Enter a unsigned number: ");
    scanf("%u", &x);
    printf("Enter bit position: ");
    scanf("%u", &p);
    printf("Enter number of bits: ");
    scanf("%u", &n);
    printf("%d\n", getbits(x, p, n));

    return 0;
}
