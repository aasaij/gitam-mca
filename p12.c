#include <stdio.h>

int main(){
	char c = 250;
	int x = c + !c + ~c + ++c;
	printf("%d", x);
	return 0;
}

//
//10 10 21
//10 11 22
//10 10 22