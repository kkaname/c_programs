#include<stdio.h>

int main(){
	int n, digit;
	fprintf(stdout, "Enter a number of find its last digit: ");
	fscanf(stdin, "%d", &n);
	
	//now we determine the last digit in two different ways based on the sign of the number
	if(n > 0){
		digit = n%10;
	}
	else{
		digit = -(n%10);
	}
	
	fprintf(stdout, "The last digit is %d\n", digit);
	return 0;
}
