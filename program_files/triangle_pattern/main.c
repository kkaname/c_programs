#include<stdio.h>

int main(){
	int n;
	printf("Enter a number to  print triangular patter: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < i; j++){
     			printf("*");
		}
		printf("\n");
	}
}
