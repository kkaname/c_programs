#include<stdio.h>

int main(){
	int n, cur_ele, prev_ele_0= 0,  prev_ele_1= 1;
	printf("Enter a number of elements:");
	scanf("%u", &n);
	printf("%u, ", prev_ele_1);
	for(int i = 2; i <= n; i++){
		cur_ele = prev_ele_0 + prev_ele_1;
		printf("%u, ", cur_ele);
		prev_ele_0 = prev_ele_1;
		prev_ele_1 = cur_ele;
	}
	printf("\n");
	return 0;
}
