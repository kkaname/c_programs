#include <stdio.h>
#include <ctype.h>

/*Exercise 5.1: As written, getint treats a + or - not followed by a digit as a valid representation of zero.
 *Fix it to push such a character back on the input.*/

#define MAXLEN 100
#define BUFFSIZE 100

int nbuff = 0;
char buff[BUFFSIZE];

int getint(int *pn);
void printbuf(void);
int getch(void);
void ungetch(char c);

int main(void){
    int num = 0;

    getint(&num);
    printf("%d\n", num);

    printbuf();

    return 0;
}

int getint(int *pn) {
    int c, sign;

    while (isspace(c = getch()))
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-'){  // this is for character
        ungetch(c);                                  // that is not a number
        return 0;
    }

    sign = (c == '-')? -1 : 1;

    if(c == '+' || c == '-') {
        if(!isdigit(c = getch())) {
            ungetch(c);
            ungetch((sign == 1)? '+' : '-');
            return 0;
        }
    }

    for (*pn = 0; isdigit(c); c = getch()) {
        *pn = *pn * 10 + (c - '0');
    }
    *pn *= sign;

    if (c != EOF) {
        ungetch(c);
    }

    return c;
}

void printbuf(void) {
    if (nbuff) {
        printf("Buffer = [ ");
        int i;
        for (i = nbuff - 1; i >= 0; i--) {
            if (i) {
                printf("'%c', ", buff[i] != '\n' ? buff[i] : '.');
            } else {
                printf("'%c' ", buff[i] != '\n' ? buff[i] : '.');
            }
        }
        printf("]\n");
    }
}

int getch(void) {
    return (nbuff > 0)? buff[--nbuff] : getchar();
}

void ungetch(char c){
    if (nbuff >=  BUFFSIZE) {
        printf("ungetch: too many characters\n");
    }
    else {
        buff[nbuff++] = c;
    }
}
