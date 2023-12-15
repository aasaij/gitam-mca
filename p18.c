#include <stdio.h>

int main(){
	int a = 10;
	printf("%p\n", &a);
	a = 20;
	printf("%p", &a);
	
	return 0;
}