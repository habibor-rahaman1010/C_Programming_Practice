//string copy using strcpy built in function in C program..
#include <stdio.h>
#include <string.h>
int main(){
    char x[]="Bangladesh";
    char y[]="Switzerland ";
    strcpy(x, y);
    printf("vale of x is: %s \n", x);
    printf("vale of x is: %s \n", y);
    return 0;
}

