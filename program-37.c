//switch case in C program...float number not allowed..
#include <stdio.h>
int main(){
    int x;
    x = 2;

    switch(x){
    case 1:
        printf("This is case 1");
        break;
    case 2:
        printf("This is case 2");
        break;
    case 3:
        printf("This is case 3");

    default:
        printf("Unknown this is case");
    }
    return 0;
}
