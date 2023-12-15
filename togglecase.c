//Program to convert string into toggle case
#include <stdio.h>

int main(){
	char str[100];
	scanf("%[^\n]s", str);
//	gets(str);
	for (int i = 0;str[i]!=0;i++){
		if (str[i]>='A' && str[i]<='Z')
			str[i]+=32;
		else if (str[i]>='a' && str[i]<='z')
			str[i]-=32;
	}
	puts(str);
	return 0;
}