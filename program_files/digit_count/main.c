#include<stdio.h>

int main(){
	int n, count = 0;
	scanf("%d", &n);
	while( n%10 != 0){
		n = n/10;
		count++;
	}
	printf("%d\n", count);
	return 0;
}
