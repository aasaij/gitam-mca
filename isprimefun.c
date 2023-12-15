#include <stdio.h>
#include "myfuns.c"
int main(){
	int n;
	scanf("%d", &n);
	if (isprime(n))
		printf("yes");
	else
		printf("no");
		
	return 0;
}