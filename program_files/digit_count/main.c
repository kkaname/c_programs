//this program counts the number of digits present in the given number
#include<stdio.h>

int main(){
	int n, count = 0;
    printf("Enter a number:");
	scanf("%d", &n);
	while( n%10 != 0){
		n = n/10;
		count++;
	}
	printf("%d\n", count);
	return 0;
}
