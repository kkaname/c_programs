#include<stdio.h>

int main(){
	int n, factorial = 1;
	scanf("%d", &n);
	if(n > 0){
		for(int i = n; i > 0; i--){
			factorial *= i;
		}	
	}
	printf("The factorial of the given number is: %d\n", factorial);
	return 0;
}
