#include <stdio.h>

int main(){
    // char str[100] = "Rajesh";
    char str[10];
    str[0] = 'M';
    str[1] = 'C';
    str[2] = 'A';
    str[3] = 0;
    // printf("%lu", sizeof(str));
    // str[6] = '\0';
    puts(str);
    return 0;
}