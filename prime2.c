//Program to check whether the given number is prime or not
#include <stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 2; i<=sqrt(n); i++){
		if (n %i==0){
			printf("Not prime!");
			return 0;
		}
	}
	printf("Prime");
	return 0;
}