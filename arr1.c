#include <stdio.h>

int main(){
	int arr[10] = {10,20, 30,[5 ... 8]={77,88,99}};
//	arr[0]= 100;
//	arr[1]= 200;
//	arr[2] = arr[0]+arr[1];
//	arr[3]= ++arr[0];
	printf("%d", arr[6]);
	return 0;
}