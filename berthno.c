//Program to find berth using berth number
#include <stdio.h>
int main(){
	int bNum;
	scanf("%d", &bNum);
	if (bNum >= 1 && bNum <= 72){
		switch(bNum % 8){
			case 0: 
				printf("Side upper"); break;
			case 1: case 4: 
				printf("Lower"); break;
			case 2: case 5:
				printf("Middle"); break;
			case3: case 6:
				printf("Upper"); break;
			case 7:
				printf("Side lower");
		}
	}
	return 0;
}