#include <stdio.h>

int main(){
    char str[] = "MCA";
    printf("%lu", sizeof(str));
    str[0] = 'B';
    puts(str);
    return 0;
}