//Program to find sum of columns in matrix
#include <stdio.h>

int main(){
	int m = 3, n = 3;
	int arr[][3]= {{1,2,3},
				   {4,5,6},
				   {7,8,9}};
	for (int j = 0; j<n; j++){
		int sum = 0;
		for (int i = 0; i<m; i++)
			sum+=arr[i][j];
		printf("%d ", sum);
	}
	return 0;
}