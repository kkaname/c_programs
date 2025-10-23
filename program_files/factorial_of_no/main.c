#include<stdio.h>
//using recursive function to calculate the factorial of the given number
int fac(int n){
	if(n == 0){
		return 1;
	}
	else{
		return n*fac(n - 1);
	}
}

int main(){
	int n;
	printf("Enter a number to find its factorial:");
	scanf("%d", &n);
	printf("The factorial of the given number is %d\n", fac(n));
	return 0;
}
