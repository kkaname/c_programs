#include<stdio.h>

int main(){
	int n;
	fprintf(stdout, "Enter a number to find whehter the number is odd or even: ");
	fscanf(stdin, "%d", &n);
	if(n%2 == 0)
		fprintf(stdout, "The given number is Even.\n");
	else
		fprintf(stdout, "The given number is Odd.\n");
	return 0;
}


