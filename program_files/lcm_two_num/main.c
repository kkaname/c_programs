#include<stdio.h>

int lcm(int a, int b){
	int n;
	if(a < b)
		n = a;
	else 
		n = b;
	for(int i = n; ; i += n){
		if(i%a == 0 && i%b == 0){
			return i;
		}
	}
}

int main(){
	int a, b;
	printf("Enter two numbers to calculate the LCM of the numbers: ");
	scanf("%d%d", &a, &b);
	printf("The LCM of the given numbers is %d.\n", lcm(a, b));
	return 0;
}
