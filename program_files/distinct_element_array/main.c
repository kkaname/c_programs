/*
 *This program returns the number of distinct elements present in a given array
 */

#include<stdio.h>
#include<stdlib.h>

int countdistinct(int* arr, int size){
	int count = 0;
	int is_distinct;
	for(int i = 0; i < size; i++){
		is_distinct = 1;
		for(int j = i - 1; j >= 0; j--){
			if(arr[i] == arr[j]){
				is_distinct = 0;
				break;
			}
		}
		if(is_distinct){
			count++;
		}
	}
	return count;
}

int main(void){
	int n;
	printf("Enter the number of elements:");
	scanf("%d", &n);
	int *arr = malloc(sizeof(int) * n);
	printf("Enter %d elements:\n", n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("there are %d distinct elements.\n", countdistinct(arr, n));
    free(arr);
	return 0;
}
