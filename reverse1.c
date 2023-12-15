//Program to reverse a number
#include <stdio.h>

int main(){
	long long int num, sum = 0;
	
	scanf("%lld",&num);
	while(num!=0){
		sum = sum * 10 + num%10;
		num/=10;
	}
	printf("%lld", sum);
	return 0;
}