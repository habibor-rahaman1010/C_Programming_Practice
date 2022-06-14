//patter design program in C
#include <stdio.h>
int main(){
    int x, y;

    for(x = 1; x <= 10; x++){

        for(y = x; y <= 10; y++){
            printf("*");
        }
       printf("\n");
    }
    return 0;
}
