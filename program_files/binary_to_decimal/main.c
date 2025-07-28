//this program uses basic mathe to covert a given binary number to decimal number
#include<stdio.h>
#include<math.h>
//if using gcc, the incluce -lm flag to link the math.h library


void to_decimal(int n){
	int i = 0, ans = 0;
	if(n == 0)
		printf("0\n");
    //if the number is not equal to zero
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
