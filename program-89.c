// 100 to 1 print even number do while loop in C programming...
#include <stdio.h>
int main(){
    int i;
    i = 100;
    do{
        printf("value off i: %d \n", i);
        i-= 2;
    }while(i >= 1);

    return 0;
}

