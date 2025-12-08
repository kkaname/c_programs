#include <stdio.h>

/*program that counts the number of 1-bits present in the binary representaion of its equivalent integer.*/

int bitcount(unsigned x){
    int rem, no_bits = 0;
    while (x != 0){
        rem = x % 2;
        printf("%d\n", rem);
        no_bits += rem;
        x = x / 2;
    }
    return no_bits;
}

/*Alternate method using bit manipulation.
 *>for (i = 0; x != 0; x >>= 1){
 *>     if (x & 1)
 *>         ++i;
 *>}
 *>return i;
 */

int main(void){
    unsigned int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("no of 1-bits: %d\n", bitcount(x));

    return 0;
}
