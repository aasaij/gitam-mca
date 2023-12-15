//P;rogram to check whether the given character is alpha or not
#include <stdio.h>
int main(){
	char ch, confirm;
	do{
		ch = getc(stdin);
		if ((ch >=97 && ch <=122) || (ch>='A' && ch <='Z'))
			printf("Alphabet");
		else
			printf("Not an alphabet");
		printf("\nWant to check more [Y/N] ?");
		scanf("%c", &confirm);
		scanf("%c", &confirm);
		ch = getc(stdin);
	}while(confirm == 'Y' || confirm =='y');
	return 0;
}
