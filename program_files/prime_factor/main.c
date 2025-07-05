#include<stdio.h>

//fucntion to find the approximate squareroot of a number
int sq_root(int n){
	int res = 1;
	while(res*res <= n){
		res++;
      }
      return (res -1);
}

//this is the function to find the whether a number is prime or not
int IsPrime(int x){
	if((x <= 1)||((x > 3)&&(x%2 == 0))){
		return 0;
	}
	else{
		for(int i = 3; i < sq_root(x); i += 2){
      			if(x%i == 0){
      				return 0;
      		}
	}
	}
	return 1;
}

//this is the main function that calculates the prime number, which uses sq_root() and IsPrime() fucntion
int primefactor(int n){
	for(int i = 0; i <= n; i++){
		if(IsPrime(i) == 1){
			while(n%i == 0){
				printf("%d ", i);
				n = n/i;
			}
		}
	}
	printf("\n");
}

int main(){
	int n;
	printf("Enter a number to find its prime factors: ");
	scanf("%d", &n);
	primefactor(n);
	return 0;
}

