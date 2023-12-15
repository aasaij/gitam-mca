#include <stdio.h>

int main(){
	static int a; // bss 
	static int x = 10; // data segment
//	register int x;
	scanf("%d", &x);
	
    return 0;
}