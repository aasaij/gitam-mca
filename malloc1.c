#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr;
//	arr = (int *)malloc(100);
    arr = (int *)calloc(25, 4);
    arr[0] = 100;
    arr[1]= 398;
    arr = (int *)realloc(arr,  5*sizeof(int));
    free(arr);
    return 0;
}