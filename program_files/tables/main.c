#include<stdio.h>

int main(){
	int n;
	printf("Enter a number to print multiplication tables till that number: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 10; j++){
			printf("%d ", i*j);
		}
		printf("\n");
	}
	return 0;
}
