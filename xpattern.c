#include <stdio.h>

int main(){
	int n;
	char str[100];
	scanf("%s%n",str, &n);
	for (int i = 1; i<n; i++)
		printf("%*c%*s%c\n", i,str[i-1],(n-i)*2,"", str[i-1]);
	printf("%*c\n",n,str[n-1] );
	for (int i = n-1; i>=1; i--)
		printf("%*c%*s%c\n", i,str[i-1],(n-i)*2,"", str[i-1]);
	
	return 0;
}