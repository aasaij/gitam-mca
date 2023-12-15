//function demo
#include <stdio.h>
int main(){
	//function declaration or function proto-type
	int isvowel(char);
	char ch;
	scanf("%c", &ch);
	//function calling
	if (isvowel(ch))
		printf("Yes");
	else 
		printf("No");	
	return 0;
}
function definition
int isvowel(char ch){
	if (ch == 'a' || ch =='e' || ch == 'i'|| ch == 'o'|| ch == 'u'
		|| ch == 'A' || ch == 'E' || ch == 'U' || ch == 'I' || ch == 'O')
		return 1;
	else
		return 0;
}




