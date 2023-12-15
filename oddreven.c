//Program to check whethher the given number is odd or even
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
//	if (n%2==0) 
//		printf("Even");
//	else
//		printf("Odd");
//	if (n%2) 
//		printf("Odd");
//	else
//		printf("Even");
	printf("%s", n%2?"Odd":"Even");
	return 0;
}
