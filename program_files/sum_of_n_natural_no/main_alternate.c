#include<stdio.h>

int main(){
	int n, sum = 0;
	fprintf(stdout, "Enter a number to find the sum of 'n' natural number: ");
	fscanf(stdin, "%d", &n);
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	fprintf(stdout, "The sum of %d natural numbers is %d.\n", n, sum);
	return 0;
}

