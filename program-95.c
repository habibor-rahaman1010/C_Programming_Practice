// -1 to -100 print even number do while loop in C programming...
#include <stdio.h>
int main(){
    int i;
    i = -100;
    do{
        if(i % 2 == 0)
            printf("value off i: %d \n", i);
            i += 1;

    }while(i <= -1);

    return 0;
}

