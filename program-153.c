//string compare strcmp built in function in C program..
#include <stdio.h>
#include <string.h>
int main(){
    char x[]="Switzerland";
    char y[]="Switzerland";

    int comparision = strcmp(x, y);
    printf("vale of x is: %d \n", comparision); // return 0 or -1, 0 is true, -1 is false
    return 0;
}


