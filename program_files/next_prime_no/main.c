#include<stdio.h>

int nextprime(int n){
	while(1){
		int i;
		for(i = 2; i < n; i++){
			if(n%i == 0){
				break;
			}
		}
		if(i == n)
			return n;
		n++;
	}
}

int main(){
	int n;
	printf("Enter a number to find prime number after it: ");
	scanf("%d", &n);
	printf("The prime number next to the given number is:%d\n", nextprime(n+1));
	return 0;
}
