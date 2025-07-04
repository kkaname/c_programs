#include<stdio.h>

int first_digit(int n){
	if(n/10 == 0)
		return n;
	else
		return first_digit(n/10);
}

int main(){
	int n;
	printf("Enter a number to return its first digit: ");
	scanf("%d", &n);
	printf("The first digit of the given number is: %d\n", first_digit(n));
	return 0;
}
