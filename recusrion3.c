#include <stdio.h>
//void print(int n){
//	if(n){
//		printf("%d", n);
//		print(n-1); // head recursion
//		printf("%d", n);
//	}
//}
void print(int n){
	if(n){
		print(n-1); // head recursion
		printf("%d", n);
		print(n-1); // head recursion
	}
}


unsigned long long int fact(int n){
	if (n==0 || n==1)
		return 1;
	else 
		return n *fact(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	print(n);
//	printf("%llu", fact(n));
	return 0;
}