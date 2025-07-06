#include<stdio.h>

int main(){
	int year;
	printf("Enter a year to determine whether that year is leap year of not: ");
	scanf("%d", &year);
	if((year%4 == 0 && year%100 != 0)||(year%400 == 0))
		printf("The given year is a LEAP YEAR.\n");
	else
		printf("The given year is NOT A LEAP YEAR.\n");
	return 0;
}

