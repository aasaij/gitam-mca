//Program for grade calculator
#include <stdio.h>

int main(){
	float score;
	scanf("%f", &score );
	
	if (score >= 0 && score <= 10){
		if(score>=9)
			printf("Grade 'O'");
		else if (score>=8)
			printf("Grade 'A+'");
		else if (score >=7)
			printf("Grade 'A'");
		else
			printf("No Grade");
	}
	else
		printf("Invalid");
	return 0;
}