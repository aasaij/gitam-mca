#include <stdio.h>
int increment(){
	static int x = 1;
	return x++;
}

int main(){
	printf("%d", increment());
	printf("%d", increment());
	printf("%d", increment());
	printf("%d", increment());
	
    return 0;
}