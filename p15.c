#include <stdio.h>
int main(){
	int x=10, y=20;
	y = x > y || x++;
	printf("%d %d", x, y);
	return 0;
}