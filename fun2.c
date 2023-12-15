#include <stdio.h>
//call by value
int main(){
	void swap(int, int);
	int x=10,y=20;
	printf ("%d %d", x,y);
	swap(x,y);
	printf ("\n%d %d", x,y);		
	return 0;
}

void swap (int x, int y){
	int temp = x;
	x = y;
	y = temp;
}