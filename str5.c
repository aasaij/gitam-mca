#include <stdio.h>
int main(){
	char str[100];
//	scanf("%s", str);
//	scanf("%[^a-zA-Z]s", str);
//	scanf("%[a-zA-Z]s", str);
	scanf("%5[a-zA-Z]s", str);
	puts(str);
	return 0;
}