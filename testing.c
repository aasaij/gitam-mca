//Program to calculate compound interest
// formula : p(1+r/100)^n
//p => Principal amount
//n => Number of years
//r ==> Rate of interest
#include <stdio.h>
#include <math.h>
int main(){
	int principal;
	float rate, years, interest;
	printf("Principal Amount : ");
	scanf("%d", &principal);
	printf("Number of years : ");
	scanf("%f", &years);
	printf("Rate of Interest : ");
	scanf("%f", &rate);
	
	interest = principal * pow( 1 + rate / 100, years);

	printf("Compund Interest : %.2f", interest);
	
	return 0;	
}
