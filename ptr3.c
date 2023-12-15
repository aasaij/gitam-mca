#include <stdio.h>

int main(){
	void *ptr;
	int x=10;
	float y= 9.9f;
	char c = 65;
	double d = 9.877655;
	ptr = &x;
	printf("%d\n", *(int*)ptr);
	ptr = &y;
	printf("%f\n", *(float*)ptr);
	ptr = &c;
	printf("%c\n", *(char*)ptr);
	ptr = &d;
	printf("%lf", *(double*)ptr);
	return 0;
}