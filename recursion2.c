#include <stdio.h>
void print(int n){
	if(n){
		printf("%d", n);
		print(n-1); // tail recursion
	}
}

int main(){
	int n;
	scanf("%d", &n);
	print(n);
	return 0;
}