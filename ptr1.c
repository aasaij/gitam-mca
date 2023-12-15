#include <stdio.h>

int main(){
	int x = 10, *p;
	p =&x;
	printf("%d\n", *p);
	*p = 100;
	printf("%d", *p);
	return 0;
}