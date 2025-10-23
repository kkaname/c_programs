#include<stdio.h>

/*alternate way:
 * for(int row = i; row <= n; row++){
 * 	int col = 1;
 * 	while(col <= (n - row)){
 * 		printf(" ");
 * 	}
 * 	while(col <= n){
 * 		printf("*");
 * 	}
 *	printf("\n");
 * }*/




int main(){
	int n;
	printf("Enter a number to print inverted triangulare pattern: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = n-i; j > 0; j--){
			printf(" ");
		}
		for(int k = 0; k < i; k++){
			printf("*");
		}
		printf("\n");
	}
}
