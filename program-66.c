//-1 to -100 odd negative numbers print in C program...
#include <stdio.h>
int main(){
    int x;
    for(x = -1; x >= -100; x = x - 2){
        printf("value of x: %d \n", x);
    }
    return 0;
}

