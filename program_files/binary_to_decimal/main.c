#include<stdio.h>
#include<math.h>



void to_decimal(int n){
	int i = 0, ans = 0;
	if(n == 0)
		printf("0\n");
	while(n != 0){
		ans += (n%2)*pow(2, i);
		n = n/10;
		i++;
	}
	printf("%d\n", ans);
}

int main(){
	int n;
	printf("Enter a binary: ");
	scanf("%d", &n);
	to_decimal(n);
	return 0; 
}
