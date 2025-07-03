#include<stdio.h>

int main(){
	int n;
	float sum;
	fprintf(stdout, "Enter the value of 'n' to find the sum of n natural numbers:");
	fscanf(stdin, "%d", &n);
	sum = (float)(n*(n+1))/2;
	fprintf(stdout, "The sum of %d natural numbers is %.2f.", n, sum);
	return 0;
}
