/*
 *Problem 2235: Add Two Intergers
 *This program adds two intergers
 */
#include<stdio.h>

int sum(int num1, int num2){
    return (num1 + num2);
}

int main(void){
    int num1, num2;
    printf("Enter two interger numbers to add them:");
    scanf("%d%d", &num1, &num2);
    printf("\nsum = %d\n", sum(num1, num2));
    return 0;
}
