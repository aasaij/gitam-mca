#include <stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	int arr[size];
	//reading values for array from the user
	for(int i = 0; i<size; scanf("%d", &arr[i++]);
	//reversing array elements
//	for (int l = 0, r=size-1; l<r; l++, r--)
//		arr[l] = (arr[l]+arr[r]) - (arr[r]=arr[l]);
	for (int l = 0; l<size/2; l++, r--)
		arr[l] = (arr[l]+arr[size-l-1]) - (arr[size-l-1]=arr[l]);		
	//printing array elements
	for(int i = 0; i<size; printf("%d\t", arr[i++]));						
	return 0;
}