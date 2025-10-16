#include<stdio.h>
#include<limits.h>

/*Exercise 2.01: Program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation.*/
//NOTE: Harder if you compute them: determine the ranges of the various floating-point types.

int main(void)
{
    //first we display ranges of char
    printf("########## CHAR ##########\n");
    printf("bits: %d\n",CHAR_BIT);
    printf("Maximum value of char: %d\n", CHAR_MAX);
    printf("Minimum value of char: %d\n", CHAR_MIN);
    printf("Maximum value of signed char: %d\n", SCHAR_MAX);
    printf("Minimum value of signed char: %d\n", SCHAR_MIN);
    printf("Maximum value of unsigned char: %d\n", UCHAR_MAX);
    putchar('\n');

    //to display the ranges of INT
    printf("########## INT ##########\n");
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);
    putchar('\n');

    //to display short int
    printf("########## SHORT INT ##########\n");
    printf("Maximum value of short: %d\n", SHRT_MAX);
    printf("Minimum value of short: %d\n", SHRT_MIN);
    printf("Maximum value of unsigned short: %u\n", USHRT_MAX);
    putchar('\n');
    
    //to display long int.
    printf("########## LONG INT ##########\n");
    printf("Maximum value of long: %ld\n", LONG_MAX);
    printf("Minimum value of long: %ld\n", LONG_MIN);
    printf("Maximum value of unsigned long: %lu\n", ULONG_MAX);
    putchar('\n');

    //to display long long int
    printf("################ LONG LONG INT #################\n");
    printf("unsigned long long int max: %llu\n", ULLONG_MAX);
    printf("signed long long int min: %lld\n", LLONG_MIN);
    printf("signed long long int max: %lld\n", LLONG_MAX);
    printf("\n");

    return 0;
}
