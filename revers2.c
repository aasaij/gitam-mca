//Program to reverse a number
#include <stdio.h>

int main(){
	long long int num, sum = 0;
	
	scanf("%lld",&num);
	//method 1
	while(sum = sum * 10 + num%10,num/=10);
	printf("%lld", sum);
	return 0;
}