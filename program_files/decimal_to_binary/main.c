//this program converts the given decimal number into it's equivalent binary number
#include<stdio.h>

void to_binary(int n){
	int i = 0, binary[32];
	if(n == 0){
		printf("0\n");
		
	}
	while(n != 0){
		binary[i] = n%2;
		n = n/2;
		i++;
	}
	for(int j = i-1; j >= 0; j--){
		printf("%d", binary[j]);
	}
	printf("\n");
}

int main(){
	int n;
	printf("Enter a decimal number:");
	scanf("%d", &n);
	to_binary(n);
	return 0;
}
