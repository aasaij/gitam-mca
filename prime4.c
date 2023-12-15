//Program to print prime numbers between x & y
#include <stdio.h>
#include<math.h>
int main(){
	int x,y;
	scanf("%d - %d", &x, &y);
	for (int n = x; n<=y; n++){
		int prime = 1;
		if (n ==1) 
			prime = 0;
		else if (n > 3 && (n %2 == 0 || n % 3 == 0)){
			prime = 0;
		}
		else {
			for (int i = 5; i<=sqrt(n); i+=6){
				if (n %i==0 || n % (i+2)==0){
					prime = 0;
					break;
				}
			}
			if (prime) printf("%d ", n);
		}
	}
	return 0;
}

Quiz : https://tinyurl.com/hvhwepap 

Attendance Link : https://bit.ly/YT-12223
Trainer Name : Tambi
Session : AN




