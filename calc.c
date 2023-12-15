//Program to implement calc
#include <stdio.h>

int main(){
	int num1, num2;
	char opr;
	scanf("%d %c %d", &num1, &opr, &num2);
	switch(opr){
		case '+':
			printf("%d + %d = %d\n", num1, num2, num1+num2); break;
		case '-':
			printf("%d - %d = %d\n", num1, num2, num1-num2); break;
		case '*': case 'x': case 'X':
			printf("%d x %d = %d\n", num1, num2, num1*num2); break;
		case '/':
			printf("%d / %d = %.2f\n", num1, num2, num1/(float)num2); break;
		case '%':
			printf("%d %% %d = %d\n", num1, num2, num1%num2); break;
		default:
			printf("Invalid operation!");
	}
	return 0;
}