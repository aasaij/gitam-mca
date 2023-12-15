//switch(<expression>){
//	case <value1>:
//			<statements>
//			break;
//	case <valueStart> ... <valueEnd>:
//		<statements>
//		break;
//	....
//	default:
//		<statements>
//}
//1...7
//1 --> Its Monday.. Concentrate on studies
//2,3,4 ==> Still its week day only.
//5 => Its Friday. Get ready for week end
//6,7 => Enjoy the holiday
//others -> Invalid day

//Program to demonstrate switch case
#include <stdio.h>

int main(){
//	float day;
	int day, x = 5;
	1075;;;;;;;;
	scanf("%d", &day); // day = 5
	switch(day){
		printf("Welcome");
		day = 7;
		case 10-9: // if (day == 1)
			printf("It's Monday."); break;
		case 2 ... 4:
			printf("Still It's week day");break;
//		case x:
		case 5:
			printf("It's Friday. Get ready!'"); break;
		case 6: case 7:
			printf("Enjoy the holiday!"); break;
//		case 8-7:
//			printf("fgghjk"); break;
		default:
			printf("Invalid  day!");
	}
	return 0;
}