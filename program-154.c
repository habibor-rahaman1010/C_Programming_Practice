//string compare strcmp built in function in C program..
#include <stdio.h>
#include <string.h>
int main(){
    char x[]="Switzerland";
    char y[]="Bangladesh";

    int comparision = strcmp(x, y);
    if(comparision == 0){ // return 0 or -1, 0 is true, -1 is false
        printf("x and y are equal. \n");
    }
    else{
        printf("x and y are not equal. \n");
    }
    return 0;
}



