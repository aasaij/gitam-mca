#include <stdio.h>

int main(){
	int x = 10, y, z;
	y = x++;
	z = ++x + y++;
	
	printf("%d %d %d", x, y, z);
	return 0;
}

//
//10 10 21
//10 11 22
//10 10 22