#include <stdio.h>

int main(void) {
    unsigned int num = 1;
    if (*(unsigned char *)&num == 1) {
        printf("Little Endian.\n");
    }
    else {
        printf("Big Endian.\n");
    }
    return 0;
}
