#include <stdio.h>

int main(){
	int size;
	scanf("%d", &size);
	int arr[size];
	//reading values for array from the user
	for(int i = 0; i<size; i++)
		scanf("%d", &arr[i]);
	//printing array elements in same order
	for(int i = 0; i<size; i++)
		printf("%d\t", arr[i]);			
	//printing array elements in reverse order
	puts("");
	for(int i = size-1; i>=0; i--)
		printf("%d\t", arr[i]);			
			
		
	
	return 0;
}