#include <stdio.h>
#include <limits.h>
#include <float.h>

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
    printf("Maximum value of unsigned char: %d\n\n", UCHAR_MAX);

    //to display the ranges of INT
    printf("########## INT ##########\n");
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of unsigned int: %u\n\n", UINT_MAX);

    //to display short int
    printf("########## SHORT INT ##########\n");
    printf("Maximum value of short: %d\n", SHRT_MAX);
    printf("Minimum value of short: %d\n", SHRT_MIN);
    printf("Maximum value of unsigned short: %u\n\n", USHRT_MAX);
    
    //to display long int.
    printf("########## LONG INT ##########\n");
    printf("Maximum value of long: %ld\n", LONG_MAX);
    printf("Minimum value of long: %ld\n", LONG_MIN);
    printf("Maximum value of unsigned long: %lu\n\n", ULONG_MAX);

    //to display long long int
    printf("################ LONG LONG INT #################\n");
    printf("signed long long int min: %lld\n", LLONG_MIN);
    printf("signed long long int max: %lld\n\n", LLONG_MAX);
    printf("unsigned long long int max: %llu\n", ULLONG_MAX);
    
    //to display flaoting type numbers
    printf("################ FLOAT PRECISION NUMBERS #################\n");
    printf("float min: %e\n", FLT_MIN);
    printf("float max: %e\n", FLT_MAX);
    printf("Double min: %e\n", DBL_MIN);
    printf("Double max: %e\n", DBL_MAX);
    printf("Long Double min: %Le\n", LDBL_MIN);
    printf("Long Double max: %Le\n\n", LDBL_MAX);

    return 0;
}
