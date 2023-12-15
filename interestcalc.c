//Program to calculate compound interest
#include <stdio.h>
#include <math.h>
int main(){
	int principal;
	char type;
	float rate, years, interest;
	printf("Principal amount : ");
	scanf("%i", &principal);
	printf("Rate of Interest : ");
	scanf("%f", &rate);
	printf("Number of years  : ");
	scanf("%f", &years);
	printf("[S]imple/[C]ompound Interest ? ");
	type = getchar(); // scanf("%c", &type) ==> getc(type, stdin)
	type = getchar(); // scanf("%c", &type) ==> getc(type, stdin)
	if (type=='S' || type =='s')
		interest = principal *years * rate / 100;
	else
		interest = principal * pow(1+rate/100, years);
	printf("Interest : %.2f", interest);
	return 0;
}


//
//if (<conditio>){
//	<statements>
//}
//[else 
//	<statements>]

