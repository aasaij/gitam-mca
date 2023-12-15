//for (.....){
//	for(...){
//		<statements>
//	}
//}
//
//for (int i = 1; i<=10; i++){ // outer loop --> rows
//	for (int j = 1; j<=10; j++){// inner loop --> columns
//		printf("Manoj is sooo cute!!!");
//	}
//}
#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = n; i>=1; i--){
		for (int j = 1; j<=i; j++){
			printf("%c", j+64);
		}
		printf("\n");
	}
}