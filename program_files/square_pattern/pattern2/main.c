#include<stdio.h>

void square(int n){
	for(int row = 1; row <= n; row++){
		for(int col = 1; col <= n; col++){
			if((row == 1)||(col == 1)||(row == n)||(col == n))
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}

int main(){
	int n;
	printf("Enter a number to print hollow square pattern: ");
	scanf("%d", &n);
	square(n);
	return 0;
}
