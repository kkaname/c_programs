#include<stdio.h>

int gcd(int a, int b){
	int n;
	if(a > b)
		n = a;
	else 
		n = b;
	for(int i = n; i > 0; i--){
		if((a%i == 0)&&(b%i) == 0){
			return i;
		}
	
	}
}


int main(){
	int a, b;
	printf("Enter two number to find the GCD of two numbers:");
	scanf("%d%d", &a, &b);
	printf("The GCD of two numbers is %d\n", gcd(a, b));
	return 0;
}
