#include<stdio.h>

void right_angle_triangle_pattern(int n){
	for(int row = 1; row <= n; row++){
        	for(int col = 1; col <=row; col++){
            		if((col == 1)||(row == col)){
                		printf("* ");
            		}
            		else if(row == n){
                		printf("* ");
            		}
            		else
                		printf("  ");
        		}
        	printf("\n");
	}
}

int main(){
	int n;
	printf("Enter a number ro print right angle triangle patter: ");
	scanf("%d", &n);
	right_angle_triangle_pattern(n);
	return 0;
}
