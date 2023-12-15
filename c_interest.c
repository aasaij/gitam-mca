//Program to calculate compound interest
#include <stdio.h>
#include <math.h>
int main(){
	int principal;
	float rate, years, interest;
	printf("Principal amount : ");
	scanf("%i", &principal);
	printf("Rate of Interest : ");
	scanf("%f", &rate);
	printf("Number of years  : ");
	scanf("%f", &years);
	interest = principal * pow(1+rate/100, years);
	printf("Interest : %.2f", interest);
	return 0;
}