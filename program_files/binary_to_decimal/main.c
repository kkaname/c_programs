//this program uses convert a given binary number to to decimal number
//NOTE:IF YOUR USING GCC COMPILER, USE -LM FLAG TO LINK THE MATH.H LIBRARY
#include<stdio.h>
#include<math.h>

void to_decimal(int n){
	int i = 0, ans = 0;
    //if the binary number is zero
	if(n == 0)
		printf("0\n");
    //if the number is not equal to zero
	while(n != 0){
		ans += (n%10)*pow(2, i);
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
