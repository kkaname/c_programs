#include<stdio.h>

void transpose(int m, int n, int arr[][n]){
	for(int i = 0; i < n; i++){            // iterate over columns
		for(int j = 0; j < m; j++){        // iterate over rows
			printf("%d ", arr[j][i]);      // correct access for transpose
		}
		printf("\n");
	}
}

int main(){
	int m, n;
	printf("Enter the no. of rows and column:");
	scanf("%d%d", &m, &n);
	int arr[m][n];
	printf("Enter the elements of the matrix:\n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	transpose(m, n, arr);
	return 0;
}
