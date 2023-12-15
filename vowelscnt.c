#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char str[100], vowels[] = "aeiouAEIOU";
	int v=0, c=0;
	fgets(str, 99, stdin);
	for (int i = 0; str[i]!='\0'; i++){
		if(strchr(vowels, str[i])!= NULL)
			v++;
		else if (isalpha(str[i]))
			c++;
	}
	printf("Vowels : %d\nConsonants : %d\n", v, c);
	return 0;
}