#include <stdio.h>

/*Exercise 2.7: Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.*/

int invert (unsigned int x, unsigned int p, unsigned int n){
    unsigned int mask1 = ~(~(~0 << n) << (p - (n - 1)));
    unsigned int mask2 = (x ^ ~0) & (~(~0 << n) << (p - (n - 1)));
    printf("%u\n", mask2);
    return (x & mask1) | mask2;

}

int main(void){
    unsigned int x, p, n;

    printf("Enter a number: ");
    scanf("%u", &x);
    printf("Enter position: ");
    scanf("%u", &p);
    printf("Enter number of bits: ");
    scanf("%u", &n);

    printf("result: %d\n", invert(x, p, n));

    return 0;
}
