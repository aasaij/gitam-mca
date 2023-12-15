#include <stdio.h>

int main(){
    char str[] = "Rajesh is soo handsome!";
    char str1 = {'m', 'a', 'n','o', 'j','\0'};
    // printf("%lu", sizeof(str));
    str[6] = '\0';
    puts(str);
    return 0;
}