#include<stdio.h>

int IsPrime(int x){
	if((x <= 1)||(x > 3 && x%2 == 0)){
		return 0;
	}
	else if(x == 2){
		return 1;
	}
	else{
		int i;
		for(i =3; i < x; i += 2){
			if(x%i == 0){
				return 0;
			}
		}
		if(i == x){
			return 1;
		}
	}
}

int main(){
	int x;
	printf("Enter a number to find whether the number is prime or not: ");
	scanf("%d", &x);
	if(IsPrime(x) == 1)
		printf("The given number is a prime number\n");
	else
		printf("The given number is not a prime number\n");
	return 0;
}
