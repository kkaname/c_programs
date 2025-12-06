#include <stdio.h>

int tolower(int c){
    if (c >= 'A' && c <= 'Z')
        c += ('a' - 'A');
    return c;
}

int main(void){
    char c;
    printf("Enter a char:");
    scanf("%c", &c);
    printf("lower:%c\n", tolower(c));

    return 0;
}
