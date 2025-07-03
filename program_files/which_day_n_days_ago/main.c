#include<stdio.h>
#include<ctype.h>
#include<string.h>

enum day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main(){
	enum day d;
	char day[20];
	int n, res;
	printf("What day is it today? ");
	fgets(day, sizeof(day), stdin);

	for(int i = 0; day[i] != '\0'; i++)
	{
		day[i] = toupper(day[i]);
	}
    
	day[strcspn(day, "\n")] = '\0';


	if (strcmp(day, "SUNDAY") == 0){
		d = 0;
	}
	else if (strcmp(day, "MONDAY") == 0){
		d = 1;
	}
	else if (strcmp(day, "TUESDAY") == 0){
		d = 2;
	}
	else if (strcmp(day, "WEDNESDAY") == 0){
		d = 3;
	}
	else if (strcmp(day, "THURSDAY") == 0){
		d = 4;
	}
	else if (strcmp(day, "FRIDAY") == 0){
		d = 5;
	}
	else if (strcmp(day, "SATURDAY") == 0){
		d = 6;
	}

	printf("Enter the number to find the day before the same number of days: ");
	scanf("%d", &n);
	int days = n;

	//logic for determining the day before 'n' days
	n = n%7;
	res = d - n;
	while(res < 0){
		res += 7;
	}

	if (res == 0){
		fprintf(stdout, "SUNDAY was the day which was %d days before the today's day.\n", days);
	}
	else if (res == 1){
		fprintf(stdout, "MONDAY was the day which was %d days before the today's day.\n", days);
	}
	else if (res == 2){
		fprintf(stdout, "TUESDAY was the day which was %d days before the today's day.\n", days);
	}
	else if (res == 3){
		fprintf(stdout, "WEDNESDAY was the day which was %d days before the today's day.\n", days);
	}
	else if (res == 4){	
		fprintf(stdout, "THURSDAY was the day which was %d days before the today's day.\n", days);
	}
	else if (res == 5){	
		fprintf(stdout, "FRIDAY was the day which was %d days before the today's day.\n", days);
	}
	else if (res == 6){	
		fprintf(stdout, "SATURDAY was the day which was %d days before the today's day.\n", days);
	}

	return 0;
}
	
