#include<stdio.h>

int main(){
	int n, cur_ele, prev_ele_0= 0,  prev_ele_1= 1;
	printf("Enter the value of n to find the nth element in pingala series:");
	scanf("%u", &n);
	for(int i = 2; i <= n; i++){
		cur_ele = prev_ele_0 + prev_ele_1;
		prev_ele_0 = prev_ele_1;
		prev_ele_1 = cur_ele;
	}
	printf("%u\n", cur_ele);
	return 0;
}
