#include <stdio.h>
int y; // global variable
int main(){
	int x; // local variable
	printf("%d %d", x,y); // garbage 0
	return 0;
}