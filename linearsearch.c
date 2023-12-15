#include <stdio.h>
int main(){
	int size;
	scanf("%d", &size);
	int arr[size], key;
	//reading values for array from the user
	for(int i = 0; i<size; scanf("%d", &arr[i++]));
	printf("Key to be searched : ");
	scanf("%d", &key);
	//implementint linear search algorithm
	for (int i = 0; i<size; i++){
		if (arr[i]==key){
			printf("Found @ %d", i+1);
			return 0;
		}
	}
	printf("Not found!");
	return 0;
}