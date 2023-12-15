#include <stdio.h>
int main(){
	char first[50], last[50];
	scanf("%10s%*[^ ] %10s", first, last);
	printf("%s %s", first, last);
	return 0;
}