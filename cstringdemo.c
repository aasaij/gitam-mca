#include <stdio.h>
#include <ctype.h>
int main(){
	char ch;
	scanf("%c", &ch);
//	if (isalpha(ch))
//		printf("Alphabet");
//	else if (isdigit(ch))
//		printf("Digit");
//	else
//		printf("Special character");
	printf("%s", isalpha(ch)?"Alphabet":(isdigit(ch)?"Digit":"Special char"));
	return 0;
}