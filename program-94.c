// -1 to -100 print even number do while loop in C programming...
#include <stdio.h>
int main(){
    int i;
    i = -1;
    do{
        if(i % 2 == 0)
            printf("value off i: %d \n", i);
            i -= 1;

    }while(i >= -100);

    return 0;
}

