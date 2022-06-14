//switch case in C program...
#include <stdio.h>
int main(){
    int x;
    x = 8;

    switch(x){
    case 1:
        printf("This is case 1");
        break;

    case 2:
        printf("This is case 2");
        break;

    case 5 + 3:  // 5 + x not allowed this expression and float number not allowed..
        printf("This is case 8");
        break;

    default:
        printf("Unknown this is case");
    }
    return 0;
}


