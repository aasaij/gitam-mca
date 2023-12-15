#include <stdio.h>
int main(){
	char str[100];
	int i;
	scanf("%[^\n]s", str);
//	fgets(str, 99, stdin);
	for (i=0;str[i];i++);
	printf("%d", i);
	return 0;
}