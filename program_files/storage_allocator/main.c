#include <stdio.h>

#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE]; // storage for alloc
static char *allocp = allocbuf; // points to next free postion inside allocbuf

char *alloc(int n);
void afree(char *p);

int main(void) {
    char *a;
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    a = alloc(n * sizeof(int)); //for int
    for (int i = 0; i < n; i++) {
        a[i] = i;
        printf("%d ", a[i]);
    }
    printf("\n");
    afree(a);
    
    n = 26; //for characters
    a = alloc(n * sizeof(char)); //for char
    for (int i = 0; i < n; i++) {
        a[i] = i + 'a';
        printf("%c ", a[i]);
    }
    printf("\n");
    afree(a);

    return 0;
}

char *alloc (int n) {
    if (ALLOCSIZE - (allocp - allocbuf) >= n) { //this means there is enough space
        allocp += n; //points to the next free position
        return allocp - n; //old position
    }
    else {
        return 0;
    }
}

void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
}
