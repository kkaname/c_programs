#include <stdio.h>
#include <ctype.h>

//program that performs input conversion by breaking a stream of characters into integer values, one integer per call.

#define MAXLEN 100

int getint(int *pn) {
    int c, sign;

    while (isspace(c = getc(stdin))) //skip the while space
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') { //if the character is not integer
        ungetc(c, stdin);
        return 0;
    }

    sign = (c == '-')? -1 : 1;
     
    if (c == '+' || c == '-')
        c = getc(stdin);
    for (*pn = 0; isdigit(c); c = getc(stdin))
        *pn = *pn * 10 + (c - '0');

    *pn *= sign;
    if (c != EOF)
        ungetc(c, stdin);

    return c;
}

int main(void) {
    int i, arr[MAXLEN];

    for (i = 0; i < MAXLEN && getint(&arr[i]) != EOF; i++)
        ;

    for (i = 0; i < MAXLEN; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
