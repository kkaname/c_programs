#include<stdio.h>

/*Exercise 1-2: To find out what happens when '\n' is replaced by unknown escape sequence like '\c' */

int main(void)
{
    printf("hello, world\c");   /*prints a warning: unknown escape sequence '\c' */
    return 0;
}
